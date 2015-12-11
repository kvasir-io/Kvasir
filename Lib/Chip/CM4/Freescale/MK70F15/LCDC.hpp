#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Liquid Crystal Display Controller
    namespace LcdcLssar{    ///<LCDC screen start address register
        using Addr = Register::Address<0x400b6000,0x00000003,0,unsigned>;
        ///Screen start address of LCD panel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ssa{}; 
    }
    namespace LcdcLsr{    ///<LCDC size register
        using Addr = Register::Address<0x400b6004,0xf80ffc00,0,unsigned>;
        ///Screen height
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> ymax{}; 
        ///Screen width divided by 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,20),Register::ReadWriteAccess,unsigned> xmax{}; 
    }
    namespace LcdcLvpwr{    ///<LCDC virtual page width register
        using Addr = Register::Address<0x400b6008,0xfffff800,0,unsigned>;
        ///Virtual page width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> vpw{}; 
    }
    namespace LcdcLcpr{    ///<LCDC cursor position register
        using Addr = Register::Address<0x400b600c,0x2c00fc00,0,unsigned>;
        ///Cursor Y position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> cyp{}; 
        ///Cursor X position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> cxp{}; 
        ///Arithmetic operation control
        enum class OpVal {
            v0=0x00000000,     ///<Disable arithmetic operation
            v1=0x00000001,     ///<Enable arithmetic operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,OpVal> op{}; 
        namespace OpValC{
            constexpr Register::FieldValue<decltype(op)::Type,OpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(op)::Type,OpVal::v1> v1{};
        }
        ///Cursor control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> cc{}; 
    }
    namespace LcdcLcwhb{    ///<LCDC cursor width, height, and blink register
        using Addr = Register::Address<0x400b6010,0x60e0ff00,0,unsigned>;
        ///Blink divisor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bd{}; 
        ///Cursor height
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> ch{}; 
        ///Cursor width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> cw{}; 
        ///Blink enable
        enum class BkenVal {
            v0=0x00000000,     ///<Blink is disabled.
            v1=0x00000001,     ///<Blink is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,BkenVal> bkEn{}; 
        namespace BkenValC{
            constexpr Register::FieldValue<decltype(bkEn)::Type,BkenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bkEn)::Type,BkenVal::v1> v1{};
        }
    }
    namespace LcdcLccmr{    ///<LCDC color cursor mapping register
        using Addr = Register::Address<0x400b6014,0xfffc0000,0,unsigned>;
        ///Cursor blue field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> curColB{}; 
        ///Cursor green field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,6),Register::ReadWriteAccess,unsigned> curColG{}; 
        ///Cursor red field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,12),Register::ReadWriteAccess,unsigned> curColR{}; 
    }
    namespace LcdcLpcr{    ///<LCDC panel configuration register
        using Addr = Register::Address<0x400b6018,0x00000040,0,unsigned>;
        ///Pixel clock divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> pcd{}; 
        ///LSCLK select
        enum class SclkselVal {
            v0=0x00000000,     ///<Disable OE and LSCLK in TFT mode when no data output.
            v1=0x00000001,     ///<Always enable LSCLK in TFT mode even if there is no data output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SclkselVal> sclksel{}; 
        namespace SclkselValC{
            constexpr Register::FieldValue<decltype(sclksel)::Type,SclkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sclksel)::Type,SclkselVal::v1> v1{};
        }
        ///Alternate crystal direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> acd{}; 
        ///ACD clock source select
        enum class AcdselVal {
            v0=0x00000000,     ///<Use FLM as a clock source for ACD count.
            v1=0x00000001,     ///<Use LP/HSYNC as a clock source for ACD count.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,AcdselVal> acdsel{}; 
        namespace AcdselValC{
            constexpr Register::FieldValue<decltype(acdsel)::Type,AcdselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(acdsel)::Type,AcdselVal::v1> v1{};
        }
        ///Reverse vertical scan
        enum class RevvsVal {
            v0=0x00000000,     ///<Vertical scan in normal direction.
            v1=0x00000001,     ///<Vertical scan in reverse direction.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,RevvsVal> revVs{}; 
        namespace RevvsValC{
            constexpr Register::FieldValue<decltype(revVs)::Type,RevvsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(revVs)::Type,RevvsVal::v1> v1{};
        }
        ///Swap select
        enum class SwapselVal {
            v0=0x00000000,     ///<24 bpp, 18 bpp, 16 bpp, 12 bpp mode.
            v1=0x00000001,     ///<8 bpp, 4 bpp, 2 bpp, and 1 bpp mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,SwapselVal> swapSel{}; 
        namespace SwapselValC{
            constexpr Register::FieldValue<decltype(swapSel)::Type,SwapselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swapSel)::Type,SwapselVal::v1> v1{};
        }
        ///Endian select
        enum class EndselVal {
            v0=0x00000000,     ///<Little Endian
            v1=0x00000001,     ///<Big Endian
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,EndselVal> endSel{}; 
        namespace EndselValC{
            constexpr Register::FieldValue<decltype(endSel)::Type,EndselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(endSel)::Type,EndselVal::v1> v1{};
        }
        ///LSCLK idle enable
        enum class SclkidleVal {
            v0=0x00000000,     ///<Disable LSCLK
            v1=0x00000001,     ///<Enable LSCLK
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,SclkidleVal> sclkidle{}; 
        namespace SclkidleValC{
            constexpr Register::FieldValue<decltype(sclkidle)::Type,SclkidleVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sclkidle)::Type,SclkidleVal::v1> v1{};
        }
        ///Output enable polarity
        enum class OepolVal {
            v0=0x00000000,     ///<Active high
            v1=0x00000001,     ///<Active low
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,OepolVal> oepol{}; 
        namespace OepolValC{
            constexpr Register::FieldValue<decltype(oepol)::Type,OepolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(oepol)::Type,OepolVal::v1> v1{};
        }
        ///LCD shift clock polarity
        enum class ClkpolVal {
            v0=0x00000000,     ///<Active on negative edge of LSCLK. In TFT mode, active on positive edge of LSCLK.
            v1=0x00000001,     ///<Active on positive edge of LSCLK. In TFT mode, active on negative edge of LSCLK.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ClkpolVal> clkpol{}; 
        namespace ClkpolValC{
            constexpr Register::FieldValue<decltype(clkpol)::Type,ClkpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(clkpol)::Type,ClkpolVal::v1> v1{};
        }
        ///Line pulse polarity
        enum class LppolVal {
            v0=0x00000000,     ///<Active high
            v1=0x00000001,     ///<Active low
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LppolVal> lppol{}; 
        namespace LppolValC{
            constexpr Register::FieldValue<decltype(lppol)::Type,LppolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lppol)::Type,LppolVal::v1> v1{};
        }
        ///First line marker polarity
        enum class FlmpolVal {
            v0=0x00000000,     ///<Active high
            v1=0x00000001,     ///<Active low
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,FlmpolVal> flmpol{}; 
        namespace FlmpolValC{
            constexpr Register::FieldValue<decltype(flmpol)::Type,FlmpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(flmpol)::Type,FlmpolVal::v1> v1{};
        }
        ///Pixel polarity
        enum class PixpolVal {
            v0=0x00000000,     ///<Active high
            v1=0x00000001,     ///<Active low
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,PixpolVal> pixpol{}; 
        namespace PixpolValC{
            constexpr Register::FieldValue<decltype(pixpol)::Type,PixpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pixpol)::Type,PixpolVal::v1> v1{};
        }
        ///Bits per pixel
        enum class BpixVal {
            v000=0x00000000,     ///<1 bpp, FRC bypassed
            v001=0x00000001,     ///<2 bpp
            v010=0x00000002,     ///<4 bpp
            v011=0x00000003,     ///<8 bpp
            v100=0x00000004,     ///<12 bpp (16-bits of memory used)
            v101=0x00000005,     ///<16 bpp
            v110=0x00000006,     ///<18 bpp (32-bits of memory used)
            v111=0x00000007,     ///<24 bpp (32-bits of memory used)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,BpixVal> bpix{}; 
        namespace BpixValC{
            constexpr Register::FieldValue<decltype(bpix)::Type,BpixVal::v000> v000{};
            constexpr Register::FieldValue<decltype(bpix)::Type,BpixVal::v001> v001{};
            constexpr Register::FieldValue<decltype(bpix)::Type,BpixVal::v010> v010{};
            constexpr Register::FieldValue<decltype(bpix)::Type,BpixVal::v011> v011{};
            constexpr Register::FieldValue<decltype(bpix)::Type,BpixVal::v100> v100{};
            constexpr Register::FieldValue<decltype(bpix)::Type,BpixVal::v101> v101{};
            constexpr Register::FieldValue<decltype(bpix)::Type,BpixVal::v110> v110{};
            constexpr Register::FieldValue<decltype(bpix)::Type,BpixVal::v111> v111{};
        }
        ///Panel bus width
        enum class PbsizVal {
            v000=0x00000000,     ///<1-bit
            v001=0x00000001,     ///<2-bit
            v010=0x00000002,     ///<4-bit
            v011=0x00000003,     ///<8-bit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,PbsizVal> pbsiz{}; 
        namespace PbsizValC{
            constexpr Register::FieldValue<decltype(pbsiz)::Type,PbsizVal::v000> v000{};
            constexpr Register::FieldValue<decltype(pbsiz)::Type,PbsizVal::v001> v001{};
            constexpr Register::FieldValue<decltype(pbsiz)::Type,PbsizVal::v010> v010{};
            constexpr Register::FieldValue<decltype(pbsiz)::Type,PbsizVal::v011> v011{};
        }
        ///Interfaces to color display
        enum class ColorVal {
            v0=0x00000000,     ///<LCD panel is a Monochrome display.
            v1=0x00000001,     ///<LCD panel is a Color display.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ColorVal> color{}; 
        namespace ColorValC{
            constexpr Register::FieldValue<decltype(color)::Type,ColorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(color)::Type,ColorVal::v1> v1{};
        }
        ///Interfaces to TFT display
        enum class TftVal {
            v0=0x00000000,     ///<LCD panel is a passive display.
            v1=0x00000001,     ///<LCD panel is an active display: "digital CRT" signal format, FRC is bypassed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,TftVal> tft{}; 
        namespace TftValC{
            constexpr Register::FieldValue<decltype(tft)::Type,TftVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tft)::Type,TftVal::v1> v1{};
        }
    }
    namespace LcdcLhcr{    ///<LCDC horizontal configuration register
        using Addr = Register::Address<0x400b601c,0x03ff0000,0,unsigned>;
        ///Wait between HSYNC and start of next line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> hWait2{}; 
        ///Wait between OE and HSYNC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> hWait1{}; 
        ///Horizontal sync pulse width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> hWidth{}; 
    }
    namespace LcdcLvcr{    ///<LCDC vertical configuration register
        using Addr = Register::Address<0x400b6020,0x03ff0000,0,unsigned>;
        ///Wait between frames 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> vWait2{}; 
        ///Wait between frames 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> vWait1{}; 
        ///Vertical sync pulse width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> vWidth{}; 
    }
    namespace LcdcLpor{    ///<LCDC panning offset register
        using Addr = Register::Address<0x400b6024,0xffffffe0,0,unsigned>;
        ///Panning offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> pos{}; 
    }
    namespace LcdcLpccr{    ///<LCDC PWM contrast control register
        using Addr = Register::Address<0x400b602c,0xffff7800,0,unsigned>;
        ///Pulse-width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pw{}; 
        ///Contrast control enable
        enum class CcenVal {
            v0=0x00000000,     ///<Contrast control is off.
            v1=0x00000001,     ///<Contrast control is on.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,CcenVal> ccEn{}; 
        namespace CcenValC{
            constexpr Register::FieldValue<decltype(ccEn)::Type,CcenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ccEn)::Type,CcenVal::v1> v1{};
        }
        ///Source select
        enum class ScrVal {
            v00=0x00000000,     ///<Line pulse
            v01=0x00000001,     ///<Pixel clock
            v10=0x00000002,     ///<LCD clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,ScrVal> scr{}; 
        namespace ScrValC{
            constexpr Register::FieldValue<decltype(scr)::Type,ScrVal::v00> v00{};
            constexpr Register::FieldValue<decltype(scr)::Type,ScrVal::v01> v01{};
            constexpr Register::FieldValue<decltype(scr)::Type,ScrVal::v10> v10{};
        }
        ///LD mask
        enum class LdmskVal {
            v0=0x00000000,     ///<LD [23:0] is normal.
            v1=0x00000001,     ///<LD [23:0] always equals 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LdmskVal> ldmsk{}; 
        namespace LdmskValC{
            constexpr Register::FieldValue<decltype(ldmsk)::Type,LdmskVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ldmsk)::Type,LdmskVal::v1> v1{};
        }
    }
    namespace LcdcLdcr{    ///<LCDC DMA control register
        using Addr = Register::Address<0x400b6030,0x7f80ff80,0,unsigned>;
        ///DMA trigger mark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> tm{}; 
        ///DMA high mark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> hm{}; 
        ///Burst length
        enum class BurstVal {
            v0=0x00000000,     ///<Burst length is dynamic.
            v1=0x00000001,     ///<Burst length is fixed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,BurstVal> burst{}; 
        namespace BurstValC{
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::v0> v0{};
            constexpr Register::FieldValue<decltype(burst)::Type,BurstVal::v1> v1{};
        }
    }
    namespace LcdcLrmcr{    ///<LCDC refresh mode control register
        using Addr = Register::Address<0x400b6034,0xfffffffe,0,unsigned>;
        ///Self-refresh
        enum class SelfrefVal {
            v0=0x00000000,     ///<Disable self-refresh
            v1=0x00000001,     ///<Enable self-refresh
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SelfrefVal> selfRef{}; 
        namespace SelfrefValC{
            constexpr Register::FieldValue<decltype(selfRef)::Type,SelfrefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(selfRef)::Type,SelfrefVal::v1> v1{};
        }
    }
    namespace LcdcLicr{    ///<LCDC interrupt configuration register
        using Addr = Register::Address<0x400b6038,0xffffffea,0,unsigned>;
        ///Interrupt condition
        enum class IntconVal {
            v0=0x00000000,     ///<Interrupt flag is set when the end of frame (EOF) is reached.
            v1=0x00000001,     ///<Interrupt flag is set when the beginning of frame (BOF) is reached.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IntconVal> intcon{}; 
        namespace IntconValC{
            constexpr Register::FieldValue<decltype(intcon)::Type,IntconVal::v0> v0{};
            constexpr Register::FieldValue<decltype(intcon)::Type,IntconVal::v1> v1{};
        }
        ///Interrupt source
        enum class IntsynVal {
            v0=0x00000000,     ///<Interrupt flag is set on loading the last/first data of frame from memory.
            v1=0x00000001,     ///<Interrupt flag is set on output of the last/first data of frame to LCD panel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,IntsynVal> intsyn{}; 
        namespace IntsynValC{
            constexpr Register::FieldValue<decltype(intsyn)::Type,IntsynVal::v0> v0{};
            constexpr Register::FieldValue<decltype(intsyn)::Type,IntsynVal::v1> v1{};
        }
        ///Graphic window interrupt condition
        enum class GwintconVal {
            v0=0x00000000,     ///<Interrupt flag is set when end of graphic window is reached.
            v1=0x00000001,     ///<Interrupt flag is set when beginning of graphic window is reached.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,GwintconVal> gwIntCon{}; 
        namespace GwintconValC{
            constexpr Register::FieldValue<decltype(gwIntCon)::Type,GwintconVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gwIntCon)::Type,GwintconVal::v1> v1{};
        }
    }
    namespace LcdcLier{    ///<LCDC interrupt enable register
        using Addr = Register::Address<0x400b603c,0xffffff44,0,unsigned>;
        ///Beginning of frame interrupt enable
        enum class BofenVal {
            v0=0x00000000,     ///<Mask interrupt.
            v1=0x00000001,     ///<Enable interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,BofenVal> bofEn{}; 
        namespace BofenValC{
            constexpr Register::FieldValue<decltype(bofEn)::Type,BofenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bofEn)::Type,BofenVal::v1> v1{};
        }
        ///End of frame interrupt enable
        enum class EofenVal {
            v0=0x00000000,     ///<Mask interrupt.
            v1=0x00000001,     ///<Enable interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EofenVal> eofEn{}; 
        namespace EofenValC{
            constexpr Register::FieldValue<decltype(eofEn)::Type,EofenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(eofEn)::Type,EofenVal::v1> v1{};
        }
        ///Under run error interrupt enable
        enum class UdrerrenVal {
            v0=0x00000000,     ///<Mask interrupt.
            v1=0x00000001,     ///<Enable interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,UdrerrenVal> udrErrEn{}; 
        namespace UdrerrenValC{
            constexpr Register::FieldValue<decltype(udrErrEn)::Type,UdrerrenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(udrErrEn)::Type,UdrerrenVal::v1> v1{};
        }
        ///Graphic window beginning of frame interrupt enable
        enum class GwbofenVal {
            v0=0x00000000,     ///<Mask interrupt.
            v1=0x00000001,     ///<Enable interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,GwbofenVal> gwBofEn{}; 
        namespace GwbofenValC{
            constexpr Register::FieldValue<decltype(gwBofEn)::Type,GwbofenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gwBofEn)::Type,GwbofenVal::v1> v1{};
        }
        ///Graphic window end of frame interrupt enable
        enum class GweofenVal {
            v0=0x00000000,     ///<Mask interrupt.
            v1=0x00000001,     ///<Enable interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,GweofenVal> gwEofEn{}; 
        namespace GweofenValC{
            constexpr Register::FieldValue<decltype(gwEofEn)::Type,GweofenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gwEofEn)::Type,GweofenVal::v1> v1{};
        }
        ///Graphic window under run error interrupt enable
        enum class GwudrerrenVal {
            v0=0x00000000,     ///<Mask interrupt.
            v1=0x00000001,     ///<Enable interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,GwudrerrenVal> gwUdrErrEn{}; 
        namespace GwudrerrenValC{
            constexpr Register::FieldValue<decltype(gwUdrErrEn)::Type,GwudrerrenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gwUdrErrEn)::Type,GwudrerrenVal::v1> v1{};
        }
    }
    namespace LcdcLisr{    ///<LCDC interrupt status register
        using Addr = Register::Address<0x400b6040,0xffffff44,0,unsigned>;
        ///Beginning of frame
        enum class BofVal {
            v0=0x00000000,     ///<Interrupt has not occurred.
            v1=0x00000001,     ///<Interrupt has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,BofVal> bof{}; 
        namespace BofValC{
            constexpr Register::FieldValue<decltype(bof)::Type,BofVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bof)::Type,BofVal::v1> v1{};
        }
        ///End of frame
        enum class EofVal {
            v0=0x00000000,     ///<Interrupt has not occurred.
            v1=0x00000001,     ///<Interrupt has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EofVal> eof{}; 
        namespace EofValC{
            constexpr Register::FieldValue<decltype(eof)::Type,EofVal::v0> v0{};
            constexpr Register::FieldValue<decltype(eof)::Type,EofVal::v1> v1{};
        }
        ///Under run error
        enum class UdrerrVal {
            v0=0x00000000,     ///<Interrupt has not occurred.
            v1=0x00000001,     ///<Interrupt has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,UdrerrVal> udrErr{}; 
        namespace UdrerrValC{
            constexpr Register::FieldValue<decltype(udrErr)::Type,UdrerrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(udrErr)::Type,UdrerrVal::v1> v1{};
        }
        ///Graphic window beginning of frame
        enum class GwbofVal {
            v0=0x00000000,     ///<Interrupt has not occurred.
            v1=0x00000001,     ///<Interrupt has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,GwbofVal> gwBof{}; 
        namespace GwbofValC{
            constexpr Register::FieldValue<decltype(gwBof)::Type,GwbofVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gwBof)::Type,GwbofVal::v1> v1{};
        }
        ///Graphic window end of frame
        enum class GweofVal {
            v0=0x00000000,     ///<Interrupt has not occurred.
            v1=0x00000001,     ///<Interrupt has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,GweofVal> gwEof{}; 
        namespace GweofValC{
            constexpr Register::FieldValue<decltype(gwEof)::Type,GweofVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gwEof)::Type,GweofVal::v1> v1{};
        }
        ///Graphic window under run error
        enum class GwudrerrVal {
            v0=0x00000000,     ///<Graphic window under run has not occurred.
            v1=0x00000001,     ///<Graphic window under run has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,GwudrerrVal> gwUdrErr{}; 
        namespace GwudrerrValC{
            constexpr Register::FieldValue<decltype(gwUdrErr)::Type,GwudrerrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gwUdrErr)::Type,GwudrerrVal::v1> v1{};
        }
    }
    namespace LcdcLgwsar{    ///<LCDC graphic window start address register
        using Addr = Register::Address<0x400b6050,0x00000003,0,unsigned>;
        ///Graphic window start address on LCD screen
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> gwsa{}; 
    }
    namespace LcdcLgwsr{    ///<LCDC graphic window size register
        using Addr = Register::Address<0x400b6054,0xf80ffc00,0,unsigned>;
        ///Graphic window height
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> gwh{}; 
        ///Graphic window width divided by 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,20),Register::ReadWriteAccess,unsigned> gww{}; 
    }
    namespace LcdcLgwvpwr{    ///<LCDC graphic window virtual page width register
        using Addr = Register::Address<0x400b6058,0xfffff800,0,unsigned>;
        ///Graphic window virtual page width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> gwvpw{}; 
    }
    namespace LcdcLgwpor{    ///<LCDC graphic window panning offset register
        using Addr = Register::Address<0x400b605c,0xffffffe0,0,unsigned>;
        ///Graphic window panning offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> gwpo{}; 
    }
    namespace LcdcLgwpr{    ///<LCDC graphic window position register
        using Addr = Register::Address<0x400b6060,0xfc00fc00,0,unsigned>;
        ///Graphic window Y position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> gwyp{}; 
        ///Graphic window X position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> gwxp{}; 
    }
    namespace LcdcLgwcr{    ///<LCDC graphic window control register
        using Addr = Register::Address<0x400b6064,0x001c0000,0,unsigned>;
        ///Graphic window color keying blue component
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> gwckb{}; 
        ///Graphic window color keying green component
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,6),Register::ReadWriteAccess,unsigned> gwckg{}; 
        ///Graphic window color keying red component
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,12),Register::ReadWriteAccess,unsigned> gwckr{}; 
        ///Graphic window reverse vertical scan
        enum class GwrvsVal {
            v0=0x00000000,     ///<Vertical scan in normal direction.
            v1=0x00000001,     ///<Vertical scan in reverse direction.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,GwrvsVal> gwRvs{}; 
        namespace GwrvsValC{
            constexpr Register::FieldValue<decltype(gwRvs)::Type,GwrvsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gwRvs)::Type,GwrvsVal::v1> v1{};
        }
        ///Graphic window enable
        enum class GweVal {
            v0=0x00000000,     ///<Disable graphic window on screen.
            v1=0x00000001,     ///<Enable graphic window on screen.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,GweVal> gwe{}; 
        namespace GweValC{
            constexpr Register::FieldValue<decltype(gwe)::Type,GweVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gwe)::Type,GweVal::v1> v1{};
        }
        ///Graphic window color keying enable
        enum class GwckeVal {
            v0=0x00000000,     ///<Disable color keying of graphic window.
            v1=0x00000001,     ///<Enable color keying of graphic window.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,GwckeVal> gwcke{}; 
        namespace GwckeValC{
            constexpr Register::FieldValue<decltype(gwcke)::Type,GwckeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gwcke)::Type,GwckeVal::v1> v1{};
        }
        ///Graphic window alpha value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> gwav{}; 
    }
    namespace LcdcLgwdcr{    ///<LCDC graphic window DMA control register
        using Addr = Register::Address<0x400b6068,0x7f80ff80,0,unsigned>;
        ///Graphic window DMA low mark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> gwtm{}; 
        ///Graphic window DMA high mark
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> gwhm{}; 
        ///Graphic window DMA burst type
        enum class GwbtVal {
            v0=0x00000000,     ///<Burst length is dynamic.
            v1=0x00000001,     ///<Burst length is fixed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,GwbtVal> gwbt{}; 
        namespace GwbtValC{
            constexpr Register::FieldValue<decltype(gwbt)::Type,GwbtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gwbt)::Type,GwbtVal::v1> v1{};
        }
    }
    namespace LcdcLauscr{    ///<LCDC AUS mode control register
        using Addr = Register::Address<0x400b6080,0x7f000000,0,unsigned>;
        ///AUS graphic window color keying blue component
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> agwckb{}; 
        ///AUS graphic window color keying green component
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> agwckg{}; 
        ///AUS graphic window color keying red component
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> agwckr{}; 
        ///AUS mode control
        enum class AusmodeVal {
            v0=0x00000000,     ///<Normal mode
            v1=0x00000001,     ///<AUS mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,AusmodeVal> ausMode{}; 
        namespace AusmodeValC{
            constexpr Register::FieldValue<decltype(ausMode)::Type,AusmodeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ausMode)::Type,AusmodeVal::v1> v1{};
        }
    }
    namespace LcdcLausccr{    ///<LCDC AUS mode cursor control register
        using Addr = Register::Address<0x400b6084,0xff000000,0,unsigned>;
        ///AUS cursor red field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> acurColB{}; 
        ///AUS cursor green field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> acurColG{}; 
        ///AUS cursor red field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> acurColR{}; 
    }
}
