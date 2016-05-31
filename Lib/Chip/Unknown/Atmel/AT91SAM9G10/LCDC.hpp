#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//LCD Controller
    namespace LcdcDmabaddr1{    ///<DMA Base Address Register 1
        using Addr = Register::Address<0x00600000,0x00000003,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> baddrU{}; 
    }
    namespace LcdcDmabaddr2{    ///<DMA Base Address Register 2
        using Addr = Register::Address<0x00600004,0x00000000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> baddrL{}; 
    }
    namespace LcdcDmafrmpt1{    ///<DMA Frame Pointer Register 1
        using Addr = Register::Address<0x00600008,0xff800000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frmptU{}; 
    }
    namespace LcdcDmafrmpt2{    ///<DMA Frame Pointer Register 2
        using Addr = Register::Address<0x0060000c,0xff800000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frmptL{}; 
    }
    namespace LcdcDmafrmadd1{    ///<DMA Frame Address Register 1
        using Addr = Register::Address<0x00600010,0x00000000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frmaddU{}; 
    }
    namespace LcdcDmafrmadd2{    ///<DMA Frame Address Register 2
        using Addr = Register::Address<0x00600014,0x00000000,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frmaddL{}; 
    }
    namespace LcdcDmafrmcfg{    ///<DMA Frame Configuration Register
        using Addr = Register::Address<0x00600018,0x80800000,0x00000000,unsigned>;
        ///Frame Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> frmsize{}; 
        ///Burst Length in Words
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> brstln{}; 
    }
    namespace LcdcDmacon{    ///<DMA Control Register
        using Addr = Register::Address<0x0060001c,0xfffffff8,0x00000000,unsigned>;
        ///DMA Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///DMA Reset (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmarst{}; 
        ///DMA Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmabusy{}; 
    }
    namespace LcdcLcdcon1{    ///<LCD Control Register 1
        using Addr = Register::Address<0x00600800,0x00000ffe,0x00000000,unsigned>;
        ///Bypass LCDDOTCK Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bypass{}; 
        ///Clock Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,12),Register::ReadWriteAccess,unsigned> clkval{}; 
        ///Line Counter (Read-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> linecnt{}; 
    }
    namespace LcdcLcdcon2{    ///<LCD Control Register 2
        using Addr = Register::Address<0x00600804,0x3fff6000,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x00600808,0x70c00000,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x0060080c,0x001fc000,0x00000000,unsigned>;
        ///Horizontal Back Porch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> hbp{}; 
        ///Horizontal synchronization pulse width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> hpw{}; 
        ///Horizontal Front Porch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> hfp{}; 
    }
    namespace LcdcLcdfrmcfg{    ///<LCD Frame Configuration Register
        using Addr = Register::Address<0x00600810,0x001ff800,0x00000000,unsigned>;
        ///Vertical size of LCD module
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> lineval{}; 
        ///Horizontal size of LCD module
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> hozval{}; 
    }
    namespace LcdcLcdfifo{    ///<LCD FIFO Register
        using Addr = Register::Address<0x00600814,0xffff0000,0x00000000,unsigned>;
        ///FIFO Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> fifoth{}; 
    }
    namespace LcdcLcdmval{    ///<LCDMOD Toggle Rate Value Register
        using Addr = Register::Address<0x00600818,0x7fffff00,0x00000000,unsigned>;
        ///LCDMOD toggle rate value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> mval{}; 
        ///LCDMOD toggle rate select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mmode{}; 
    }
    namespace LcdcDp12{    ///<Dithering Pattern DP1_2
        using Addr = Register::Address<0x0060081c,0xffffff00,0x00000000,unsigned>;
        ///Pattern value for half duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dp12{}; 
    }
    namespace LcdcDp47{    ///<Dithering Pattern DP4_7
        using Addr = Register::Address<0x00600820,0xf0000000,0x00000000,unsigned>;
        ///Pattern value for 4/7 duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dp47{}; 
    }
    namespace LcdcDp35{    ///<Dithering Pattern DP3_5
        using Addr = Register::Address<0x00600824,0xfff00000,0x00000000,unsigned>;
        ///Pattern value for 3/5 duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,0),Register::ReadWriteAccess,unsigned> dp35{}; 
    }
    namespace LcdcDp23{    ///<Dithering Pattern DP2_3
        using Addr = Register::Address<0x00600828,0xfffff000,0x00000000,unsigned>;
        ///Pattern value for 2/3 duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dp23{}; 
    }
    namespace LcdcDp57{    ///<Dithering Pattern DP5_7
        using Addr = Register::Address<0x0060082c,0xf0000000,0x00000000,unsigned>;
        ///Pattern value for 5/7 duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dp57{}; 
    }
    namespace LcdcDp34{    ///<Dithering Pattern DP3_4
        using Addr = Register::Address<0x00600830,0xffff0000,0x00000000,unsigned>;
        ///Pattern value for 3/4 duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dp34{}; 
    }
    namespace LcdcDp45{    ///<Dithering Pattern DP4_5
        using Addr = Register::Address<0x00600834,0xfff00000,0x00000000,unsigned>;
        ///Pattern value for 4/5 duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,0),Register::ReadWriteAccess,unsigned> dp45{}; 
    }
    namespace LcdcDp67{    ///<Dithering Pattern DP6_7
        using Addr = Register::Address<0x00600838,0xf0000000,0x00000000,unsigned>;
        ///Pattern value for 6/7 duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dp67{}; 
    }
    namespace LcdcPwrcon{    ///<Power Control Register
        using Addr = Register::Address<0x0060083c,0x7fffff00,0x00000000,unsigned>;
        ///LCD module power control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lcdPwr{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> guardTime{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lcdBusy{}; 
    }
    namespace LcdcContrastCtr{    ///<Contrast Control Register
        using Addr = Register::Address<0x00600840,0xfffffff0,0x00000000,unsigned>;
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ps{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pol{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena{}; 
    }
    namespace LcdcContrastVal{    ///<Contrast Value Register
        using Addr = Register::Address<0x00600844,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLcdIer{    ///<LCD Interrupt Enable Register
        using Addr = Register::Address<0x00600848,0xffffff88,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x0060084c,0xffffff88,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x00600850,0xffffff88,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x00600854,0xffffff88,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x00600858,0xffffff88,0x00000000,unsigned>;
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
    namespace LcdcLcdWpcr{    ///<Write Protection Control Register
        using Addr = Register::Address<0x006008e4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLcdWpsr{    ///<Write Protection Status Register
        using Addr = Register::Address<0x006008e8,0xff0000fe,0x00000000,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpvsrc{}; 
    }
    namespace LcdcLutentry0{    ///<Palette entry
        using Addr = Register::Address<0x00600c00,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry1{    ///<Palette entry
        using Addr = Register::Address<0x00600c04,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry2{    ///<Palette entry
        using Addr = Register::Address<0x00600c08,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry3{    ///<Palette entry
        using Addr = Register::Address<0x00600c0c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry4{    ///<Palette entry
        using Addr = Register::Address<0x00600c10,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry5{    ///<Palette entry
        using Addr = Register::Address<0x00600c14,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry6{    ///<Palette entry
        using Addr = Register::Address<0x00600c18,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry7{    ///<Palette entry
        using Addr = Register::Address<0x00600c1c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry8{    ///<Palette entry
        using Addr = Register::Address<0x00600c20,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry9{    ///<Palette entry
        using Addr = Register::Address<0x00600c24,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry10{    ///<Palette entry
        using Addr = Register::Address<0x00600c28,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry11{    ///<Palette entry
        using Addr = Register::Address<0x00600c2c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry12{    ///<Palette entry
        using Addr = Register::Address<0x00600c30,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry13{    ///<Palette entry
        using Addr = Register::Address<0x00600c34,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry14{    ///<Palette entry
        using Addr = Register::Address<0x00600c38,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry15{    ///<Palette entry
        using Addr = Register::Address<0x00600c3c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry16{    ///<Palette entry
        using Addr = Register::Address<0x00600c40,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry17{    ///<Palette entry
        using Addr = Register::Address<0x00600c44,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry18{    ///<Palette entry
        using Addr = Register::Address<0x00600c48,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry19{    ///<Palette entry
        using Addr = Register::Address<0x00600c4c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry20{    ///<Palette entry
        using Addr = Register::Address<0x00600c50,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry21{    ///<Palette entry
        using Addr = Register::Address<0x00600c54,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry22{    ///<Palette entry
        using Addr = Register::Address<0x00600c58,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry23{    ///<Palette entry
        using Addr = Register::Address<0x00600c5c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry24{    ///<Palette entry
        using Addr = Register::Address<0x00600c60,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry25{    ///<Palette entry
        using Addr = Register::Address<0x00600c64,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry26{    ///<Palette entry
        using Addr = Register::Address<0x00600c68,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry27{    ///<Palette entry
        using Addr = Register::Address<0x00600c6c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry28{    ///<Palette entry
        using Addr = Register::Address<0x00600c70,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry29{    ///<Palette entry
        using Addr = Register::Address<0x00600c74,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry30{    ///<Palette entry
        using Addr = Register::Address<0x00600c78,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry31{    ///<Palette entry
        using Addr = Register::Address<0x00600c7c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry32{    ///<Palette entry
        using Addr = Register::Address<0x00600c80,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry33{    ///<Palette entry
        using Addr = Register::Address<0x00600c84,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry34{    ///<Palette entry
        using Addr = Register::Address<0x00600c88,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry35{    ///<Palette entry
        using Addr = Register::Address<0x00600c8c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry36{    ///<Palette entry
        using Addr = Register::Address<0x00600c90,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry37{    ///<Palette entry
        using Addr = Register::Address<0x00600c94,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry38{    ///<Palette entry
        using Addr = Register::Address<0x00600c98,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry39{    ///<Palette entry
        using Addr = Register::Address<0x00600c9c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry40{    ///<Palette entry
        using Addr = Register::Address<0x00600ca0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry41{    ///<Palette entry
        using Addr = Register::Address<0x00600ca4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry42{    ///<Palette entry
        using Addr = Register::Address<0x00600ca8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry43{    ///<Palette entry
        using Addr = Register::Address<0x00600cac,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry44{    ///<Palette entry
        using Addr = Register::Address<0x00600cb0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry45{    ///<Palette entry
        using Addr = Register::Address<0x00600cb4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry46{    ///<Palette entry
        using Addr = Register::Address<0x00600cb8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry47{    ///<Palette entry
        using Addr = Register::Address<0x00600cbc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry48{    ///<Palette entry
        using Addr = Register::Address<0x00600cc0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry49{    ///<Palette entry
        using Addr = Register::Address<0x00600cc4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry50{    ///<Palette entry
        using Addr = Register::Address<0x00600cc8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry51{    ///<Palette entry
        using Addr = Register::Address<0x00600ccc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry52{    ///<Palette entry
        using Addr = Register::Address<0x00600cd0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry53{    ///<Palette entry
        using Addr = Register::Address<0x00600cd4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry54{    ///<Palette entry
        using Addr = Register::Address<0x00600cd8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry55{    ///<Palette entry
        using Addr = Register::Address<0x00600cdc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry56{    ///<Palette entry
        using Addr = Register::Address<0x00600ce0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry57{    ///<Palette entry
        using Addr = Register::Address<0x00600ce4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry58{    ///<Palette entry
        using Addr = Register::Address<0x00600ce8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry59{    ///<Palette entry
        using Addr = Register::Address<0x00600cec,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry60{    ///<Palette entry
        using Addr = Register::Address<0x00600cf0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry61{    ///<Palette entry
        using Addr = Register::Address<0x00600cf4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry62{    ///<Palette entry
        using Addr = Register::Address<0x00600cf8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry63{    ///<Palette entry
        using Addr = Register::Address<0x00600cfc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry64{    ///<Palette entry
        using Addr = Register::Address<0x00600d00,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry65{    ///<Palette entry
        using Addr = Register::Address<0x00600d04,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry66{    ///<Palette entry
        using Addr = Register::Address<0x00600d08,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry67{    ///<Palette entry
        using Addr = Register::Address<0x00600d0c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry68{    ///<Palette entry
        using Addr = Register::Address<0x00600d10,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry69{    ///<Palette entry
        using Addr = Register::Address<0x00600d14,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry70{    ///<Palette entry
        using Addr = Register::Address<0x00600d18,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry71{    ///<Palette entry
        using Addr = Register::Address<0x00600d1c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry72{    ///<Palette entry
        using Addr = Register::Address<0x00600d20,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry73{    ///<Palette entry
        using Addr = Register::Address<0x00600d24,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry74{    ///<Palette entry
        using Addr = Register::Address<0x00600d28,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry75{    ///<Palette entry
        using Addr = Register::Address<0x00600d2c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry76{    ///<Palette entry
        using Addr = Register::Address<0x00600d30,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry77{    ///<Palette entry
        using Addr = Register::Address<0x00600d34,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry78{    ///<Palette entry
        using Addr = Register::Address<0x00600d38,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry79{    ///<Palette entry
        using Addr = Register::Address<0x00600d3c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry80{    ///<Palette entry
        using Addr = Register::Address<0x00600d40,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry81{    ///<Palette entry
        using Addr = Register::Address<0x00600d44,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry82{    ///<Palette entry
        using Addr = Register::Address<0x00600d48,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry83{    ///<Palette entry
        using Addr = Register::Address<0x00600d4c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry84{    ///<Palette entry
        using Addr = Register::Address<0x00600d50,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry85{    ///<Palette entry
        using Addr = Register::Address<0x00600d54,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry86{    ///<Palette entry
        using Addr = Register::Address<0x00600d58,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry87{    ///<Palette entry
        using Addr = Register::Address<0x00600d5c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry88{    ///<Palette entry
        using Addr = Register::Address<0x00600d60,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry89{    ///<Palette entry
        using Addr = Register::Address<0x00600d64,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry90{    ///<Palette entry
        using Addr = Register::Address<0x00600d68,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry91{    ///<Palette entry
        using Addr = Register::Address<0x00600d6c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry92{    ///<Palette entry
        using Addr = Register::Address<0x00600d70,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry93{    ///<Palette entry
        using Addr = Register::Address<0x00600d74,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry94{    ///<Palette entry
        using Addr = Register::Address<0x00600d78,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry95{    ///<Palette entry
        using Addr = Register::Address<0x00600d7c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry96{    ///<Palette entry
        using Addr = Register::Address<0x00600d80,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry97{    ///<Palette entry
        using Addr = Register::Address<0x00600d84,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry98{    ///<Palette entry
        using Addr = Register::Address<0x00600d88,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry99{    ///<Palette entry
        using Addr = Register::Address<0x00600d8c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry100{    ///<Palette entry
        using Addr = Register::Address<0x00600d90,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry101{    ///<Palette entry
        using Addr = Register::Address<0x00600d94,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry102{    ///<Palette entry
        using Addr = Register::Address<0x00600d98,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry103{    ///<Palette entry
        using Addr = Register::Address<0x00600d9c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry104{    ///<Palette entry
        using Addr = Register::Address<0x00600da0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry105{    ///<Palette entry
        using Addr = Register::Address<0x00600da4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry106{    ///<Palette entry
        using Addr = Register::Address<0x00600da8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry107{    ///<Palette entry
        using Addr = Register::Address<0x00600dac,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry108{    ///<Palette entry
        using Addr = Register::Address<0x00600db0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry109{    ///<Palette entry
        using Addr = Register::Address<0x00600db4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry110{    ///<Palette entry
        using Addr = Register::Address<0x00600db8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry111{    ///<Palette entry
        using Addr = Register::Address<0x00600dbc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry112{    ///<Palette entry
        using Addr = Register::Address<0x00600dc0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry113{    ///<Palette entry
        using Addr = Register::Address<0x00600dc4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry114{    ///<Palette entry
        using Addr = Register::Address<0x00600dc8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry115{    ///<Palette entry
        using Addr = Register::Address<0x00600dcc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry116{    ///<Palette entry
        using Addr = Register::Address<0x00600dd0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry117{    ///<Palette entry
        using Addr = Register::Address<0x00600dd4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry118{    ///<Palette entry
        using Addr = Register::Address<0x00600dd8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry119{    ///<Palette entry
        using Addr = Register::Address<0x00600ddc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry120{    ///<Palette entry
        using Addr = Register::Address<0x00600de0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry121{    ///<Palette entry
        using Addr = Register::Address<0x00600de4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry122{    ///<Palette entry
        using Addr = Register::Address<0x00600de8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry123{    ///<Palette entry
        using Addr = Register::Address<0x00600dec,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry124{    ///<Palette entry
        using Addr = Register::Address<0x00600df0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry125{    ///<Palette entry
        using Addr = Register::Address<0x00600df4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry126{    ///<Palette entry
        using Addr = Register::Address<0x00600df8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry127{    ///<Palette entry
        using Addr = Register::Address<0x00600dfc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry128{    ///<Palette entry
        using Addr = Register::Address<0x00600e00,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry129{    ///<Palette entry
        using Addr = Register::Address<0x00600e04,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry130{    ///<Palette entry
        using Addr = Register::Address<0x00600e08,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry131{    ///<Palette entry
        using Addr = Register::Address<0x00600e0c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry132{    ///<Palette entry
        using Addr = Register::Address<0x00600e10,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry133{    ///<Palette entry
        using Addr = Register::Address<0x00600e14,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry134{    ///<Palette entry
        using Addr = Register::Address<0x00600e18,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry135{    ///<Palette entry
        using Addr = Register::Address<0x00600e1c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry136{    ///<Palette entry
        using Addr = Register::Address<0x00600e20,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry137{    ///<Palette entry
        using Addr = Register::Address<0x00600e24,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry138{    ///<Palette entry
        using Addr = Register::Address<0x00600e28,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry139{    ///<Palette entry
        using Addr = Register::Address<0x00600e2c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry140{    ///<Palette entry
        using Addr = Register::Address<0x00600e30,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry141{    ///<Palette entry
        using Addr = Register::Address<0x00600e34,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry142{    ///<Palette entry
        using Addr = Register::Address<0x00600e38,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry143{    ///<Palette entry
        using Addr = Register::Address<0x00600e3c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry144{    ///<Palette entry
        using Addr = Register::Address<0x00600e40,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry145{    ///<Palette entry
        using Addr = Register::Address<0x00600e44,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry146{    ///<Palette entry
        using Addr = Register::Address<0x00600e48,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry147{    ///<Palette entry
        using Addr = Register::Address<0x00600e4c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry148{    ///<Palette entry
        using Addr = Register::Address<0x00600e50,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry149{    ///<Palette entry
        using Addr = Register::Address<0x00600e54,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry150{    ///<Palette entry
        using Addr = Register::Address<0x00600e58,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry151{    ///<Palette entry
        using Addr = Register::Address<0x00600e5c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry152{    ///<Palette entry
        using Addr = Register::Address<0x00600e60,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry153{    ///<Palette entry
        using Addr = Register::Address<0x00600e64,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry154{    ///<Palette entry
        using Addr = Register::Address<0x00600e68,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry155{    ///<Palette entry
        using Addr = Register::Address<0x00600e6c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry156{    ///<Palette entry
        using Addr = Register::Address<0x00600e70,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry157{    ///<Palette entry
        using Addr = Register::Address<0x00600e74,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry158{    ///<Palette entry
        using Addr = Register::Address<0x00600e78,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry159{    ///<Palette entry
        using Addr = Register::Address<0x00600e7c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry160{    ///<Palette entry
        using Addr = Register::Address<0x00600e80,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry161{    ///<Palette entry
        using Addr = Register::Address<0x00600e84,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry162{    ///<Palette entry
        using Addr = Register::Address<0x00600e88,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry163{    ///<Palette entry
        using Addr = Register::Address<0x00600e8c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry164{    ///<Palette entry
        using Addr = Register::Address<0x00600e90,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry165{    ///<Palette entry
        using Addr = Register::Address<0x00600e94,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry166{    ///<Palette entry
        using Addr = Register::Address<0x00600e98,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry167{    ///<Palette entry
        using Addr = Register::Address<0x00600e9c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry168{    ///<Palette entry
        using Addr = Register::Address<0x00600ea0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry169{    ///<Palette entry
        using Addr = Register::Address<0x00600ea4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry170{    ///<Palette entry
        using Addr = Register::Address<0x00600ea8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry171{    ///<Palette entry
        using Addr = Register::Address<0x00600eac,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry172{    ///<Palette entry
        using Addr = Register::Address<0x00600eb0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry173{    ///<Palette entry
        using Addr = Register::Address<0x00600eb4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry174{    ///<Palette entry
        using Addr = Register::Address<0x00600eb8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry175{    ///<Palette entry
        using Addr = Register::Address<0x00600ebc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry176{    ///<Palette entry
        using Addr = Register::Address<0x00600ec0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry177{    ///<Palette entry
        using Addr = Register::Address<0x00600ec4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry178{    ///<Palette entry
        using Addr = Register::Address<0x00600ec8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry179{    ///<Palette entry
        using Addr = Register::Address<0x00600ecc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry180{    ///<Palette entry
        using Addr = Register::Address<0x00600ed0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry181{    ///<Palette entry
        using Addr = Register::Address<0x00600ed4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry182{    ///<Palette entry
        using Addr = Register::Address<0x00600ed8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry183{    ///<Palette entry
        using Addr = Register::Address<0x00600edc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry184{    ///<Palette entry
        using Addr = Register::Address<0x00600ee0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry185{    ///<Palette entry
        using Addr = Register::Address<0x00600ee4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry186{    ///<Palette entry
        using Addr = Register::Address<0x00600ee8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry187{    ///<Palette entry
        using Addr = Register::Address<0x00600eec,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry188{    ///<Palette entry
        using Addr = Register::Address<0x00600ef0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry189{    ///<Palette entry
        using Addr = Register::Address<0x00600ef4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry190{    ///<Palette entry
        using Addr = Register::Address<0x00600ef8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry191{    ///<Palette entry
        using Addr = Register::Address<0x00600efc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry192{    ///<Palette entry
        using Addr = Register::Address<0x00600f00,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry193{    ///<Palette entry
        using Addr = Register::Address<0x00600f04,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry194{    ///<Palette entry
        using Addr = Register::Address<0x00600f08,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry195{    ///<Palette entry
        using Addr = Register::Address<0x00600f0c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry196{    ///<Palette entry
        using Addr = Register::Address<0x00600f10,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry197{    ///<Palette entry
        using Addr = Register::Address<0x00600f14,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry198{    ///<Palette entry
        using Addr = Register::Address<0x00600f18,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry199{    ///<Palette entry
        using Addr = Register::Address<0x00600f1c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry200{    ///<Palette entry
        using Addr = Register::Address<0x00600f20,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry201{    ///<Palette entry
        using Addr = Register::Address<0x00600f24,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry202{    ///<Palette entry
        using Addr = Register::Address<0x00600f28,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry203{    ///<Palette entry
        using Addr = Register::Address<0x00600f2c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry204{    ///<Palette entry
        using Addr = Register::Address<0x00600f30,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry205{    ///<Palette entry
        using Addr = Register::Address<0x00600f34,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry206{    ///<Palette entry
        using Addr = Register::Address<0x00600f38,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry207{    ///<Palette entry
        using Addr = Register::Address<0x00600f3c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry208{    ///<Palette entry
        using Addr = Register::Address<0x00600f40,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry209{    ///<Palette entry
        using Addr = Register::Address<0x00600f44,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry210{    ///<Palette entry
        using Addr = Register::Address<0x00600f48,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry211{    ///<Palette entry
        using Addr = Register::Address<0x00600f4c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry212{    ///<Palette entry
        using Addr = Register::Address<0x00600f50,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry213{    ///<Palette entry
        using Addr = Register::Address<0x00600f54,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry214{    ///<Palette entry
        using Addr = Register::Address<0x00600f58,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry215{    ///<Palette entry
        using Addr = Register::Address<0x00600f5c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry216{    ///<Palette entry
        using Addr = Register::Address<0x00600f60,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry217{    ///<Palette entry
        using Addr = Register::Address<0x00600f64,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry218{    ///<Palette entry
        using Addr = Register::Address<0x00600f68,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry219{    ///<Palette entry
        using Addr = Register::Address<0x00600f6c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry220{    ///<Palette entry
        using Addr = Register::Address<0x00600f70,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry221{    ///<Palette entry
        using Addr = Register::Address<0x00600f74,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry222{    ///<Palette entry
        using Addr = Register::Address<0x00600f78,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry223{    ///<Palette entry
        using Addr = Register::Address<0x00600f7c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry224{    ///<Palette entry
        using Addr = Register::Address<0x00600f80,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry225{    ///<Palette entry
        using Addr = Register::Address<0x00600f84,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry226{    ///<Palette entry
        using Addr = Register::Address<0x00600f88,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry227{    ///<Palette entry
        using Addr = Register::Address<0x00600f8c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry228{    ///<Palette entry
        using Addr = Register::Address<0x00600f90,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry229{    ///<Palette entry
        using Addr = Register::Address<0x00600f94,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry230{    ///<Palette entry
        using Addr = Register::Address<0x00600f98,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry231{    ///<Palette entry
        using Addr = Register::Address<0x00600f9c,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry232{    ///<Palette entry
        using Addr = Register::Address<0x00600fa0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry233{    ///<Palette entry
        using Addr = Register::Address<0x00600fa4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry234{    ///<Palette entry
        using Addr = Register::Address<0x00600fa8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry235{    ///<Palette entry
        using Addr = Register::Address<0x00600fac,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry236{    ///<Palette entry
        using Addr = Register::Address<0x00600fb0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry237{    ///<Palette entry
        using Addr = Register::Address<0x00600fb4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry238{    ///<Palette entry
        using Addr = Register::Address<0x00600fb8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry239{    ///<Palette entry
        using Addr = Register::Address<0x00600fbc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry240{    ///<Palette entry
        using Addr = Register::Address<0x00600fc0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry241{    ///<Palette entry
        using Addr = Register::Address<0x00600fc4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry242{    ///<Palette entry
        using Addr = Register::Address<0x00600fc8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry243{    ///<Palette entry
        using Addr = Register::Address<0x00600fcc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry244{    ///<Palette entry
        using Addr = Register::Address<0x00600fd0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry245{    ///<Palette entry
        using Addr = Register::Address<0x00600fd4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry246{    ///<Palette entry
        using Addr = Register::Address<0x00600fd8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry247{    ///<Palette entry
        using Addr = Register::Address<0x00600fdc,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry248{    ///<Palette entry
        using Addr = Register::Address<0x00600fe0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry249{    ///<Palette entry
        using Addr = Register::Address<0x00600fe4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry250{    ///<Palette entry
        using Addr = Register::Address<0x00600fe8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry251{    ///<Palette entry
        using Addr = Register::Address<0x00600fec,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry252{    ///<Palette entry
        using Addr = Register::Address<0x00600ff0,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry253{    ///<Palette entry
        using Addr = Register::Address<0x00600ff4,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry254{    ///<Palette entry
        using Addr = Register::Address<0x00600ff8,0xffffffff,0x00000000,unsigned>;
    }
    namespace LcdcLutentry255{    ///<Palette entry
        using Addr = Register::Address<0x00600ffc,0xffffffff,0x00000000,unsigned>;
    }
}
