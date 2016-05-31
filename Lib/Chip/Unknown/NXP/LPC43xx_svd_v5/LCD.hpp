#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx LCD Modification date=1/19/2011 Major revision=0 Minor revision=7 
    namespace LcdTimh{    ///<Horizontal Timing Control register
        using Addr = Register::Address<0x40008000,0x00000000,0x00000000,unsigned>;
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Pixels-per-line. The PPL bit field specifies the number of pixels in each line or row of the screen. PPL is a 6-bit value that represents between 16 and 1024 pixels per line. PPL counts the number of pixel clocks that occur before the HFP is applied. Program the value required divided by 16, minus 1. Actual pixels-per-line = 16 * (PPL + 1). For example, to obtain 320 pixels per line, program PPL as (320/16) -1 = 19.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> ppl{}; 
        ///Horizontal synchronization pulse width. The 8-bit HSW field specifies the pulse width of the line clock in passive mode, or the horizontal synchronization pulse in active mode. Program with desired value minus 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> hsw{}; 
        ///Horizontal front porch. The 8-bit HFP field sets the number of pixel clock intervals at the end of each line or row of pixels, before the LCD line clock is pulsed. When a complete line of pixels is transmitted to the LCD driver, the value in HFP counts the number of pixel clocks to wait before asserting the line clock. HFP can generate a period of 1-256 pixel clock cycles. Program with desired value minus 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hfp{}; 
        ///Horizontal back porch. The 8-bit HBP field is used to specify the number of pixel clock periods inserted at the beginning of each line or row of pixels. After the line clock for the previous line has been deasserted, the value in HBP counts the number of pixel clocks to wait before starting the next display line. HBP can generate a delay of 1-256 pixel clock cycles. Program with desired value minus 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> hbp{}; 
    }
    namespace LcdTimv{    ///<Vertical Timing Control register
        using Addr = Register::Address<0x40008004,0x00000000,0x00000000,unsigned>;
        ///Lines per panel. This is the number of active lines per screen. The LPP field specifies the total number of lines or rows on the LCD panel being controlled. LPP is a 10 bit value allowing between 1 and 1024 lines. Program the register with the number of lines per LCD panel, minus 1. For dual panel displays, program the register with the number of lines on each of the upper and lower panels.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> lpp{}; 
        ///Vertical synchronization pulse width. This is the number of horizontal synchronization lines. The 6 bit VSW field specifies the pulse width of the vertical synchronization pulse. Program the register with the number of lines required, minus one. The number of horizontal synchronization lines must be small (for example, program to zero) for passive STN LCDs. The higher the value the worse the contrast on STN LCDs.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> vsw{}; 
        ///Vertical front porch. This is the number of inactive lines at the end of a frame, before the vertical synchronization period. The 8 bit VFP field specifies the number of line clocks to insert at the end of each frame. When a complete frame of pixels is transmitted to the LCD display, the value in VFP is used to count the number of line clock periods to wait. After the count has elapsed, the vertical synchronization signal, LCDFP, is asserted in active mode, or extra line clocks are inserted as specified by the VSW bit field in passive mode. VFP generates 0-255 line clock cycles. Program to zero on passive displays for improved contrast.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> vfp{}; 
        ///Vertical back porch. This is the number of inactive lines at the start of a frame, after the vertical synchronization period. The 8 bit VBP field specifies the number of line clocks inserted at the beginning of each frame. The VBP count starts immediately after the vertical synchronization signal for the previous frame has been negated for active mode, or the extra line clocks have been inserted as specified by the VSW bit field in passive mode. After this has occurred, the count value in VBP sets the number of line clock periods inserted before the next frame. VBP generates 0-255 extra line clock cycles. Program to zero on passive displays for improved contrast.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> vbp{}; 
    }
    namespace LcdPol{    ///<Clock and Signal Polarity Control register
        using Addr = Register::Address<0x40008008,0x00000000,0x00000000,unsigned>;
        ///Lower five bits of panel clock divisor. The ten-bit PCD field, comprising PCD_HI (bits 31:27 of this register) and PCD_LO, is used to derive the LCD panel clock frequency LCDDCLK from the input clock, LCDDCLK = LCDCLK/(PCD+2). For monochrome STN displays with a 4 or 8-bit interface, the panel clock is a factor of four and eight down from the actual individual pixel clock rate. For color STN displays, 22/3 pixels are output per LCDDCLK cycle, so the panel clock is 0.375 times the pixel rate. For TFT displays, the pixel clock divider can be bypassed by setting the BCD bit in this register. Note: data path latency forces some restrictions on the usable minimum values for the panel clock divider in STN modes: Single panel color mode, PCD = 1 (LCDDCLK = LCDCLK/3). Dual panel color mode, PCD = 4 (LCDDCLK = LCDCLK/6). Single panel monochrome 4-bit interface mode, PCD = 2(LCDDCLK = LCDCLK/4). Dual panel monochrome 4-bit interface mode and single panel monochrome 8-bit interface mode, PCD = 6(LCDDCLK = LCDCLK/8). Dual panel monochrome 8-bit interface mode, PCD = 14(LCDDCLK = LCDCLK/16).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> pcdLo{}; 
        ///Clock Select. This bit controls the selection of the source for LCDCLK. 0 = the clock source for the LCD block is CCLK. 1 = the clock source for the LCD block is LCDCLKIN (external clock input for the LVD).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clksel{}; 
        ///AC bias pin frequency. The AC bias pin frequency is only applicable to STN displays. These require the pixel voltage polarity to periodically reverse to prevent damage caused by DC charge accumulation. Program this field with the required value minus one to apply the number of line clocks between each toggle of the AC bias pin, LCDENAB. This field has no effect if the LCD is operating in TFT mode, when the LCDENAB pin is used as a data enable signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> acb{}; 
        ///Invert vertical synchronization. The IVS bit inverts the polarity of the LCDFP signal. 0 = LCDFP pin is active HIGH and inactive LOW. 1 = LCDFP pin is active LOW and inactive HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ivs{}; 
        ///Invert horizontal synchronization. The IHS bit inverts the polarity of the LCDLP signal. 0 = LCDLP pin is active HIGH and inactive LOW. 1 = LCDLP pin is active LOW and inactive HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ihs{}; 
        ///Invert panel clock. The IPC bit selects the edge of the panel clock on which pixel data is driven out onto the LCD data lines. 0 = Data is driven on the LCD data lines on the rising edge of LCDDCLK. 1 = Data is driven on the LCD data lines on the falling edge of LCDDCLK.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ipc{}; 
        ///Invert output enable. This bit selects the active polarity of the output enable signal in TFT mode. In this mode, the LCDENAB pin is used as an enable that indicates to the LCD panel when valid display data is available. In active display mode, data is driven onto the LCD data lines at the programmed edge of LCDDCLK when LCDENAB is in its active state. 0 = LCDENAB output pin is active HIGH in TFT mode. 1 = LCDENAB output pin is active LOW in TFT mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ioe{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clocks per line. This field specifies the number of actual LCDDCLK clocks to the LCD panel on each line. This is the number of PPL divided by either 1 (for TFT), 4 or 8 (for monochrome passive), 2 2/3 (for color passive), minus one. This must be correctly programmed in addition to the PPL bit in the TIMH register for the LCD display to work correctly.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> cpl{}; 
        ///Bypass pixel clock divider. Setting this to 1 bypasses the pixel clock divider logic. This is mainly used for TFT displays.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> bcd{}; 
        ///Upper five bits of panel clock divisor. See description for PCD_LO, in bits [4:0] of this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,27),Register::ReadWriteAccess,unsigned> pcdHi{}; 
    }
    namespace LcdLe{    ///<Line End Control register
        using Addr = Register::Address<0x4000800c,0x00000000,0x00000000,unsigned>;
        ///Line-end delay. Controls Line-end signal delay from the rising-edge of the last panel clock, LCDDCLK. Program with number of LCDCLK clock periods minus 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> led{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///LCD Line end enable. 0 = LCDLE disabled (held LOW). 1 = LCDLE signal active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lee{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,17),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace LcdUpbase{    ///<Upper Panel Frame Base Address register
        using Addr = Register::Address<0x40008010,0x00000000,0x00000000,unsigned>;
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///LCD upper panel base address. This is the start address of the upper panel frame data in memory and is doubleword aligned.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> lcdupbase{}; 
    }
    namespace LcdLpbase{    ///<Lower Panel Frame Base Address register
        using Addr = Register::Address<0x40008014,0x00000000,0x00000000,unsigned>;
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///LCD lower panel base address. This is the start address of the lower panel frame data in memory and is doubleword aligned.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> lcdlpbase{}; 
    }
    namespace LcdCtrl{    ///<LCD Control register
        using Addr = Register::Address<0x40008018,0x00000000,0x00000000,unsigned>;
        ///LCD enable control bit. 0 = LCD disabled. Signals LCDLP, LCDDCLK, LCDFP, LCDENAB, and LCDLE are low. 1 = LCD enabled. Signals LCDLP, LCDDCLK, LCDFP, LCDENAB, and LCDLE are high. See LCD power-up and power-down sequence for details on LCD power sequencing.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lcden{}; 
        ///LCD bits per pixel: Selects the number of bits per LCD pixel: 000 = 1 bpp. 001 = 2 bpp. 010 = 4 bpp. 011 = 8 bpp. 100 = 16 bpp. 101 = 24 bpp (TFT panel only). 110 = 16 bpp, 5:6:5 mode. 111 = 12 bpp, 4:4:4 mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> lcdbpp{}; 
        ///STN LCD monochrome/color selection. 0 = STN LCD is color. 1 = STN LCD is monochrome. This bit has no meaning in TFT mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lcdbw{}; 
        ///LCD panel TFT type selection. 0 = LCD is an STN display. Use gray scaler. 1 = LCD is a TFT display. Do not use gray scaler.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lcdtft{}; 
        ///Monochrome LCD interface width. This bit controls whether a monochrome STN LCD uses a 4 or 8-bit parallel interface. It has no meaning in other modes and must be programmed to zero. 0 = monochrome LCD uses a 4-bit interface. 1 = monochrome LCD uses a 8-bit interface.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lcdmono8{}; 
        ///Single or Dual LCD panel selection. STN LCD interface is: 0 = single-panel. 1 = dual-panel.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lcddual{}; 
        ///Color format selection. 0 = RGB: normal output. 1 = BGR: red and blue swapped.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bgr{}; 
        ///Big-endian Byte Order. Controls byte ordering in memory: 0 = little-endian byte order. 1 = big-endian byte order.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bebo{}; 
        ///Big-Endian Pixel Ordering. Controls pixel ordering within a byte: 0 = little-endian ordering within a byte. 1 = big-endian pixel ordering within a byte. The BEPO bit selects between little and big-endian pixel packing for 1, 2, and 4 bpp display modes, it has no effect on 8 or 16 bpp pixel formats.  See Pixel serializer for more information on the data format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bepo{}; 
        ///LCD power enable. 0 = power not gated through to LCD panel and LCDV[23:0] signals disabled, (held LOW). 1 = power gated through to LCD panel and LCDV[23:0] signals enabled, (active).  See LCD power-up and power-down sequence for details on LCD power sequencing.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lcdpwr{}; 
        ///LCD Vertical Compare Interrupt. Generate VComp interrupt at: 00 = start of vertical synchronization. 01 = start of back porch. 10 = start of active video. 11 = start of front porch.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> lcdvcomp{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///LCD DMA FIFO watermark level. Controls when DMA requests are generated: 0 = An LCD DMA request is generated when either of the DMA FIFOs have four or more empty locations. 1 = An LCD DMA request is generated when either of the DMA FIFOs have eight or more empty locations.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> watermark{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,17),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace LcdIntmsk{    ///<Interrupt Mask register
        using Addr = Register::Address<0x4000801c,0x00000000,0x00000000,unsigned>;
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///FIFO underflow interrupt enable. 0: The FIFO underflow interrupt is disabled. 1: Interrupt will be generated when the FIFO underflows.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fufim{}; 
        ///LCD next base address update interrupt enable. 0: The base address update interrupt is disabled. 1: Interrupt will be generated when the LCD base address registers have been updated from the next address registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lnbuim{}; 
        ///Vertical compare interrupt enable. 0: The vertical compare time interrupt is disabled. 1: Interrupt will be generated when the vertical compare time (as defined by LcdVComp field in the CTRL register) is reached.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vcompim{}; 
        ///AHB master error interrupt enable. 0: The AHB Master error interrupt is disabled. 1: Interrupt will be generated when an AHB Master error occurs.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> berim{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace LcdIntraw{    ///<Raw Interrupt Status register
        using Addr = Register::Address<0x40008020,0x00000000,0x00000000,unsigned>;
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///FIFO underflow raw interrupt status. Set when either the upper or lower DMA FIFOs have been read accessed when empty causing an underflow condition to occur. Generates an interrupt if the FUFIM bit in the INTMSK register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fufris{}; 
        ///LCD next address base update raw interrupt status. Mode dependent. Set when the current base address registers have been successfully updated by the next address registers. Signifies that a new next address can be loaded if double buffering is in use. Generates an interrupt if the LNBUIM bit in the INTMSK register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lnburis{}; 
        ///Vertical compare raw interrupt status. Set when one of the four vertical regions is reached, as selected by the LcdVComp bits in the CTRL register. Generates an interrupt if the VCompIM bit in the INTMSK register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vcompris{}; 
        ///AHB master bus error raw interrupt status. Set when the AHB master interface receives a bus error response from a slave. Generates an interrupt if the BERIM bit in the INTMSK register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> berraw{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace LcdIntstat{    ///<Masked Interrupt Status register
        using Addr = Register::Address<0x40008024,0x00000000,0x00000000,unsigned>;
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///FIFO underflow masked interrupt status. Set when the both the FUFRIS bit in the INTRAW register and the FUFIM bit in the INTMSK register are set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fufmis{}; 
        ///LCD next address base update masked interrupt status. Set when the both the LNBURIS bit in the INTRAW register and the LNBUIM bit in the INTMSK register are set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lnbumis{}; 
        ///Vertical compare masked interrupt status. Set when the both the VCompRIS bit in the INTRAW register and the VCompIM bit in the INTMSK register are set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vcompmis{}; 
        ///AHB master bus error masked interrupt status. Set when the both the BERRAW bit in the INTRAW register and the BERIM bit in the INTMSK register are set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bermis{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace LcdIntclr{    ///<Interrupt Clear register
        using Addr = Register::Address<0x40008028,0x00000000,0x00000000,unsigned>;
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///FIFO underflow interrupt clear. Writing a 1 to this bit clears the FIFO underflow interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fufic{}; 
        ///LCD next address base update interrupt clear. Writing a 1 to this bit clears the LCD next address base update interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lnbuic{}; 
        ///Vertical compare interrupt clear. Writing a 1 to this bit clears the vertical compare interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vcompic{}; 
        ///AHB master error interrupt clear. Writing a 1 to this bit clears the AHB master error interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> beric{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace LcdUpcurr{    ///<Upper Panel Current Address Value register
        using Addr = Register::Address<0x4000802c,0x00000000,0x00000000,unsigned>;
        ///LCD Upper Panel Current Address. Contains the current LCD upper panel data DMA address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lcdupcurr{}; 
    }
    namespace LcdLpcurr{    ///<Lower Panel Current Address Value register
        using Addr = Register::Address<0x40008030,0x00000000,0x00000000,unsigned>;
        ///LCD Lower Panel Current Address. Contains the current LCD lower panel data DMA address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lcdlpcurr{}; 
    }
    namespace LcdCrsrCtrl{    ///<Cursor Control register
        using Addr = Register::Address<0x40008c00,0x00000000,0x00000000,unsigned>;
        ///Cursor enable. 0 = Cursor is not displayed. 1 = Cursor is displayed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crsron{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Cursor image number. If the selected cursor size is 6x64, this field has no effect. If the selected cursor size is 32x32: 00 = Cursor0. 01 = Cursor1. 10 = Cursor2. 11 = Cursor3.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> crsrnum10{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace LcdCrsrCfg{    ///<Cursor Configuration register
        using Addr = Register::Address<0x40008c04,0x00000000,0x00000000,unsigned>;
        ///Cursor size selection. 0 = 32x32 pixel cursor. Allows for 4 defined cursors. 1 = 64x64 pixel cursor.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crsrsize{}; 
        ///Cursor frame synchronization type. 0 = Cursor coordinates are asynchronous. 1 = Cursor coordinates are synchronized to the frame synchronization pulse.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> framesync{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace LcdCrsrPal0{    ///<Cursor Palette register 0
        using Addr = Register::Address<0x40008c08,0x00000000,0x00000000,unsigned>;
        ///Red color component
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> red{}; 
        ///Green color component
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> green{}; 
        ///Blue color component.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> blue{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace LcdCrsrPal1{    ///<Cursor Palette register 1
        using Addr = Register::Address<0x40008c0c,0x00000000,0x00000000,unsigned>;
        ///Red color component
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> red{}; 
        ///Green color component
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> green{}; 
        ///Blue color component.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> blue{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace LcdCrsrXy{    ///<Cursor XY Position register
        using Addr = Register::Address<0x40008c10,0x00000000,0x00000000,unsigned>;
        ///X ordinate of the cursor origin measured in pixels. When 0, the left edge of the cursor is at the left of the display.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> crsrx{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Y ordinate of the cursor origin measured in pixels. When 0, the top edge of the cursor is at the top of the display.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> crsry{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace LcdCrsrClip{    ///<Cursor Clip Position register
        using Addr = Register::Address<0x40008c14,0x00000000,0x00000000,unsigned>;
        ///Cursor clip position for X direction. Distance from the left edge of the cursor image to the first displayed pixel in the cursor. When 0, the first pixel of the cursor line is displayed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> crsrclipx{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Cursor clip position for Y direction. Distance from the top of the cursor image to the first displayed pixel in the cursor. When 0, the first displayed pixel is from the top line of the cursor image.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> crsrclipy{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace LcdCrsrIntmsk{    ///<Cursor Interrupt Mask register
        using Addr = Register::Address<0x40008c20,0x00000000,0x00000000,unsigned>;
        ///Cursor interrupt mask. When clear, the cursor never interrupts the processor. When set, the cursor interrupts the processor immediately after reading of the last word of cursor image.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crsrim{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace LcdCrsrIntclr{    ///<Cursor Interrupt Clear register
        using Addr = Register::Address<0x40008c24,0x00000000,0x00000000,unsigned>;
        ///Cursor interrupt clear. Writing a 0 to this bit has no effect. Writing a 1 to this bit causes the cursor interrupt status to be cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crsric{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace LcdCrsrIntraw{    ///<Cursor Raw Interrupt Status register
        using Addr = Register::Address<0x40008c28,0x00000000,0x00000000,unsigned>;
        ///Cursor raw interrupt status. The cursor interrupt status is set immediately after the last data is read from the cursor image for the current frame. This bit is cleared by writing to the CrsrIC bit in the CRSR_INTCLR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crsrris{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace LcdCrsrIntstat{    ///<Cursor Masked Interrupt Status register
        using Addr = Register::Address<0x40008c2c,0x00000000,0x00000000,unsigned>;
        ///Cursor masked interrupt status. The cursor interrupt status is set immediately after the last data read from the cursor image for the current frame, providing that the corresponding bit in the CRSR_INTMSK register is set. The bit remains clear if the CRSR_INTMSK register is clear. This bit is cleared by writing to the CRSR_INTCLR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crsrmis{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace LcdPal0{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008200,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal1{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008204,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal2{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008208,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal3{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000820c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal4{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008210,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal5{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008214,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal6{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008218,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal7{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000821c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal8{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008220,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal9{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008224,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal10{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008228,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal11{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000822c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal12{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008230,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal13{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008234,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal14{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008238,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal15{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000823c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal16{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008240,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal17{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008244,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal18{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008248,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal19{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000824c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal20{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008250,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal21{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008254,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal22{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008258,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal23{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000825c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal24{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008260,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal25{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008264,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal26{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008268,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal27{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000826c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal28{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008270,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal29{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008274,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal30{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008278,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal31{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000827c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal32{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008280,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal33{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008284,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal34{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008288,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal35{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000828c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal36{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008290,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal37{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008294,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal38{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008298,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal39{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000829c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal40{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082a0,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal41{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082a4,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal42{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082a8,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal43{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082ac,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal44{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082b0,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal45{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082b4,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal46{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082b8,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal47{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082bc,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal48{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082c0,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal49{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082c4,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal50{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082c8,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal51{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082cc,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal52{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082d0,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal53{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082d4,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal54{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082d8,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal55{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082dc,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal56{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082e0,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal57{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082e4,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal58{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082e8,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal59{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082ec,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal60{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082f0,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal61{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082f4,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal62{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082f8,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal63{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082fc,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal64{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008300,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal65{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008304,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal66{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008308,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal67{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000830c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal68{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008310,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal69{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008314,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal70{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008318,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal71{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000831c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal72{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008320,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal73{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008324,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal74{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008328,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal75{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000832c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal76{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008330,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal77{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008334,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal78{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008338,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal79{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000833c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal80{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008340,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal81{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008344,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal82{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008348,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal83{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000834c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal84{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008350,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal85{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008354,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal86{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008358,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal87{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000835c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal88{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008360,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal89{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008364,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal90{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008368,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal91{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000836c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal92{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008370,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal93{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008374,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal94{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008378,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal95{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000837c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal96{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008380,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal97{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008384,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal98{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008388,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal99{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000838c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal100{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008390,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal101{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008394,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal102{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008398,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal103{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000839c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal104{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083a0,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal105{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083a4,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal106{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083a8,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal107{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083ac,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal108{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083b0,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal109{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083b4,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal110{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083b8,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal111{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083bc,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal112{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083c0,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal113{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083c4,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal114{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083c8,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal115{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083cc,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal116{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083d0,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal117{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083d4,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal118{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083d8,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal119{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083dc,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal120{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083e0,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal121{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083e4,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal122{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083e8,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal123{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083ec,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal124{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083f0,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal125{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083f4,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal126{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083f8,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal127{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083fc,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal128{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008400,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal129{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008404,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal130{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008408,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal131{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000840c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal132{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008410,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal133{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008414,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal134{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008418,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal135{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000841c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal136{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008420,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal137{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008424,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal138{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008428,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal139{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000842c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal140{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008430,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal141{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008434,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal142{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008438,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal143{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000843c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal144{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008440,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal145{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008444,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal146{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008448,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal147{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000844c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal148{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008450,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal149{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008454,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal150{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008458,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal151{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000845c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal152{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008460,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal153{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008464,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal154{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008468,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal155{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000846c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal156{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008470,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal157{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008474,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal158{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008478,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal159{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000847c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal160{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008480,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal161{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008484,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal162{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008488,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal163{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000848c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal164{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008490,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal165{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008494,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal166{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008498,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal167{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000849c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal168{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084a0,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal169{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084a4,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal170{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084a8,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal171{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084ac,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal172{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084b0,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal173{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084b4,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal174{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084b8,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal175{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084bc,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal176{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084c0,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal177{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084c4,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal178{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084c8,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal179{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084cc,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal180{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084d0,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal181{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084d4,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal182{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084d8,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal183{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084dc,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal184{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084e0,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal185{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084e4,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal186{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084e8,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal187{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084ec,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal188{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084f0,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal189{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084f4,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal190{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084f8,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal191{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084fc,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal192{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008500,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal193{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008504,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal194{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008508,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal195{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000850c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal196{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008510,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal197{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008514,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal198{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008518,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal199{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000851c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal200{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008520,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal201{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008524,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal202{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008528,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal203{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000852c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal204{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008530,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal205{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008534,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal206{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008538,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal207{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000853c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal208{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008540,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal209{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008544,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal210{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008548,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal211{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000854c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal212{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008550,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal213{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008554,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal214{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008558,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal215{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000855c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal216{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008560,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal217{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008564,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal218{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008568,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal219{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000856c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal220{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008570,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal221{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008574,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal222{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008578,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal223{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000857c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal224{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008580,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal225{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008584,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal226{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008588,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal227{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000858c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal228{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008590,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal229{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008594,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal230{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008598,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal231{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000859c,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal232{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085a0,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal233{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085a4,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal234{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085a8,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal235{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085ac,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal236{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085b0,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal237{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085b4,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal238{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085b8,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal239{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085bc,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal240{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085c0,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal241{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085c4,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal242{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085c8,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal243{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085cc,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal244{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085d0,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal245{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085d4,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal246{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085d8,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal247{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085dc,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal248{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085e0,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal249{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085e4,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal250{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085e8,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal251{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085ec,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal252{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085f0,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal253{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085f4,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal254{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085f8,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdPal255{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085fc,0x00000000,0x00000000,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace LcdCrsrImg0{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008800,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg1{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008804,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg2{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008808,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg3{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000880c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg4{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008810,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg5{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008814,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg6{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008818,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg7{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000881c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg8{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008820,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg9{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008824,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg10{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008828,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg11{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000882c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg12{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008830,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg13{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008834,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg14{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008838,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg15{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000883c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg16{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008840,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg17{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008844,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg18{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008848,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg19{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000884c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg20{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008850,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg21{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008854,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg22{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008858,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg23{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000885c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg24{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008860,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg25{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008864,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg26{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008868,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg27{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000886c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg28{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008870,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg29{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008874,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg30{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008878,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg31{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000887c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg32{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008880,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg33{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008884,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg34{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008888,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg35{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000888c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg36{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008890,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg37{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008894,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg38{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008898,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg39{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000889c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg40{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088a0,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg41{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088a4,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg42{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088a8,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg43{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088ac,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg44{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088b0,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg45{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088b4,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg46{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088b8,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg47{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088bc,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg48{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088c0,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg49{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088c4,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg50{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088c8,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg51{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088cc,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg52{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088d0,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg53{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088d4,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg54{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088d8,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg55{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088dc,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg56{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088e0,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg57{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088e4,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg58{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088e8,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg59{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088ec,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg60{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088f0,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg61{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088f4,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg62{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088f8,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg63{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088fc,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg64{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008900,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg65{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008904,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg66{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008908,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg67{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000890c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg68{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008910,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg69{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008914,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg70{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008918,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg71{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000891c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg72{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008920,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg73{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008924,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg74{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008928,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg75{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000892c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg76{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008930,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg77{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008934,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg78{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008938,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg79{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000893c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg80{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008940,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg81{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008944,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg82{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008948,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg83{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000894c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg84{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008950,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg85{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008954,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg86{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008958,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg87{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000895c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg88{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008960,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg89{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008964,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg90{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008968,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg91{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000896c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg92{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008970,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg93{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008974,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg94{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008978,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg95{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000897c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg96{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008980,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg97{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008984,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg98{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008988,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg99{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000898c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg100{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008990,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg101{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008994,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg102{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008998,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg103{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000899c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg104{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089a0,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg105{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089a4,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg106{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089a8,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg107{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089ac,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg108{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089b0,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg109{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089b4,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg110{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089b8,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg111{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089bc,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg112{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089c0,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg113{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089c4,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg114{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089c8,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg115{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089cc,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg116{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089d0,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg117{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089d4,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg118{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089d8,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg119{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089dc,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg120{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089e0,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg121{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089e4,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg122{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089e8,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg123{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089ec,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg124{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089f0,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg125{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089f4,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg126{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089f8,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg127{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089fc,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg128{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a00,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg129{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a04,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg130{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a08,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg131{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a0c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg132{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a10,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg133{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a14,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg134{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a18,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg135{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a1c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg136{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a20,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg137{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a24,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg138{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a28,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg139{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a2c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg140{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a30,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg141{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a34,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg142{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a38,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg143{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a3c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg144{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a40,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg145{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a44,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg146{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a48,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg147{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a4c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg148{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a50,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg149{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a54,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg150{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a58,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg151{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a5c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg152{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a60,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg153{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a64,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg154{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a68,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg155{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a6c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg156{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a70,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg157{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a74,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg158{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a78,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg159{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a7c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg160{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a80,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg161{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a84,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg162{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a88,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg163{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a8c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg164{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a90,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg165{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a94,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg166{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a98,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg167{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a9c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg168{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008aa0,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg169{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008aa4,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg170{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008aa8,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg171{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008aac,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg172{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ab0,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg173{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ab4,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg174{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ab8,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg175{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008abc,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg176{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ac0,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg177{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ac4,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg178{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ac8,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg179{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008acc,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg180{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ad0,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg181{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ad4,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg182{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ad8,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg183{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008adc,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg184{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ae0,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg185{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ae4,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg186{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ae8,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg187{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008aec,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg188{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008af0,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg189{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008af4,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg190{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008af8,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg191{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008afc,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg192{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b00,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg193{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b04,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg194{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b08,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg195{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b0c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg196{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b10,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg197{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b14,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg198{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b18,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg199{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b1c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg200{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b20,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg201{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b24,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg202{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b28,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg203{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b2c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg204{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b30,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg205{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b34,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg206{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b38,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg207{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b3c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg208{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b40,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg209{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b44,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg210{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b48,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg211{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b4c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg212{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b50,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg213{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b54,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg214{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b58,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg215{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b5c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg216{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b60,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg217{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b64,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg218{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b68,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg219{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b6c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg220{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b70,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg221{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b74,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg222{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b78,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg223{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b7c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg224{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b80,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg225{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b84,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg226{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b88,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg227{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b8c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg228{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b90,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg229{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b94,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg230{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b98,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg231{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b9c,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg232{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ba0,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg233{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ba4,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg234{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ba8,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg235{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bac,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg236{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bb0,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg237{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bb4,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg238{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bb8,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg239{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bbc,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg240{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bc0,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg241{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bc4,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg242{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bc8,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg243{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bcc,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg244{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bd0,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg245{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bd4,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg246{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bd8,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg247{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bdc,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg248{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008be0,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg249{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008be4,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg250{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008be8,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg251{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bec,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg252{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bf0,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg253{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bf4,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg254{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bf8,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace LcdCrsrImg255{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bfc,0x00000000,0x00000000,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
}
