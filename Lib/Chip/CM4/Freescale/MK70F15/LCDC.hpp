#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Liquid Crystal Display Controller
    namespace LcdcLssar{    ///<LCDC screen start address register
        using Addr = Register::Address<0x400b6000,0x00000003,0,unsigned>;
        ///Screen start address of LCD panel
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ssa{}; 
    }
    namespace LcdcLsr{    ///<LCDC size register
        using Addr = Register::Address<0x400b6004,0xf80ffc00,0,unsigned>;
        ///Screen height
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> ymax{}; 
        ///Screen width divided by 16
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,20),Register::ReadWriteAccess,unsigned> xmax{}; 
    }
    namespace LcdcLvpwr{    ///<LCDC virtual page width register
        using Addr = Register::Address<0x400b6008,0xfffff800,0,unsigned>;
        ///Virtual page width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> vpw{}; 
    }
    namespace LcdcLcpr{    ///<LCDC cursor position register
        using Addr = Register::Address<0x400b600c,0x2c00fc00,0,unsigned>;
        ///Cursor Y position
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> cyp{}; 
        ///Cursor X position
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> cxp{}; 
        ///Arithmetic operation control
        enum class opVal {
            v0=0x00000000,     ///<Disable arithmetic operation
            v1=0x00000001,     ///<Enable arithmetic operation
        };
        namespace opValC{
            constexpr MPL::Value<opVal,opVal::v0> v0{};
            constexpr MPL::Value<opVal,opVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,opVal> op{}; 
        ///Cursor control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace LcdcLcwhb{    ///<LCDC cursor width, height, and blink register
        using Addr = Register::Address<0x400b6010,0x60e0ff00,0,unsigned>;
        ///Blink divisor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bd{}; 
        ///Cursor height
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> ch{}; 
        ///Cursor width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> cw{}; 
        ///Blink enable
        enum class bkEnVal {
            v0=0x00000000,     ///<Blink is disabled.
            v1=0x00000001,     ///<Blink is enabled.
        };
        namespace bkEnValC{
            constexpr MPL::Value<bkEnVal,bkEnVal::v0> v0{};
            constexpr MPL::Value<bkEnVal,bkEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,bkEnVal> bkEn{}; 
    }
    namespace LcdcLccmr{    ///<LCDC color cursor mapping register
        using Addr = Register::Address<0x400b6014,0xfffc0000,0,unsigned>;
        ///Cursor blue field
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> curColB{}; 
        ///Cursor green field
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,6),Register::ReadWriteAccess,unsigned> curColG{}; 
        ///Cursor red field
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,12),Register::ReadWriteAccess,unsigned> curColR{}; 
    }
    namespace LcdcLpcr{    ///<LCDC panel configuration register
        using Addr = Register::Address<0x400b6018,0x00000040,0,unsigned>;
        ///Pixel clock divider
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> pcd{}; 
        ///LSCLK select
        enum class sclkselVal {
            v0=0x00000000,     ///<Disable OE and LSCLK in TFT mode when no data output.
            v1=0x00000001,     ///<Always enable LSCLK in TFT mode even if there is no data output.
        };
        namespace sclkselValC{
            constexpr MPL::Value<sclkselVal,sclkselVal::v0> v0{};
            constexpr MPL::Value<sclkselVal,sclkselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,sclkselVal> sclksel{}; 
        ///Alternate crystal direction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> acd{}; 
        ///ACD clock source select
        enum class acdselVal {
            v0=0x00000000,     ///<Use FLM as a clock source for ACD count.
            v1=0x00000001,     ///<Use LP/HSYNC as a clock source for ACD count.
        };
        namespace acdselValC{
            constexpr MPL::Value<acdselVal,acdselVal::v0> v0{};
            constexpr MPL::Value<acdselVal,acdselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,acdselVal> acdsel{}; 
        ///Reverse vertical scan
        enum class revVsVal {
            v0=0x00000000,     ///<Vertical scan in normal direction.
            v1=0x00000001,     ///<Vertical scan in reverse direction.
        };
        namespace revVsValC{
            constexpr MPL::Value<revVsVal,revVsVal::v0> v0{};
            constexpr MPL::Value<revVsVal,revVsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,revVsVal> revVs{}; 
        ///Swap select
        enum class swapSelVal {
            v0=0x00000000,     ///<24 bpp, 18 bpp, 16 bpp, 12 bpp mode.
            v1=0x00000001,     ///<8 bpp, 4 bpp, 2 bpp, and 1 bpp mode.
        };
        namespace swapSelValC{
            constexpr MPL::Value<swapSelVal,swapSelVal::v0> v0{};
            constexpr MPL::Value<swapSelVal,swapSelVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,swapSelVal> swapSel{}; 
        ///Endian select
        enum class endSelVal {
            v0=0x00000000,     ///<Little Endian
            v1=0x00000001,     ///<Big Endian
        };
        namespace endSelValC{
            constexpr MPL::Value<endSelVal,endSelVal::v0> v0{};
            constexpr MPL::Value<endSelVal,endSelVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,endSelVal> endSel{}; 
        ///LSCLK idle enable
        enum class sclkidleVal {
            v0=0x00000000,     ///<Disable LSCLK
            v1=0x00000001,     ///<Enable LSCLK
        };
        namespace sclkidleValC{
            constexpr MPL::Value<sclkidleVal,sclkidleVal::v0> v0{};
            constexpr MPL::Value<sclkidleVal,sclkidleVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,sclkidleVal> sclkidle{}; 
        ///Output enable polarity
        enum class oepolVal {
            v0=0x00000000,     ///<Active high
            v1=0x00000001,     ///<Active low
        };
        namespace oepolValC{
            constexpr MPL::Value<oepolVal,oepolVal::v0> v0{};
            constexpr MPL::Value<oepolVal,oepolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,oepolVal> oepol{}; 
        ///LCD shift clock polarity
        enum class clkpolVal {
            v0=0x00000000,     ///<Active on negative edge of LSCLK. In TFT mode, active on positive edge of LSCLK.
            v1=0x00000001,     ///<Active on positive edge of LSCLK. In TFT mode, active on negative edge of LSCLK.
        };
        namespace clkpolValC{
            constexpr MPL::Value<clkpolVal,clkpolVal::v0> v0{};
            constexpr MPL::Value<clkpolVal,clkpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,clkpolVal> clkpol{}; 
        ///Line pulse polarity
        enum class lppolVal {
            v0=0x00000000,     ///<Active high
            v1=0x00000001,     ///<Active low
        };
        namespace lppolValC{
            constexpr MPL::Value<lppolVal,lppolVal::v0> v0{};
            constexpr MPL::Value<lppolVal,lppolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,lppolVal> lppol{}; 
        ///First line marker polarity
        enum class flmpolVal {
            v0=0x00000000,     ///<Active high
            v1=0x00000001,     ///<Active low
        };
        namespace flmpolValC{
            constexpr MPL::Value<flmpolVal,flmpolVal::v0> v0{};
            constexpr MPL::Value<flmpolVal,flmpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,flmpolVal> flmpol{}; 
        ///Pixel polarity
        enum class pixpolVal {
            v0=0x00000000,     ///<Active high
            v1=0x00000001,     ///<Active low
        };
        namespace pixpolValC{
            constexpr MPL::Value<pixpolVal,pixpolVal::v0> v0{};
            constexpr MPL::Value<pixpolVal,pixpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,pixpolVal> pixpol{}; 
        ///Bits per pixel
        enum class bpixVal {
            v000=0x00000000,     ///<1 bpp, FRC bypassed
            v001=0x00000001,     ///<2 bpp
            v010=0x00000002,     ///<4 bpp
            v011=0x00000003,     ///<8 bpp
            v100=0x00000004,     ///<12 bpp (16-bits of memory used)
            v101=0x00000005,     ///<16 bpp
            v110=0x00000006,     ///<18 bpp (32-bits of memory used)
            v111=0x00000007,     ///<24 bpp (32-bits of memory used)
        };
        namespace bpixValC{
            constexpr MPL::Value<bpixVal,bpixVal::v000> v000{};
            constexpr MPL::Value<bpixVal,bpixVal::v001> v001{};
            constexpr MPL::Value<bpixVal,bpixVal::v010> v010{};
            constexpr MPL::Value<bpixVal,bpixVal::v011> v011{};
            constexpr MPL::Value<bpixVal,bpixVal::v100> v100{};
            constexpr MPL::Value<bpixVal,bpixVal::v101> v101{};
            constexpr MPL::Value<bpixVal,bpixVal::v110> v110{};
            constexpr MPL::Value<bpixVal,bpixVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,bpixVal> bpix{}; 
        ///Panel bus width
        enum class pbsizVal {
            v000=0x00000000,     ///<1-bit
            v001=0x00000001,     ///<2-bit
            v010=0x00000002,     ///<4-bit
            v011=0x00000003,     ///<8-bit
        };
        namespace pbsizValC{
            constexpr MPL::Value<pbsizVal,pbsizVal::v000> v000{};
            constexpr MPL::Value<pbsizVal,pbsizVal::v001> v001{};
            constexpr MPL::Value<pbsizVal,pbsizVal::v010> v010{};
            constexpr MPL::Value<pbsizVal,pbsizVal::v011> v011{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,pbsizVal> pbsiz{}; 
        ///Interfaces to color display
        enum class colorVal {
            v0=0x00000000,     ///<LCD panel is a Monochrome display.
            v1=0x00000001,     ///<LCD panel is a Color display.
        };
        namespace colorValC{
            constexpr MPL::Value<colorVal,colorVal::v0> v0{};
            constexpr MPL::Value<colorVal,colorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,colorVal> color{}; 
        ///Interfaces to TFT display
        enum class tftVal {
            v0=0x00000000,     ///<LCD panel is a passive display.
            v1=0x00000001,     ///<LCD panel is an active display: "digital CRT" signal format, FRC is bypassed.
        };
        namespace tftValC{
            constexpr MPL::Value<tftVal,tftVal::v0> v0{};
            constexpr MPL::Value<tftVal,tftVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,tftVal> tft{}; 
    }
    namespace LcdcLhcr{    ///<LCDC horizontal configuration register
        using Addr = Register::Address<0x400b601c,0x03ff0000,0,unsigned>;
        ///Wait between HSYNC and start of next line
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> hWait2{}; 
        ///Wait between OE and HSYNC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> hWait1{}; 
        ///Horizontal sync pulse width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> hWidth{}; 
    }
    namespace LcdcLvcr{    ///<LCDC vertical configuration register
        using Addr = Register::Address<0x400b6020,0x03ff0000,0,unsigned>;
        ///Wait between frames 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> vWait2{}; 
        ///Wait between frames 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> vWait1{}; 
        ///Vertical sync pulse width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> vWidth{}; 
    }
    namespace LcdcLpor{    ///<LCDC panning offset register
        using Addr = Register::Address<0x400b6024,0xffffffe0,0,unsigned>;
        ///Panning offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> pos{}; 
    }
    namespace LcdcLpccr{    ///<LCDC PWM contrast control register
        using Addr = Register::Address<0x400b602c,0xffff7800,0,unsigned>;
        ///Pulse-width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pw{}; 
        ///Contrast control enable
        enum class ccEnVal {
            v0=0x00000000,     ///<Contrast control is off.
            v1=0x00000001,     ///<Contrast control is on.
        };
        namespace ccEnValC{
            constexpr MPL::Value<ccEnVal,ccEnVal::v0> v0{};
            constexpr MPL::Value<ccEnVal,ccEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ccEnVal> ccEn{}; 
        ///Source select
        enum class scrVal {
            v00=0x00000000,     ///<Line pulse
            v01=0x00000001,     ///<Pixel clock
            v10=0x00000002,     ///<LCD clock
        };
        namespace scrValC{
            constexpr MPL::Value<scrVal,scrVal::v00> v00{};
            constexpr MPL::Value<scrVal,scrVal::v01> v01{};
            constexpr MPL::Value<scrVal,scrVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,scrVal> scr{}; 
        ///LD mask
        enum class ldmskVal {
            v0=0x00000000,     ///<LD [23:0] is normal.
            v1=0x00000001,     ///<LD [23:0] always equals 0.
        };
        namespace ldmskValC{
            constexpr MPL::Value<ldmskVal,ldmskVal::v0> v0{};
            constexpr MPL::Value<ldmskVal,ldmskVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ldmskVal> ldmsk{}; 
    }
    namespace LcdcLdcr{    ///<LCDC DMA control register
        using Addr = Register::Address<0x400b6030,0x7f80ff80,0,unsigned>;
        ///DMA trigger mark
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> tm{}; 
        ///DMA high mark
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> hm{}; 
        ///Burst length
        enum class burstVal {
            v0=0x00000000,     ///<Burst length is dynamic.
            v1=0x00000001,     ///<Burst length is fixed.
        };
        namespace burstValC{
            constexpr MPL::Value<burstVal,burstVal::v0> v0{};
            constexpr MPL::Value<burstVal,burstVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,burstVal> burst{}; 
    }
    namespace LcdcLrmcr{    ///<LCDC refresh mode control register
        using Addr = Register::Address<0x400b6034,0xfffffffe,0,unsigned>;
        ///Self-refresh
        enum class selfRefVal {
            v0=0x00000000,     ///<Disable self-refresh
            v1=0x00000001,     ///<Enable self-refresh
        };
        namespace selfRefValC{
            constexpr MPL::Value<selfRefVal,selfRefVal::v0> v0{};
            constexpr MPL::Value<selfRefVal,selfRefVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,selfRefVal> selfRef{}; 
    }
    namespace LcdcLicr{    ///<LCDC interrupt configuration register
        using Addr = Register::Address<0x400b6038,0xffffffea,0,unsigned>;
        ///Interrupt condition
        enum class intconVal {
            v0=0x00000000,     ///<Interrupt flag is set when the end of frame (EOF) is reached.
            v1=0x00000001,     ///<Interrupt flag is set when the beginning of frame (BOF) is reached.
        };
        namespace intconValC{
            constexpr MPL::Value<intconVal,intconVal::v0> v0{};
            constexpr MPL::Value<intconVal,intconVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,intconVal> intcon{}; 
        ///Interrupt source
        enum class intsynVal {
            v0=0x00000000,     ///<Interrupt flag is set on loading the last/first data of frame from memory.
            v1=0x00000001,     ///<Interrupt flag is set on output of the last/first data of frame to LCD panel.
        };
        namespace intsynValC{
            constexpr MPL::Value<intsynVal,intsynVal::v0> v0{};
            constexpr MPL::Value<intsynVal,intsynVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,intsynVal> intsyn{}; 
        ///Graphic window interrupt condition
        enum class gwIntConVal {
            v0=0x00000000,     ///<Interrupt flag is set when end of graphic window is reached.
            v1=0x00000001,     ///<Interrupt flag is set when beginning of graphic window is reached.
        };
        namespace gwIntConValC{
            constexpr MPL::Value<gwIntConVal,gwIntConVal::v0> v0{};
            constexpr MPL::Value<gwIntConVal,gwIntConVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,gwIntConVal> gwIntCon{}; 
    }
    namespace LcdcLier{    ///<LCDC interrupt enable register
        using Addr = Register::Address<0x400b603c,0xffffff44,0,unsigned>;
        ///Beginning of frame interrupt enable
        enum class bofEnVal {
            v0=0x00000000,     ///<Mask interrupt.
            v1=0x00000001,     ///<Enable interrupt.
        };
        namespace bofEnValC{
            constexpr MPL::Value<bofEnVal,bofEnVal::v0> v0{};
            constexpr MPL::Value<bofEnVal,bofEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bofEnVal> bofEn{}; 
        ///End of frame interrupt enable
        enum class eofEnVal {
            v0=0x00000000,     ///<Mask interrupt.
            v1=0x00000001,     ///<Enable interrupt.
        };
        namespace eofEnValC{
            constexpr MPL::Value<eofEnVal,eofEnVal::v0> v0{};
            constexpr MPL::Value<eofEnVal,eofEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,eofEnVal> eofEn{}; 
        ///Under run error interrupt enable
        enum class udrErrEnVal {
            v0=0x00000000,     ///<Mask interrupt.
            v1=0x00000001,     ///<Enable interrupt.
        };
        namespace udrErrEnValC{
            constexpr MPL::Value<udrErrEnVal,udrErrEnVal::v0> v0{};
            constexpr MPL::Value<udrErrEnVal,udrErrEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,udrErrEnVal> udrErrEn{}; 
        ///Graphic window beginning of frame interrupt enable
        enum class gwBofEnVal {
            v0=0x00000000,     ///<Mask interrupt.
            v1=0x00000001,     ///<Enable interrupt.
        };
        namespace gwBofEnValC{
            constexpr MPL::Value<gwBofEnVal,gwBofEnVal::v0> v0{};
            constexpr MPL::Value<gwBofEnVal,gwBofEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,gwBofEnVal> gwBofEn{}; 
        ///Graphic window end of frame interrupt enable
        enum class gwEofEnVal {
            v0=0x00000000,     ///<Mask interrupt.
            v1=0x00000001,     ///<Enable interrupt.
        };
        namespace gwEofEnValC{
            constexpr MPL::Value<gwEofEnVal,gwEofEnVal::v0> v0{};
            constexpr MPL::Value<gwEofEnVal,gwEofEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,gwEofEnVal> gwEofEn{}; 
        ///Graphic window under run error interrupt enable
        enum class gwUdrErrEnVal {
            v0=0x00000000,     ///<Mask interrupt.
            v1=0x00000001,     ///<Enable interrupt.
        };
        namespace gwUdrErrEnValC{
            constexpr MPL::Value<gwUdrErrEnVal,gwUdrErrEnVal::v0> v0{};
            constexpr MPL::Value<gwUdrErrEnVal,gwUdrErrEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,gwUdrErrEnVal> gwUdrErrEn{}; 
    }
    namespace LcdcLisr{    ///<LCDC interrupt status register
        using Addr = Register::Address<0x400b6040,0xffffff44,0,unsigned>;
        ///Beginning of frame
        enum class bofVal {
            v0=0x00000000,     ///<Interrupt has not occurred.
            v1=0x00000001,     ///<Interrupt has occurred.
        };
        namespace bofValC{
            constexpr MPL::Value<bofVal,bofVal::v0> v0{};
            constexpr MPL::Value<bofVal,bofVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bofVal> bof{}; 
        ///End of frame
        enum class eofVal {
            v0=0x00000000,     ///<Interrupt has not occurred.
            v1=0x00000001,     ///<Interrupt has occurred.
        };
        namespace eofValC{
            constexpr MPL::Value<eofVal,eofVal::v0> v0{};
            constexpr MPL::Value<eofVal,eofVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,eofVal> eof{}; 
        ///Under run error
        enum class udrErrVal {
            v0=0x00000000,     ///<Interrupt has not occurred.
            v1=0x00000001,     ///<Interrupt has occurred.
        };
        namespace udrErrValC{
            constexpr MPL::Value<udrErrVal,udrErrVal::v0> v0{};
            constexpr MPL::Value<udrErrVal,udrErrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,udrErrVal> udrErr{}; 
        ///Graphic window beginning of frame
        enum class gwBofVal {
            v0=0x00000000,     ///<Interrupt has not occurred.
            v1=0x00000001,     ///<Interrupt has occurred.
        };
        namespace gwBofValC{
            constexpr MPL::Value<gwBofVal,gwBofVal::v0> v0{};
            constexpr MPL::Value<gwBofVal,gwBofVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,gwBofVal> gwBof{}; 
        ///Graphic window end of frame
        enum class gwEofVal {
            v0=0x00000000,     ///<Interrupt has not occurred.
            v1=0x00000001,     ///<Interrupt has occurred.
        };
        namespace gwEofValC{
            constexpr MPL::Value<gwEofVal,gwEofVal::v0> v0{};
            constexpr MPL::Value<gwEofVal,gwEofVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,gwEofVal> gwEof{}; 
        ///Graphic window under run error
        enum class gwUdrErrVal {
            v0=0x00000000,     ///<Graphic window under run has not occurred.
            v1=0x00000001,     ///<Graphic window under run has occurred.
        };
        namespace gwUdrErrValC{
            constexpr MPL::Value<gwUdrErrVal,gwUdrErrVal::v0> v0{};
            constexpr MPL::Value<gwUdrErrVal,gwUdrErrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,gwUdrErrVal> gwUdrErr{}; 
    }
    namespace LcdcLgwsar{    ///<LCDC graphic window start address register
        using Addr = Register::Address<0x400b6050,0x00000003,0,unsigned>;
        ///Graphic window start address on LCD screen
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> gwsa{}; 
    }
    namespace LcdcLgwsr{    ///<LCDC graphic window size register
        using Addr = Register::Address<0x400b6054,0xf80ffc00,0,unsigned>;
        ///Graphic window height
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> gwh{}; 
        ///Graphic window width divided by 16
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,20),Register::ReadWriteAccess,unsigned> gww{}; 
    }
    namespace LcdcLgwvpwr{    ///<LCDC graphic window virtual page width register
        using Addr = Register::Address<0x400b6058,0xfffff800,0,unsigned>;
        ///Graphic window virtual page width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> gwvpw{}; 
    }
    namespace LcdcLgwpor{    ///<LCDC graphic window panning offset register
        using Addr = Register::Address<0x400b605c,0xffffffe0,0,unsigned>;
        ///Graphic window panning offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> gwpo{}; 
    }
    namespace LcdcLgwpr{    ///<LCDC graphic window position register
        using Addr = Register::Address<0x400b6060,0xfc00fc00,0,unsigned>;
        ///Graphic window Y position
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> gwyp{}; 
        ///Graphic window X position
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> gwxp{}; 
    }
    namespace LcdcLgwcr{    ///<LCDC graphic window control register
        using Addr = Register::Address<0x400b6064,0x001c0000,0,unsigned>;
        ///Graphic window color keying blue component
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> gwckb{}; 
        ///Graphic window color keying green component
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,6),Register::ReadWriteAccess,unsigned> gwckg{}; 
        ///Graphic window color keying red component
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,12),Register::ReadWriteAccess,unsigned> gwckr{}; 
        ///Graphic window reverse vertical scan
        enum class gwRvsVal {
            v0=0x00000000,     ///<Vertical scan in normal direction.
            v1=0x00000001,     ///<Vertical scan in reverse direction.
        };
        namespace gwRvsValC{
            constexpr MPL::Value<gwRvsVal,gwRvsVal::v0> v0{};
            constexpr MPL::Value<gwRvsVal,gwRvsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,gwRvsVal> gwRvs{}; 
        ///Graphic window enable
        enum class gweVal {
            v0=0x00000000,     ///<Disable graphic window on screen.
            v1=0x00000001,     ///<Enable graphic window on screen.
        };
        namespace gweValC{
            constexpr MPL::Value<gweVal,gweVal::v0> v0{};
            constexpr MPL::Value<gweVal,gweVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,gweVal> gwe{}; 
        ///Graphic window color keying enable
        enum class gwckeVal {
            v0=0x00000000,     ///<Disable color keying of graphic window.
            v1=0x00000001,     ///<Enable color keying of graphic window.
        };
        namespace gwckeValC{
            constexpr MPL::Value<gwckeVal,gwckeVal::v0> v0{};
            constexpr MPL::Value<gwckeVal,gwckeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,gwckeVal> gwcke{}; 
        ///Graphic window alpha value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> gwav{}; 
    }
    namespace LcdcLgwdcr{    ///<LCDC graphic window DMA control register
        using Addr = Register::Address<0x400b6068,0x7f80ff80,0,unsigned>;
        ///Graphic window DMA low mark
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> gwtm{}; 
        ///Graphic window DMA high mark
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> gwhm{}; 
        ///Graphic window DMA burst type
        enum class gwbtVal {
            v0=0x00000000,     ///<Burst length is dynamic.
            v1=0x00000001,     ///<Burst length is fixed.
        };
        namespace gwbtValC{
            constexpr MPL::Value<gwbtVal,gwbtVal::v0> v0{};
            constexpr MPL::Value<gwbtVal,gwbtVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,gwbtVal> gwbt{}; 
    }
    namespace LcdcLauscr{    ///<LCDC AUS mode control register
        using Addr = Register::Address<0x400b6080,0x7f000000,0,unsigned>;
        ///AUS graphic window color keying blue component
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> agwckb{}; 
        ///AUS graphic window color keying green component
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> agwckg{}; 
        ///AUS graphic window color keying red component
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> agwckr{}; 
        ///AUS mode control
        enum class ausModeVal {
            v0=0x00000000,     ///<Normal mode
            v1=0x00000001,     ///<AUS mode
        };
        namespace ausModeValC{
            constexpr MPL::Value<ausModeVal,ausModeVal::v0> v0{};
            constexpr MPL::Value<ausModeVal,ausModeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ausModeVal> ausMode{}; 
    }
    namespace LcdcLausccr{    ///<LCDC AUS mode cursor control register
        using Addr = Register::Address<0x400b6084,0xff000000,0,unsigned>;
        ///AUS cursor red field
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> acurColB{}; 
        ///AUS cursor green field
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> acurColG{}; 
        ///AUS cursor red field
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> acurColR{}; 
    }
}
