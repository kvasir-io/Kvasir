#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//LCD Controller
    namespace Nonedmabaddr1{    ///<DMA Base Address Register 1
        using Addr = Register::Address<0x00600000,0x00000003,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> baddrU{}; 
    }
    namespace Nonedmabaddr2{    ///<DMA Base Address Register 2
        using Addr = Register::Address<0x00600004,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> baddrL{}; 
    }
    namespace Nonedmafrmpt1{    ///<DMA Frame Pointer Register 1
        using Addr = Register::Address<0x00600008,0xff800000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> frmptU{}; 
    }
    namespace Nonedmafrmpt2{    ///<DMA Frame Pointer Register 2
        using Addr = Register::Address<0x0060000c,0xff800000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> frmptL{}; 
    }
    namespace Nonedmafrmadd1{    ///<DMA Frame Address Register 1
        using Addr = Register::Address<0x00600010,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> frmaddU{}; 
    }
    namespace Nonedmafrmadd2{    ///<DMA Frame Address Register 2
        using Addr = Register::Address<0x00600014,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> frmaddL{}; 
    }
    namespace Nonedmafrmcfg{    ///<DMA Frame Configuration Register
        using Addr = Register::Address<0x00600018,0x80800000,0,unsigned>;
        ///Frame Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> frmsize{}; 
        ///Burst Length in Words
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> brstln{}; 
    }
    namespace Nonedmacon{    ///<DMA Control Register
        using Addr = Register::Address<0x0060001c,0xfffffff8,0,unsigned>;
        ///DMA Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///DMA Reset (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmarst{}; 
        ///DMA Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmabusy{}; 
    }
    namespace Nonelcdcon1{    ///<LCD Control Register 1
        using Addr = Register::Address<0x00600800,0x00000ffe,0,unsigned>;
        ///Bypass LCDDOTCK Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bypass{}; 
        ///Clock Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,12),Register::ReadWriteAccess,unsigned> clkval{}; 
        ///Line Counter (Read-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> linecnt{}; 
    }
    namespace Nonelcdcon2{    ///<LCD Control Register 2
        using Addr = Register::Address<0x00600804,0x3fff6000,0,unsigned>;
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
    namespace Nonelcdtim1{    ///<LCD Timing Register 1
        using Addr = Register::Address<0x00600808,0x70c00000,0,unsigned>;
        ///Vertical Front Porch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> vfp{}; 
        ///Vertical Back Porch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> vbp{}; 
        ///Vertical Synchronization pulse width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> vpw{}; 
        ///Vertical to horizontal delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> vhdly{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> stuckto1{}; 
    }
    namespace Nonelcdtim2{    ///<LCD Timing Register 2
        using Addr = Register::Address<0x0060080c,0x001fc000,0,unsigned>;
        ///Horizontal Back Porch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> hbp{}; 
        ///Horizontal synchronization pulse width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> hpw{}; 
        ///Horizontal Front Porch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> hfp{}; 
    }
    namespace Nonelcdfrmcfg{    ///<LCD Frame Configuration Register
        using Addr = Register::Address<0x00600810,0x001ff800,0,unsigned>;
        ///Vertical size of LCD module
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> lineval{}; 
        ///Horizontal size of LCD module
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> hozval{}; 
    }
    namespace Nonelcdfifo{    ///<LCD FIFO Register
        using Addr = Register::Address<0x00600814,0xffff0000,0,unsigned>;
        ///FIFO Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> fifoth{}; 
    }
    namespace Nonelcdmval{    ///<LCDMOD Toggle Rate Value Register
        using Addr = Register::Address<0x00600818,0x7fffff00,0,unsigned>;
        ///LCDMOD toggle rate value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> mval{}; 
        ///LCDMOD toggle rate select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mmode{}; 
    }
    namespace Nonedp12{    ///<Dithering Pattern DP1_2
        using Addr = Register::Address<0x0060081c,0xffffff00,0,unsigned>;
        ///Pattern value for half duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dp12{}; 
    }
    namespace Nonedp47{    ///<Dithering Pattern DP4_7
        using Addr = Register::Address<0x00600820,0xf0000000,0,unsigned>;
        ///Pattern value for 4/7 duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dp47{}; 
    }
    namespace Nonedp35{    ///<Dithering Pattern DP3_5
        using Addr = Register::Address<0x00600824,0xfff00000,0,unsigned>;
        ///Pattern value for 3/5 duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,0),Register::ReadWriteAccess,unsigned> dp35{}; 
    }
    namespace Nonedp23{    ///<Dithering Pattern DP2_3
        using Addr = Register::Address<0x00600828,0xfffff000,0,unsigned>;
        ///Pattern value for 2/3 duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dp23{}; 
    }
    namespace Nonedp57{    ///<Dithering Pattern DP5_7
        using Addr = Register::Address<0x0060082c,0xf0000000,0,unsigned>;
        ///Pattern value for 5/7 duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dp57{}; 
    }
    namespace Nonedp34{    ///<Dithering Pattern DP3_4
        using Addr = Register::Address<0x00600830,0xffff0000,0,unsigned>;
        ///Pattern value for 3/4 duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dp34{}; 
    }
    namespace Nonedp45{    ///<Dithering Pattern DP4_5
        using Addr = Register::Address<0x00600834,0xfff00000,0,unsigned>;
        ///Pattern value for 4/5 duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,0),Register::ReadWriteAccess,unsigned> dp45{}; 
    }
    namespace Nonedp67{    ///<Dithering Pattern DP6_7
        using Addr = Register::Address<0x00600838,0xf0000000,0,unsigned>;
        ///Pattern value for 6/7 duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dp67{}; 
    }
    namespace Nonepwrcon{    ///<Power Control Register
        using Addr = Register::Address<0x0060083c,0x7fffff00,0,unsigned>;
        ///LCD module power control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lcdPwr{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> guardTime{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lcdBusy{}; 
    }
    namespace NonecontrastCtr{    ///<Contrast Control Register
        using Addr = Register::Address<0x00600840,0xfffffff0,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ps{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pol{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena{}; 
    }
    namespace NonecontrastVal{    ///<Contrast Value Register
        using Addr = Register::Address<0x00600844,0xffffffff,0,unsigned>;
    }
    namespace NonelcdIer{    ///<LCD Interrupt Enable Register
        using Addr = Register::Address<0x00600848,0xffffff88,0,unsigned>;
        ///Line interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lnie{}; 
        ///Last line interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lstlnie{}; 
        ///DMA End of frame interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eofie{}; 
        ///FIFO underflow interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uflwie{}; 
        ///FIFO overwrite interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> owrie{}; 
        ///DMA memory error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> merie{}; 
    }
    namespace NonelcdIdr{    ///<LCD Interrupt Disable Register
        using Addr = Register::Address<0x0060084c,0xffffff88,0,unsigned>;
        ///Line interrupt disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lnid{}; 
        ///Last line interrupt disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lstlnid{}; 
        ///DMA End of frame interrupt disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eofid{}; 
        ///FIFO underflow interrupt disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uflwid{}; 
        ///FIFO overwrite interrupt disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> owrid{}; 
        ///DMA Memory error interrupt disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> merid{}; 
    }
    namespace NonelcdImr{    ///<LCD Interrupt Mask Register
        using Addr = Register::Address<0x00600850,0xffffff88,0,unsigned>;
        ///Line interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lnim{}; 
        ///Last line interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lstlnim{}; 
        ///DMA End of frame interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eofim{}; 
        ///FIFO underflow interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uflwim{}; 
        ///FIFO overwrite interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> owrim{}; 
        ///DMA Memory error interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> merim{}; 
    }
    namespace NonelcdIsr{    ///<LCD Interrupt Status Register
        using Addr = Register::Address<0x00600854,0xffffff88,0,unsigned>;
        ///Line interrupt status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lnis{}; 
        ///Last line interrupt status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lstlnis{}; 
        ///DMA End of frame interrupt status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eofis{}; 
        ///FIFO underflow interrupt status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uflwis{}; 
        ///FIFO overwrite interrupt status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> owris{}; 
        ///DMA Memory error interrupt status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> meris{}; 
    }
    namespace NonelcdIcr{    ///<LCD Interrupt Clear Register
        using Addr = Register::Address<0x00600858,0xffffff88,0,unsigned>;
        ///Line interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lnic{}; 
        ///Last line interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lstlnic{}; 
        ///DMA End of frame interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eofic{}; 
        ///FIFO underflow interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uflwic{}; 
        ///FIFO overwrite interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> owric{}; 
        ///DMA Memory error interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> meric{}; 
    }
    namespace NonelcdWpcr{    ///<Write Protection Control Register
        using Addr = Register::Address<0x006008e4,0xffffffff,0,unsigned>;
    }
    namespace NonelcdWpsr{    ///<Write Protection Status Register
        using Addr = Register::Address<0x006008e8,0xff0000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
    }
    namespace Nonelutentry0{    ///<Palette entry
        using Addr = Register::Address<0x00600c00,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry1{    ///<Palette entry
        using Addr = Register::Address<0x00600c04,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry2{    ///<Palette entry
        using Addr = Register::Address<0x00600c08,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry3{    ///<Palette entry
        using Addr = Register::Address<0x00600c0c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry4{    ///<Palette entry
        using Addr = Register::Address<0x00600c10,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry5{    ///<Palette entry
        using Addr = Register::Address<0x00600c14,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry6{    ///<Palette entry
        using Addr = Register::Address<0x00600c18,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry7{    ///<Palette entry
        using Addr = Register::Address<0x00600c1c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry8{    ///<Palette entry
        using Addr = Register::Address<0x00600c20,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry9{    ///<Palette entry
        using Addr = Register::Address<0x00600c24,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry10{    ///<Palette entry
        using Addr = Register::Address<0x00600c28,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry11{    ///<Palette entry
        using Addr = Register::Address<0x00600c2c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry12{    ///<Palette entry
        using Addr = Register::Address<0x00600c30,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry13{    ///<Palette entry
        using Addr = Register::Address<0x00600c34,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry14{    ///<Palette entry
        using Addr = Register::Address<0x00600c38,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry15{    ///<Palette entry
        using Addr = Register::Address<0x00600c3c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry16{    ///<Palette entry
        using Addr = Register::Address<0x00600c40,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry17{    ///<Palette entry
        using Addr = Register::Address<0x00600c44,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry18{    ///<Palette entry
        using Addr = Register::Address<0x00600c48,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry19{    ///<Palette entry
        using Addr = Register::Address<0x00600c4c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry20{    ///<Palette entry
        using Addr = Register::Address<0x00600c50,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry21{    ///<Palette entry
        using Addr = Register::Address<0x00600c54,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry22{    ///<Palette entry
        using Addr = Register::Address<0x00600c58,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry23{    ///<Palette entry
        using Addr = Register::Address<0x00600c5c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry24{    ///<Palette entry
        using Addr = Register::Address<0x00600c60,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry25{    ///<Palette entry
        using Addr = Register::Address<0x00600c64,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry26{    ///<Palette entry
        using Addr = Register::Address<0x00600c68,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry27{    ///<Palette entry
        using Addr = Register::Address<0x00600c6c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry28{    ///<Palette entry
        using Addr = Register::Address<0x00600c70,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry29{    ///<Palette entry
        using Addr = Register::Address<0x00600c74,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry30{    ///<Palette entry
        using Addr = Register::Address<0x00600c78,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry31{    ///<Palette entry
        using Addr = Register::Address<0x00600c7c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry32{    ///<Palette entry
        using Addr = Register::Address<0x00600c80,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry33{    ///<Palette entry
        using Addr = Register::Address<0x00600c84,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry34{    ///<Palette entry
        using Addr = Register::Address<0x00600c88,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry35{    ///<Palette entry
        using Addr = Register::Address<0x00600c8c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry36{    ///<Palette entry
        using Addr = Register::Address<0x00600c90,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry37{    ///<Palette entry
        using Addr = Register::Address<0x00600c94,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry38{    ///<Palette entry
        using Addr = Register::Address<0x00600c98,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry39{    ///<Palette entry
        using Addr = Register::Address<0x00600c9c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry40{    ///<Palette entry
        using Addr = Register::Address<0x00600ca0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry41{    ///<Palette entry
        using Addr = Register::Address<0x00600ca4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry42{    ///<Palette entry
        using Addr = Register::Address<0x00600ca8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry43{    ///<Palette entry
        using Addr = Register::Address<0x00600cac,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry44{    ///<Palette entry
        using Addr = Register::Address<0x00600cb0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry45{    ///<Palette entry
        using Addr = Register::Address<0x00600cb4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry46{    ///<Palette entry
        using Addr = Register::Address<0x00600cb8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry47{    ///<Palette entry
        using Addr = Register::Address<0x00600cbc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry48{    ///<Palette entry
        using Addr = Register::Address<0x00600cc0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry49{    ///<Palette entry
        using Addr = Register::Address<0x00600cc4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry50{    ///<Palette entry
        using Addr = Register::Address<0x00600cc8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry51{    ///<Palette entry
        using Addr = Register::Address<0x00600ccc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry52{    ///<Palette entry
        using Addr = Register::Address<0x00600cd0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry53{    ///<Palette entry
        using Addr = Register::Address<0x00600cd4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry54{    ///<Palette entry
        using Addr = Register::Address<0x00600cd8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry55{    ///<Palette entry
        using Addr = Register::Address<0x00600cdc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry56{    ///<Palette entry
        using Addr = Register::Address<0x00600ce0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry57{    ///<Palette entry
        using Addr = Register::Address<0x00600ce4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry58{    ///<Palette entry
        using Addr = Register::Address<0x00600ce8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry59{    ///<Palette entry
        using Addr = Register::Address<0x00600cec,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry60{    ///<Palette entry
        using Addr = Register::Address<0x00600cf0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry61{    ///<Palette entry
        using Addr = Register::Address<0x00600cf4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry62{    ///<Palette entry
        using Addr = Register::Address<0x00600cf8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry63{    ///<Palette entry
        using Addr = Register::Address<0x00600cfc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry64{    ///<Palette entry
        using Addr = Register::Address<0x00600d00,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry65{    ///<Palette entry
        using Addr = Register::Address<0x00600d04,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry66{    ///<Palette entry
        using Addr = Register::Address<0x00600d08,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry67{    ///<Palette entry
        using Addr = Register::Address<0x00600d0c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry68{    ///<Palette entry
        using Addr = Register::Address<0x00600d10,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry69{    ///<Palette entry
        using Addr = Register::Address<0x00600d14,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry70{    ///<Palette entry
        using Addr = Register::Address<0x00600d18,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry71{    ///<Palette entry
        using Addr = Register::Address<0x00600d1c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry72{    ///<Palette entry
        using Addr = Register::Address<0x00600d20,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry73{    ///<Palette entry
        using Addr = Register::Address<0x00600d24,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry74{    ///<Palette entry
        using Addr = Register::Address<0x00600d28,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry75{    ///<Palette entry
        using Addr = Register::Address<0x00600d2c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry76{    ///<Palette entry
        using Addr = Register::Address<0x00600d30,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry77{    ///<Palette entry
        using Addr = Register::Address<0x00600d34,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry78{    ///<Palette entry
        using Addr = Register::Address<0x00600d38,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry79{    ///<Palette entry
        using Addr = Register::Address<0x00600d3c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry80{    ///<Palette entry
        using Addr = Register::Address<0x00600d40,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry81{    ///<Palette entry
        using Addr = Register::Address<0x00600d44,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry82{    ///<Palette entry
        using Addr = Register::Address<0x00600d48,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry83{    ///<Palette entry
        using Addr = Register::Address<0x00600d4c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry84{    ///<Palette entry
        using Addr = Register::Address<0x00600d50,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry85{    ///<Palette entry
        using Addr = Register::Address<0x00600d54,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry86{    ///<Palette entry
        using Addr = Register::Address<0x00600d58,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry87{    ///<Palette entry
        using Addr = Register::Address<0x00600d5c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry88{    ///<Palette entry
        using Addr = Register::Address<0x00600d60,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry89{    ///<Palette entry
        using Addr = Register::Address<0x00600d64,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry90{    ///<Palette entry
        using Addr = Register::Address<0x00600d68,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry91{    ///<Palette entry
        using Addr = Register::Address<0x00600d6c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry92{    ///<Palette entry
        using Addr = Register::Address<0x00600d70,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry93{    ///<Palette entry
        using Addr = Register::Address<0x00600d74,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry94{    ///<Palette entry
        using Addr = Register::Address<0x00600d78,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry95{    ///<Palette entry
        using Addr = Register::Address<0x00600d7c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry96{    ///<Palette entry
        using Addr = Register::Address<0x00600d80,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry97{    ///<Palette entry
        using Addr = Register::Address<0x00600d84,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry98{    ///<Palette entry
        using Addr = Register::Address<0x00600d88,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry99{    ///<Palette entry
        using Addr = Register::Address<0x00600d8c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry100{    ///<Palette entry
        using Addr = Register::Address<0x00600d90,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry101{    ///<Palette entry
        using Addr = Register::Address<0x00600d94,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry102{    ///<Palette entry
        using Addr = Register::Address<0x00600d98,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry103{    ///<Palette entry
        using Addr = Register::Address<0x00600d9c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry104{    ///<Palette entry
        using Addr = Register::Address<0x00600da0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry105{    ///<Palette entry
        using Addr = Register::Address<0x00600da4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry106{    ///<Palette entry
        using Addr = Register::Address<0x00600da8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry107{    ///<Palette entry
        using Addr = Register::Address<0x00600dac,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry108{    ///<Palette entry
        using Addr = Register::Address<0x00600db0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry109{    ///<Palette entry
        using Addr = Register::Address<0x00600db4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry110{    ///<Palette entry
        using Addr = Register::Address<0x00600db8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry111{    ///<Palette entry
        using Addr = Register::Address<0x00600dbc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry112{    ///<Palette entry
        using Addr = Register::Address<0x00600dc0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry113{    ///<Palette entry
        using Addr = Register::Address<0x00600dc4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry114{    ///<Palette entry
        using Addr = Register::Address<0x00600dc8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry115{    ///<Palette entry
        using Addr = Register::Address<0x00600dcc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry116{    ///<Palette entry
        using Addr = Register::Address<0x00600dd0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry117{    ///<Palette entry
        using Addr = Register::Address<0x00600dd4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry118{    ///<Palette entry
        using Addr = Register::Address<0x00600dd8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry119{    ///<Palette entry
        using Addr = Register::Address<0x00600ddc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry120{    ///<Palette entry
        using Addr = Register::Address<0x00600de0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry121{    ///<Palette entry
        using Addr = Register::Address<0x00600de4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry122{    ///<Palette entry
        using Addr = Register::Address<0x00600de8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry123{    ///<Palette entry
        using Addr = Register::Address<0x00600dec,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry124{    ///<Palette entry
        using Addr = Register::Address<0x00600df0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry125{    ///<Palette entry
        using Addr = Register::Address<0x00600df4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry126{    ///<Palette entry
        using Addr = Register::Address<0x00600df8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry127{    ///<Palette entry
        using Addr = Register::Address<0x00600dfc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry128{    ///<Palette entry
        using Addr = Register::Address<0x00600e00,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry129{    ///<Palette entry
        using Addr = Register::Address<0x00600e04,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry130{    ///<Palette entry
        using Addr = Register::Address<0x00600e08,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry131{    ///<Palette entry
        using Addr = Register::Address<0x00600e0c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry132{    ///<Palette entry
        using Addr = Register::Address<0x00600e10,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry133{    ///<Palette entry
        using Addr = Register::Address<0x00600e14,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry134{    ///<Palette entry
        using Addr = Register::Address<0x00600e18,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry135{    ///<Palette entry
        using Addr = Register::Address<0x00600e1c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry136{    ///<Palette entry
        using Addr = Register::Address<0x00600e20,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry137{    ///<Palette entry
        using Addr = Register::Address<0x00600e24,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry138{    ///<Palette entry
        using Addr = Register::Address<0x00600e28,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry139{    ///<Palette entry
        using Addr = Register::Address<0x00600e2c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry140{    ///<Palette entry
        using Addr = Register::Address<0x00600e30,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry141{    ///<Palette entry
        using Addr = Register::Address<0x00600e34,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry142{    ///<Palette entry
        using Addr = Register::Address<0x00600e38,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry143{    ///<Palette entry
        using Addr = Register::Address<0x00600e3c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry144{    ///<Palette entry
        using Addr = Register::Address<0x00600e40,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry145{    ///<Palette entry
        using Addr = Register::Address<0x00600e44,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry146{    ///<Palette entry
        using Addr = Register::Address<0x00600e48,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry147{    ///<Palette entry
        using Addr = Register::Address<0x00600e4c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry148{    ///<Palette entry
        using Addr = Register::Address<0x00600e50,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry149{    ///<Palette entry
        using Addr = Register::Address<0x00600e54,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry150{    ///<Palette entry
        using Addr = Register::Address<0x00600e58,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry151{    ///<Palette entry
        using Addr = Register::Address<0x00600e5c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry152{    ///<Palette entry
        using Addr = Register::Address<0x00600e60,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry153{    ///<Palette entry
        using Addr = Register::Address<0x00600e64,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry154{    ///<Palette entry
        using Addr = Register::Address<0x00600e68,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry155{    ///<Palette entry
        using Addr = Register::Address<0x00600e6c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry156{    ///<Palette entry
        using Addr = Register::Address<0x00600e70,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry157{    ///<Palette entry
        using Addr = Register::Address<0x00600e74,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry158{    ///<Palette entry
        using Addr = Register::Address<0x00600e78,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry159{    ///<Palette entry
        using Addr = Register::Address<0x00600e7c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry160{    ///<Palette entry
        using Addr = Register::Address<0x00600e80,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry161{    ///<Palette entry
        using Addr = Register::Address<0x00600e84,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry162{    ///<Palette entry
        using Addr = Register::Address<0x00600e88,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry163{    ///<Palette entry
        using Addr = Register::Address<0x00600e8c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry164{    ///<Palette entry
        using Addr = Register::Address<0x00600e90,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry165{    ///<Palette entry
        using Addr = Register::Address<0x00600e94,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry166{    ///<Palette entry
        using Addr = Register::Address<0x00600e98,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry167{    ///<Palette entry
        using Addr = Register::Address<0x00600e9c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry168{    ///<Palette entry
        using Addr = Register::Address<0x00600ea0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry169{    ///<Palette entry
        using Addr = Register::Address<0x00600ea4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry170{    ///<Palette entry
        using Addr = Register::Address<0x00600ea8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry171{    ///<Palette entry
        using Addr = Register::Address<0x00600eac,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry172{    ///<Palette entry
        using Addr = Register::Address<0x00600eb0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry173{    ///<Palette entry
        using Addr = Register::Address<0x00600eb4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry174{    ///<Palette entry
        using Addr = Register::Address<0x00600eb8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry175{    ///<Palette entry
        using Addr = Register::Address<0x00600ebc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry176{    ///<Palette entry
        using Addr = Register::Address<0x00600ec0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry177{    ///<Palette entry
        using Addr = Register::Address<0x00600ec4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry178{    ///<Palette entry
        using Addr = Register::Address<0x00600ec8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry179{    ///<Palette entry
        using Addr = Register::Address<0x00600ecc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry180{    ///<Palette entry
        using Addr = Register::Address<0x00600ed0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry181{    ///<Palette entry
        using Addr = Register::Address<0x00600ed4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry182{    ///<Palette entry
        using Addr = Register::Address<0x00600ed8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry183{    ///<Palette entry
        using Addr = Register::Address<0x00600edc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry184{    ///<Palette entry
        using Addr = Register::Address<0x00600ee0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry185{    ///<Palette entry
        using Addr = Register::Address<0x00600ee4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry186{    ///<Palette entry
        using Addr = Register::Address<0x00600ee8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry187{    ///<Palette entry
        using Addr = Register::Address<0x00600eec,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry188{    ///<Palette entry
        using Addr = Register::Address<0x00600ef0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry189{    ///<Palette entry
        using Addr = Register::Address<0x00600ef4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry190{    ///<Palette entry
        using Addr = Register::Address<0x00600ef8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry191{    ///<Palette entry
        using Addr = Register::Address<0x00600efc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry192{    ///<Palette entry
        using Addr = Register::Address<0x00600f00,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry193{    ///<Palette entry
        using Addr = Register::Address<0x00600f04,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry194{    ///<Palette entry
        using Addr = Register::Address<0x00600f08,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry195{    ///<Palette entry
        using Addr = Register::Address<0x00600f0c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry196{    ///<Palette entry
        using Addr = Register::Address<0x00600f10,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry197{    ///<Palette entry
        using Addr = Register::Address<0x00600f14,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry198{    ///<Palette entry
        using Addr = Register::Address<0x00600f18,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry199{    ///<Palette entry
        using Addr = Register::Address<0x00600f1c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry200{    ///<Palette entry
        using Addr = Register::Address<0x00600f20,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry201{    ///<Palette entry
        using Addr = Register::Address<0x00600f24,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry202{    ///<Palette entry
        using Addr = Register::Address<0x00600f28,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry203{    ///<Palette entry
        using Addr = Register::Address<0x00600f2c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry204{    ///<Palette entry
        using Addr = Register::Address<0x00600f30,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry205{    ///<Palette entry
        using Addr = Register::Address<0x00600f34,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry206{    ///<Palette entry
        using Addr = Register::Address<0x00600f38,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry207{    ///<Palette entry
        using Addr = Register::Address<0x00600f3c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry208{    ///<Palette entry
        using Addr = Register::Address<0x00600f40,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry209{    ///<Palette entry
        using Addr = Register::Address<0x00600f44,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry210{    ///<Palette entry
        using Addr = Register::Address<0x00600f48,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry211{    ///<Palette entry
        using Addr = Register::Address<0x00600f4c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry212{    ///<Palette entry
        using Addr = Register::Address<0x00600f50,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry213{    ///<Palette entry
        using Addr = Register::Address<0x00600f54,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry214{    ///<Palette entry
        using Addr = Register::Address<0x00600f58,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry215{    ///<Palette entry
        using Addr = Register::Address<0x00600f5c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry216{    ///<Palette entry
        using Addr = Register::Address<0x00600f60,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry217{    ///<Palette entry
        using Addr = Register::Address<0x00600f64,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry218{    ///<Palette entry
        using Addr = Register::Address<0x00600f68,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry219{    ///<Palette entry
        using Addr = Register::Address<0x00600f6c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry220{    ///<Palette entry
        using Addr = Register::Address<0x00600f70,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry221{    ///<Palette entry
        using Addr = Register::Address<0x00600f74,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry222{    ///<Palette entry
        using Addr = Register::Address<0x00600f78,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry223{    ///<Palette entry
        using Addr = Register::Address<0x00600f7c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry224{    ///<Palette entry
        using Addr = Register::Address<0x00600f80,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry225{    ///<Palette entry
        using Addr = Register::Address<0x00600f84,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry226{    ///<Palette entry
        using Addr = Register::Address<0x00600f88,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry227{    ///<Palette entry
        using Addr = Register::Address<0x00600f8c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry228{    ///<Palette entry
        using Addr = Register::Address<0x00600f90,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry229{    ///<Palette entry
        using Addr = Register::Address<0x00600f94,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry230{    ///<Palette entry
        using Addr = Register::Address<0x00600f98,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry231{    ///<Palette entry
        using Addr = Register::Address<0x00600f9c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry232{    ///<Palette entry
        using Addr = Register::Address<0x00600fa0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry233{    ///<Palette entry
        using Addr = Register::Address<0x00600fa4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry234{    ///<Palette entry
        using Addr = Register::Address<0x00600fa8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry235{    ///<Palette entry
        using Addr = Register::Address<0x00600fac,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry236{    ///<Palette entry
        using Addr = Register::Address<0x00600fb0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry237{    ///<Palette entry
        using Addr = Register::Address<0x00600fb4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry238{    ///<Palette entry
        using Addr = Register::Address<0x00600fb8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry239{    ///<Palette entry
        using Addr = Register::Address<0x00600fbc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry240{    ///<Palette entry
        using Addr = Register::Address<0x00600fc0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry241{    ///<Palette entry
        using Addr = Register::Address<0x00600fc4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry242{    ///<Palette entry
        using Addr = Register::Address<0x00600fc8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry243{    ///<Palette entry
        using Addr = Register::Address<0x00600fcc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry244{    ///<Palette entry
        using Addr = Register::Address<0x00600fd0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry245{    ///<Palette entry
        using Addr = Register::Address<0x00600fd4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry246{    ///<Palette entry
        using Addr = Register::Address<0x00600fd8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry247{    ///<Palette entry
        using Addr = Register::Address<0x00600fdc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry248{    ///<Palette entry
        using Addr = Register::Address<0x00600fe0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry249{    ///<Palette entry
        using Addr = Register::Address<0x00600fe4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry250{    ///<Palette entry
        using Addr = Register::Address<0x00600fe8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry251{    ///<Palette entry
        using Addr = Register::Address<0x00600fec,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry252{    ///<Palette entry
        using Addr = Register::Address<0x00600ff0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry253{    ///<Palette entry
        using Addr = Register::Address<0x00600ff4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry254{    ///<Palette entry
        using Addr = Register::Address<0x00600ff8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry255{    ///<Palette entry
        using Addr = Register::Address<0x00600ffc,0xffffffff,0,unsigned>;
    }
}
