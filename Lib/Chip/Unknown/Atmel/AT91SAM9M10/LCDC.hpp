#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//LCD Controller
    namespace LcdcDmabaddr1{    ///<DMA Base Address Register 1
        using Addr = Register::Address<0x00500000,0x00000003,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> baddrU{}; 
    }
    namespace LcdcDmabaddr2{    ///<DMA Base Address Register 2
        using Addr = Register::Address<0x00500004,0x00000000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> baddrL{}; 
    }
    namespace LcdcDmafrmpt1{    ///<DMA Frame Pointer Register 1
        using Addr = Register::Address<0x00500008,0xff800000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frmptU{}; 
    }
    namespace LcdcDmafrmpt2{    ///<DMA Frame Pointer Register 2
        using Addr = Register::Address<0x0050000c,0xff800000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frmptL{}; 
    }
    namespace LcdcDmafrmadd1{    ///<DMA Frame Address Register 1
        using Addr = Register::Address<0x00500010,0x00000000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frmaddU{}; 
    }
    namespace LcdcDmafrmadd2{    ///<DMA Frame Address Register 2
        using Addr = Register::Address<0x00500014,0x00000000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frmaddL{}; 
    }
    namespace LcdcDmafrmcfg{    ///<DMA Frame Configuration Register
        using Addr = Register::Address<0x00500018,0x80800000,0x00000000,unsigned>;
        ///Frame Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> frmsize{}; 
        ///Burst Length in Words
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> brstln{}; 
    }
    namespace LcdcDmacon{    ///<DMA Control Register
        using Addr = Register::Address<0x0050001c,0xffffffe0,0x00000000,unsigned>;
        ///DMA Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///DMA Reset (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmarst{}; 
        ///DMA Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmabusy{}; 
        ///DMA Configuration Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dmaupdt{}; 
        ///DMA 2D Addressing Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dma2den{}; 
    }
    namespace LcdcDma2dcfg{    ///<DMA Control Register
        using Addr = Register::Address<0x00500020,0xe0ff0000,0x00000000,unsigned>;
        ///DMA 2D Addressing Address increment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> addrinc{}; 
        ///DAM2D Addressing Pixel offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> pixeloff{}; 
    }
    namespace LcdcLcdcon1{    ///<LCD Control Register 1
        using Addr = Register::Address<0x00500800,0x00000ffe,0x00000000,unsigned>;
        ///Bypass LCDDOTCK Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bypass{}; 
        ///Clock Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,12),Register::ReadWriteAccess,unsigned> clkval{}; 
        ///Line Counter (Read-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> linecnt{}; 
    }
    namespace LcdcLcdcon2{    ///<LCD Control Register 2
        using Addr = Register::Address<0x00500804,0x3fff6000,0x00000000,unsigned>;
        ///Display Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> distype{}; 
        ///Scan Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> scanmod{}; 
        ///Interface width (STN)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> ifwidth{}; 
        ///Bits per pixel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> pixelsize{}; 
        ///LCDD polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> invvd{}; 
        ///LCDVSYNC polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> invframe{}; 
        ///LCDHSYNC polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> invline{}; 
        ///LCDDOTCK polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> invclk{}; 
        ///LCDDEN polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> invdval{}; 
        ///LCDDOTCK mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clkmod{}; 
        ///Memory Ordering Format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> memor{}; 
    }
    namespace LcdcLcdtim1{    ///<LCD Timing Register 1
        using Addr = Register::Address<0x00500808,0x70c00000,0x00000000,unsigned>;
        ///Vertical Front Porch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> vfp{}; 
        ///Vertical Back Porch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> vbp{}; 
        ///Vertical Synchronization pulse width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> vpw{}; 
        ///Vertical to horizontal delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> vhdly{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> stuckto1{}; 
    }
    namespace LcdcLcdtim2{    ///<LCD Timing Register 2
        using Addr = Register::Address<0x0050080c,0x001fc000,0x00000000,unsigned>;
        ///Horizontal Back Porch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> hbp{}; 
        ///Horizontal synchronization pulse width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> hpw{}; 
        ///Horizontal Front Porch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> hfp{}; 
    }
    namespace LcdcLcdfrmcfg{    ///<LCD Frame Configuration Register
        using Addr = Register::Address<0x00500810,0x001ff800,0x00000000,unsigned>;
        ///Vertical size of LCD module
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> lineval{}; 
        ///Horizontal size of LCD module, in pixels, minus 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> linesize{}; 
    }
    namespace LcdcLcdfifo{    ///<LCD FIFO Register
        using Addr = Register::Address<0x00500814,0xffff0000,0x00000000,unsigned>;
        ///FIFO Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> fifoth{}; 
    }
    namespace LcdcDp12{    ///<Dithering Pattern DP1_2
        using Addr = Register::Address<0x0050081c,0xffffff00,0x00000000,unsigned>;
        ///Pattern value for half duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dp12{}; 
    }
    namespace LcdcDp47{    ///<Dithering Pattern DP4_7
        using Addr = Register::Address<0x00500820,0xf0000000,0x00000000,unsigned>;
        ///Pattern value for 4/7 duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dp47{}; 
    }
    namespace LcdcDp35{    ///<Dithering Pattern DP3_5
        using Addr = Register::Address<0x00500824,0xfff00000,0x00000000,unsigned>;
        ///Pattern value for 3/5 duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,0),Register::ReadWriteAccess,unsigned> dp35{}; 
    }
    namespace LcdcDp23{    ///<Dithering Pattern DP2_3
        using Addr = Register::Address<0x00500828,0xfffff000,0x00000000,unsigned>;
        ///Pattern value for 2/3 duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dp23{}; 
    }
    namespace LcdcDp57{    ///<Dithering Pattern DP5_7
        using Addr = Register::Address<0x0050082c,0xf0000000,0x00000000,unsigned>;
        ///Pattern value for 5/7 duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dp57{}; 
    }
    namespace LcdcDp34{    ///<Dithering Pattern DP3_4
        using Addr = Register::Address<0x00500830,0xffff0000,0x00000000,unsigned>;
        ///Pattern value for 3/4 duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dp34{}; 
    }
    namespace LcdcDp45{    ///<Dithering Pattern DP4_5
        using Addr = Register::Address<0x00500834,0xfff00000,0x00000000,unsigned>;
        ///Pattern value for 4/5 duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,0),Register::ReadWriteAccess,unsigned> dp45{}; 
    }
    namespace LcdcDp67{    ///<Dithering Pattern DP6_7
        using Addr = Register::Address<0x00500838,0xf0000000,0x00000000,unsigned>;
        ///Pattern value for 6/7 duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dp67{}; 
    }
    namespace LcdcPwrcon{    ///<Power Control Register
        using Addr = Register::Address<0x0050083c,0x7fffff00,0x00000000,unsigned>;
        ///LCD module power control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lcdPwr{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> guardTime{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lcdBusy{}; 
    }
    namespace LcdcContrastCtr{    ///<Contrast Control Register
        using Addr = Register::Address<0x00500840,0xfffffff0,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ps{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pol{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena{}; 
    }
    namespace LcdcContrastVal{    ///<Contrast Value Register
        using Addr = Register::Address<0x00500844,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLcdIer{    ///<LCD Interrupt Enable Register
        using Addr = Register::Address<0x00500848,0xffffff88,0x00000000,unsigned>;
        ///Line interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lnie{}; 
        ///Last line interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lstlnie{}; 
        ///DMA End of frame interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eofie{}; 
        ///FIFO underflow interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uflwie{}; 
        ///FIFO overwrite interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> owrie{}; 
        ///DMA memory error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> merie{}; 
    }
    namespace LcdcLcdIdr{    ///<LCD Interrupt Disable Register
        using Addr = Register::Address<0x0050084c,0xffffff88,0x00000000,unsigned>;
        ///Line interrupt disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lnid{}; 
        ///Last line interrupt disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lstlnid{}; 
        ///DMA End of frame interrupt disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eofid{}; 
        ///FIFO underflow interrupt disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uflwid{}; 
        ///FIFO overwrite interrupt disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> owrid{}; 
        ///DMA Memory error interrupt disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> merid{}; 
    }
    namespace LcdcLcdImr{    ///<LCD Interrupt Mask Register
        using Addr = Register::Address<0x00500850,0xffffff88,0x00000000,unsigned>;
        ///Line interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lnim{}; 
        ///Last line interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lstlnim{}; 
        ///DMA End of frame interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eofim{}; 
        ///FIFO underflow interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uflwim{}; 
        ///FIFO overwrite interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> owrim{}; 
        ///DMA Memory error interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> merim{}; 
    }
    namespace LcdcLcdIsr{    ///<LCD Interrupt Status Register
        using Addr = Register::Address<0x00500854,0xffffff88,0x00000000,unsigned>;
        ///Line interrupt status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lnis{}; 
        ///Last line interrupt status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lstlnis{}; 
        ///DMA End of frame interrupt status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eofis{}; 
        ///FIFO underflow interrupt status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uflwis{}; 
        ///FIFO overwrite interrupt status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> owris{}; 
        ///DMA Memory error interrupt status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> meris{}; 
    }
    namespace LcdcLcdIcr{    ///<LCD Interrupt Clear Register
        using Addr = Register::Address<0x00500858,0xffffff88,0x00000000,unsigned>;
        ///Line interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lnic{}; 
        ///Last line interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lstlnic{}; 
        ///DMA End of frame interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eofic{}; 
        ///FIFO underflow interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uflwic{}; 
        ///FIFO overwrite interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> owric{}; 
        ///DMA Memory error interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> meric{}; 
    }
    namespace LcdcLcdItr{    ///<LCD Interrupt Test Register
        using Addr = Register::Address<0x00500860,0xffffff88,0x00000000,unsigned>;
        ///Line interrupt test
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lnit{}; 
        ///Last line interrupt test
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lstlnit{}; 
        ///DMA End of frame interrupt test
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eofit{}; 
        ///FIFO underflow interrupt test
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uflwit{}; 
        ///FIFO overwrite interrupt test
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> owrit{}; 
        ///DMA Memory error interrupt test
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> merit{}; 
    }
    namespace LcdcLcdIrr{    ///<LCD Interrupt Raw Status Register
        using Addr = Register::Address<0x00500864,0xffffff88,0x00000000,unsigned>;
        ///Line interrupt raw status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lnir{}; 
        ///Last line interrupt raw status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lstlnir{}; 
        ///DMA End of frame interrupt raw status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eofir{}; 
        ///FIFO underflow interrupt raw status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> uflwir{}; 
        ///FIFO overwrite interrupt raw status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> owrir{}; 
        ///DMA Memory error interrupt raw status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> merir{}; 
    }
    namespace LcdcLcdWpcr{    ///<Write Protection Control Register
        using Addr = Register::Address<0x005008e4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLcdWpsr{    ///<Write Protection Status Register
        using Addr = Register::Address<0x005008e8,0xff0000fe,0x00000000,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpvsrc{}; 
    }
    namespace LcdcLutentry0{    ///<Palette entry
        using Addr = Register::Address<0x00500c00,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry1{    ///<Palette entry
        using Addr = Register::Address<0x00500c04,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry2{    ///<Palette entry
        using Addr = Register::Address<0x00500c08,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry3{    ///<Palette entry
        using Addr = Register::Address<0x00500c0c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry4{    ///<Palette entry
        using Addr = Register::Address<0x00500c10,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry5{    ///<Palette entry
        using Addr = Register::Address<0x00500c14,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry6{    ///<Palette entry
        using Addr = Register::Address<0x00500c18,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry7{    ///<Palette entry
        using Addr = Register::Address<0x00500c1c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry8{    ///<Palette entry
        using Addr = Register::Address<0x00500c20,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry9{    ///<Palette entry
        using Addr = Register::Address<0x00500c24,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry10{    ///<Palette entry
        using Addr = Register::Address<0x00500c28,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry11{    ///<Palette entry
        using Addr = Register::Address<0x00500c2c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry12{    ///<Palette entry
        using Addr = Register::Address<0x00500c30,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry13{    ///<Palette entry
        using Addr = Register::Address<0x00500c34,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry14{    ///<Palette entry
        using Addr = Register::Address<0x00500c38,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry15{    ///<Palette entry
        using Addr = Register::Address<0x00500c3c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry16{    ///<Palette entry
        using Addr = Register::Address<0x00500c40,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry17{    ///<Palette entry
        using Addr = Register::Address<0x00500c44,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry18{    ///<Palette entry
        using Addr = Register::Address<0x00500c48,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry19{    ///<Palette entry
        using Addr = Register::Address<0x00500c4c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry20{    ///<Palette entry
        using Addr = Register::Address<0x00500c50,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry21{    ///<Palette entry
        using Addr = Register::Address<0x00500c54,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry22{    ///<Palette entry
        using Addr = Register::Address<0x00500c58,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry23{    ///<Palette entry
        using Addr = Register::Address<0x00500c5c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry24{    ///<Palette entry
        using Addr = Register::Address<0x00500c60,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry25{    ///<Palette entry
        using Addr = Register::Address<0x00500c64,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry26{    ///<Palette entry
        using Addr = Register::Address<0x00500c68,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry27{    ///<Palette entry
        using Addr = Register::Address<0x00500c6c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry28{    ///<Palette entry
        using Addr = Register::Address<0x00500c70,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry29{    ///<Palette entry
        using Addr = Register::Address<0x00500c74,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry30{    ///<Palette entry
        using Addr = Register::Address<0x00500c78,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry31{    ///<Palette entry
        using Addr = Register::Address<0x00500c7c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry32{    ///<Palette entry
        using Addr = Register::Address<0x00500c80,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry33{    ///<Palette entry
        using Addr = Register::Address<0x00500c84,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry34{    ///<Palette entry
        using Addr = Register::Address<0x00500c88,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry35{    ///<Palette entry
        using Addr = Register::Address<0x00500c8c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry36{    ///<Palette entry
        using Addr = Register::Address<0x00500c90,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry37{    ///<Palette entry
        using Addr = Register::Address<0x00500c94,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry38{    ///<Palette entry
        using Addr = Register::Address<0x00500c98,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry39{    ///<Palette entry
        using Addr = Register::Address<0x00500c9c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry40{    ///<Palette entry
        using Addr = Register::Address<0x00500ca0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry41{    ///<Palette entry
        using Addr = Register::Address<0x00500ca4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry42{    ///<Palette entry
        using Addr = Register::Address<0x00500ca8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry43{    ///<Palette entry
        using Addr = Register::Address<0x00500cac,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry44{    ///<Palette entry
        using Addr = Register::Address<0x00500cb0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry45{    ///<Palette entry
        using Addr = Register::Address<0x00500cb4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry46{    ///<Palette entry
        using Addr = Register::Address<0x00500cb8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry47{    ///<Palette entry
        using Addr = Register::Address<0x00500cbc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry48{    ///<Palette entry
        using Addr = Register::Address<0x00500cc0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry49{    ///<Palette entry
        using Addr = Register::Address<0x00500cc4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry50{    ///<Palette entry
        using Addr = Register::Address<0x00500cc8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry51{    ///<Palette entry
        using Addr = Register::Address<0x00500ccc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry52{    ///<Palette entry
        using Addr = Register::Address<0x00500cd0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry53{    ///<Palette entry
        using Addr = Register::Address<0x00500cd4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry54{    ///<Palette entry
        using Addr = Register::Address<0x00500cd8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry55{    ///<Palette entry
        using Addr = Register::Address<0x00500cdc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry56{    ///<Palette entry
        using Addr = Register::Address<0x00500ce0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry57{    ///<Palette entry
        using Addr = Register::Address<0x00500ce4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry58{    ///<Palette entry
        using Addr = Register::Address<0x00500ce8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry59{    ///<Palette entry
        using Addr = Register::Address<0x00500cec,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry60{    ///<Palette entry
        using Addr = Register::Address<0x00500cf0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry61{    ///<Palette entry
        using Addr = Register::Address<0x00500cf4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry62{    ///<Palette entry
        using Addr = Register::Address<0x00500cf8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry63{    ///<Palette entry
        using Addr = Register::Address<0x00500cfc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry64{    ///<Palette entry
        using Addr = Register::Address<0x00500d00,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry65{    ///<Palette entry
        using Addr = Register::Address<0x00500d04,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry66{    ///<Palette entry
        using Addr = Register::Address<0x00500d08,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry67{    ///<Palette entry
        using Addr = Register::Address<0x00500d0c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry68{    ///<Palette entry
        using Addr = Register::Address<0x00500d10,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry69{    ///<Palette entry
        using Addr = Register::Address<0x00500d14,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry70{    ///<Palette entry
        using Addr = Register::Address<0x00500d18,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry71{    ///<Palette entry
        using Addr = Register::Address<0x00500d1c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry72{    ///<Palette entry
        using Addr = Register::Address<0x00500d20,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry73{    ///<Palette entry
        using Addr = Register::Address<0x00500d24,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry74{    ///<Palette entry
        using Addr = Register::Address<0x00500d28,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry75{    ///<Palette entry
        using Addr = Register::Address<0x00500d2c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry76{    ///<Palette entry
        using Addr = Register::Address<0x00500d30,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry77{    ///<Palette entry
        using Addr = Register::Address<0x00500d34,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry78{    ///<Palette entry
        using Addr = Register::Address<0x00500d38,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry79{    ///<Palette entry
        using Addr = Register::Address<0x00500d3c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry80{    ///<Palette entry
        using Addr = Register::Address<0x00500d40,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry81{    ///<Palette entry
        using Addr = Register::Address<0x00500d44,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry82{    ///<Palette entry
        using Addr = Register::Address<0x00500d48,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry83{    ///<Palette entry
        using Addr = Register::Address<0x00500d4c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry84{    ///<Palette entry
        using Addr = Register::Address<0x00500d50,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry85{    ///<Palette entry
        using Addr = Register::Address<0x00500d54,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry86{    ///<Palette entry
        using Addr = Register::Address<0x00500d58,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry87{    ///<Palette entry
        using Addr = Register::Address<0x00500d5c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry88{    ///<Palette entry
        using Addr = Register::Address<0x00500d60,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry89{    ///<Palette entry
        using Addr = Register::Address<0x00500d64,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry90{    ///<Palette entry
        using Addr = Register::Address<0x00500d68,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry91{    ///<Palette entry
        using Addr = Register::Address<0x00500d6c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry92{    ///<Palette entry
        using Addr = Register::Address<0x00500d70,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry93{    ///<Palette entry
        using Addr = Register::Address<0x00500d74,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry94{    ///<Palette entry
        using Addr = Register::Address<0x00500d78,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry95{    ///<Palette entry
        using Addr = Register::Address<0x00500d7c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry96{    ///<Palette entry
        using Addr = Register::Address<0x00500d80,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry97{    ///<Palette entry
        using Addr = Register::Address<0x00500d84,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry98{    ///<Palette entry
        using Addr = Register::Address<0x00500d88,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry99{    ///<Palette entry
        using Addr = Register::Address<0x00500d8c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry100{    ///<Palette entry
        using Addr = Register::Address<0x00500d90,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry101{    ///<Palette entry
        using Addr = Register::Address<0x00500d94,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry102{    ///<Palette entry
        using Addr = Register::Address<0x00500d98,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry103{    ///<Palette entry
        using Addr = Register::Address<0x00500d9c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry104{    ///<Palette entry
        using Addr = Register::Address<0x00500da0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry105{    ///<Palette entry
        using Addr = Register::Address<0x00500da4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry106{    ///<Palette entry
        using Addr = Register::Address<0x00500da8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry107{    ///<Palette entry
        using Addr = Register::Address<0x00500dac,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry108{    ///<Palette entry
        using Addr = Register::Address<0x00500db0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry109{    ///<Palette entry
        using Addr = Register::Address<0x00500db4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry110{    ///<Palette entry
        using Addr = Register::Address<0x00500db8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry111{    ///<Palette entry
        using Addr = Register::Address<0x00500dbc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry112{    ///<Palette entry
        using Addr = Register::Address<0x00500dc0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry113{    ///<Palette entry
        using Addr = Register::Address<0x00500dc4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry114{    ///<Palette entry
        using Addr = Register::Address<0x00500dc8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry115{    ///<Palette entry
        using Addr = Register::Address<0x00500dcc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry116{    ///<Palette entry
        using Addr = Register::Address<0x00500dd0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry117{    ///<Palette entry
        using Addr = Register::Address<0x00500dd4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry118{    ///<Palette entry
        using Addr = Register::Address<0x00500dd8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry119{    ///<Palette entry
        using Addr = Register::Address<0x00500ddc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry120{    ///<Palette entry
        using Addr = Register::Address<0x00500de0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry121{    ///<Palette entry
        using Addr = Register::Address<0x00500de4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry122{    ///<Palette entry
        using Addr = Register::Address<0x00500de8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry123{    ///<Palette entry
        using Addr = Register::Address<0x00500dec,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry124{    ///<Palette entry
        using Addr = Register::Address<0x00500df0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry125{    ///<Palette entry
        using Addr = Register::Address<0x00500df4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry126{    ///<Palette entry
        using Addr = Register::Address<0x00500df8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry127{    ///<Palette entry
        using Addr = Register::Address<0x00500dfc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry128{    ///<Palette entry
        using Addr = Register::Address<0x00500e00,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry129{    ///<Palette entry
        using Addr = Register::Address<0x00500e04,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry130{    ///<Palette entry
        using Addr = Register::Address<0x00500e08,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry131{    ///<Palette entry
        using Addr = Register::Address<0x00500e0c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry132{    ///<Palette entry
        using Addr = Register::Address<0x00500e10,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry133{    ///<Palette entry
        using Addr = Register::Address<0x00500e14,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry134{    ///<Palette entry
        using Addr = Register::Address<0x00500e18,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry135{    ///<Palette entry
        using Addr = Register::Address<0x00500e1c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry136{    ///<Palette entry
        using Addr = Register::Address<0x00500e20,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry137{    ///<Palette entry
        using Addr = Register::Address<0x00500e24,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry138{    ///<Palette entry
        using Addr = Register::Address<0x00500e28,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry139{    ///<Palette entry
        using Addr = Register::Address<0x00500e2c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry140{    ///<Palette entry
        using Addr = Register::Address<0x00500e30,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry141{    ///<Palette entry
        using Addr = Register::Address<0x00500e34,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry142{    ///<Palette entry
        using Addr = Register::Address<0x00500e38,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry143{    ///<Palette entry
        using Addr = Register::Address<0x00500e3c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry144{    ///<Palette entry
        using Addr = Register::Address<0x00500e40,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry145{    ///<Palette entry
        using Addr = Register::Address<0x00500e44,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry146{    ///<Palette entry
        using Addr = Register::Address<0x00500e48,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry147{    ///<Palette entry
        using Addr = Register::Address<0x00500e4c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry148{    ///<Palette entry
        using Addr = Register::Address<0x00500e50,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry149{    ///<Palette entry
        using Addr = Register::Address<0x00500e54,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry150{    ///<Palette entry
        using Addr = Register::Address<0x00500e58,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry151{    ///<Palette entry
        using Addr = Register::Address<0x00500e5c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry152{    ///<Palette entry
        using Addr = Register::Address<0x00500e60,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry153{    ///<Palette entry
        using Addr = Register::Address<0x00500e64,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry154{    ///<Palette entry
        using Addr = Register::Address<0x00500e68,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry155{    ///<Palette entry
        using Addr = Register::Address<0x00500e6c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry156{    ///<Palette entry
        using Addr = Register::Address<0x00500e70,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry157{    ///<Palette entry
        using Addr = Register::Address<0x00500e74,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry158{    ///<Palette entry
        using Addr = Register::Address<0x00500e78,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry159{    ///<Palette entry
        using Addr = Register::Address<0x00500e7c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry160{    ///<Palette entry
        using Addr = Register::Address<0x00500e80,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry161{    ///<Palette entry
        using Addr = Register::Address<0x00500e84,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry162{    ///<Palette entry
        using Addr = Register::Address<0x00500e88,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry163{    ///<Palette entry
        using Addr = Register::Address<0x00500e8c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry164{    ///<Palette entry
        using Addr = Register::Address<0x00500e90,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry165{    ///<Palette entry
        using Addr = Register::Address<0x00500e94,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry166{    ///<Palette entry
        using Addr = Register::Address<0x00500e98,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry167{    ///<Palette entry
        using Addr = Register::Address<0x00500e9c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry168{    ///<Palette entry
        using Addr = Register::Address<0x00500ea0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry169{    ///<Palette entry
        using Addr = Register::Address<0x00500ea4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry170{    ///<Palette entry
        using Addr = Register::Address<0x00500ea8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry171{    ///<Palette entry
        using Addr = Register::Address<0x00500eac,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry172{    ///<Palette entry
        using Addr = Register::Address<0x00500eb0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry173{    ///<Palette entry
        using Addr = Register::Address<0x00500eb4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry174{    ///<Palette entry
        using Addr = Register::Address<0x00500eb8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry175{    ///<Palette entry
        using Addr = Register::Address<0x00500ebc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry176{    ///<Palette entry
        using Addr = Register::Address<0x00500ec0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry177{    ///<Palette entry
        using Addr = Register::Address<0x00500ec4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry178{    ///<Palette entry
        using Addr = Register::Address<0x00500ec8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry179{    ///<Palette entry
        using Addr = Register::Address<0x00500ecc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry180{    ///<Palette entry
        using Addr = Register::Address<0x00500ed0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry181{    ///<Palette entry
        using Addr = Register::Address<0x00500ed4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry182{    ///<Palette entry
        using Addr = Register::Address<0x00500ed8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry183{    ///<Palette entry
        using Addr = Register::Address<0x00500edc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry184{    ///<Palette entry
        using Addr = Register::Address<0x00500ee0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry185{    ///<Palette entry
        using Addr = Register::Address<0x00500ee4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry186{    ///<Palette entry
        using Addr = Register::Address<0x00500ee8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry187{    ///<Palette entry
        using Addr = Register::Address<0x00500eec,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry188{    ///<Palette entry
        using Addr = Register::Address<0x00500ef0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry189{    ///<Palette entry
        using Addr = Register::Address<0x00500ef4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry190{    ///<Palette entry
        using Addr = Register::Address<0x00500ef8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry191{    ///<Palette entry
        using Addr = Register::Address<0x00500efc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry192{    ///<Palette entry
        using Addr = Register::Address<0x00500f00,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry193{    ///<Palette entry
        using Addr = Register::Address<0x00500f04,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry194{    ///<Palette entry
        using Addr = Register::Address<0x00500f08,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry195{    ///<Palette entry
        using Addr = Register::Address<0x00500f0c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry196{    ///<Palette entry
        using Addr = Register::Address<0x00500f10,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry197{    ///<Palette entry
        using Addr = Register::Address<0x00500f14,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry198{    ///<Palette entry
        using Addr = Register::Address<0x00500f18,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry199{    ///<Palette entry
        using Addr = Register::Address<0x00500f1c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry200{    ///<Palette entry
        using Addr = Register::Address<0x00500f20,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry201{    ///<Palette entry
        using Addr = Register::Address<0x00500f24,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry202{    ///<Palette entry
        using Addr = Register::Address<0x00500f28,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry203{    ///<Palette entry
        using Addr = Register::Address<0x00500f2c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry204{    ///<Palette entry
        using Addr = Register::Address<0x00500f30,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry205{    ///<Palette entry
        using Addr = Register::Address<0x00500f34,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry206{    ///<Palette entry
        using Addr = Register::Address<0x00500f38,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry207{    ///<Palette entry
        using Addr = Register::Address<0x00500f3c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry208{    ///<Palette entry
        using Addr = Register::Address<0x00500f40,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry209{    ///<Palette entry
        using Addr = Register::Address<0x00500f44,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry210{    ///<Palette entry
        using Addr = Register::Address<0x00500f48,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry211{    ///<Palette entry
        using Addr = Register::Address<0x00500f4c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry212{    ///<Palette entry
        using Addr = Register::Address<0x00500f50,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry213{    ///<Palette entry
        using Addr = Register::Address<0x00500f54,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry214{    ///<Palette entry
        using Addr = Register::Address<0x00500f58,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry215{    ///<Palette entry
        using Addr = Register::Address<0x00500f5c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry216{    ///<Palette entry
        using Addr = Register::Address<0x00500f60,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry217{    ///<Palette entry
        using Addr = Register::Address<0x00500f64,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry218{    ///<Palette entry
        using Addr = Register::Address<0x00500f68,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry219{    ///<Palette entry
        using Addr = Register::Address<0x00500f6c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry220{    ///<Palette entry
        using Addr = Register::Address<0x00500f70,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry221{    ///<Palette entry
        using Addr = Register::Address<0x00500f74,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry222{    ///<Palette entry
        using Addr = Register::Address<0x00500f78,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry223{    ///<Palette entry
        using Addr = Register::Address<0x00500f7c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry224{    ///<Palette entry
        using Addr = Register::Address<0x00500f80,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry225{    ///<Palette entry
        using Addr = Register::Address<0x00500f84,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry226{    ///<Palette entry
        using Addr = Register::Address<0x00500f88,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry227{    ///<Palette entry
        using Addr = Register::Address<0x00500f8c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry228{    ///<Palette entry
        using Addr = Register::Address<0x00500f90,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry229{    ///<Palette entry
        using Addr = Register::Address<0x00500f94,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry230{    ///<Palette entry
        using Addr = Register::Address<0x00500f98,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry231{    ///<Palette entry
        using Addr = Register::Address<0x00500f9c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry232{    ///<Palette entry
        using Addr = Register::Address<0x00500fa0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry233{    ///<Palette entry
        using Addr = Register::Address<0x00500fa4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry234{    ///<Palette entry
        using Addr = Register::Address<0x00500fa8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry235{    ///<Palette entry
        using Addr = Register::Address<0x00500fac,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry236{    ///<Palette entry
        using Addr = Register::Address<0x00500fb0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry237{    ///<Palette entry
        using Addr = Register::Address<0x00500fb4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry238{    ///<Palette entry
        using Addr = Register::Address<0x00500fb8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry239{    ///<Palette entry
        using Addr = Register::Address<0x00500fbc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry240{    ///<Palette entry
        using Addr = Register::Address<0x00500fc0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry241{    ///<Palette entry
        using Addr = Register::Address<0x00500fc4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry242{    ///<Palette entry
        using Addr = Register::Address<0x00500fc8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry243{    ///<Palette entry
        using Addr = Register::Address<0x00500fcc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry244{    ///<Palette entry
        using Addr = Register::Address<0x00500fd0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry245{    ///<Palette entry
        using Addr = Register::Address<0x00500fd4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry246{    ///<Palette entry
        using Addr = Register::Address<0x00500fd8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry247{    ///<Palette entry
        using Addr = Register::Address<0x00500fdc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry248{    ///<Palette entry
        using Addr = Register::Address<0x00500fe0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry249{    ///<Palette entry
        using Addr = Register::Address<0x00500fe4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry250{    ///<Palette entry
        using Addr = Register::Address<0x00500fe8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry251{    ///<Palette entry
        using Addr = Register::Address<0x00500fec,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry252{    ///<Palette entry
        using Addr = Register::Address<0x00500ff0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry253{    ///<Palette entry
        using Addr = Register::Address<0x00500ff4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry254{    ///<Palette entry
        using Addr = Register::Address<0x00500ff8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry255{    ///<Palette entry
        using Addr = Register::Address<0x00500ffc,0xffffffff,0x00000000,unsigned>;
    }
}
