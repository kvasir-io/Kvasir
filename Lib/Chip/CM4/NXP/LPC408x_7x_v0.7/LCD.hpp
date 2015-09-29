#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//LCD controller Modification 
    namespace Nonetimh{    ///<Horizontal Timing Control register
        using Addr = Register::Address<0x20088000,0x00000003,0,unsigned>;
        ///Pixels-per-line. The PPL bit field specifies the number of pixels in each line or row of the screen. PPL is a 6-bit value that represents between 16 and 1024 pixels per line. PPL counts the number of pixel clocks that occur before the HFP is applied. Program the value required divided by 16, minus 1. Actual pixels-per-line = 16 * (PPL + 1). For example, to obtain 320 pixels per line, program PPL as (320/16) -1 = 19.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> ppl{}; 
        ///Horizontal synchronization pulse width. The 8-bit HSW field specifies the pulse width of the line clock in passive mode, or the horizontal synchronization pulse in active mode. Program with desired value minus 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> hsw{}; 
        ///Horizontal front porch. The 8-bit HFP field sets the number of pixel clock intervals at the end of each line or row of pixels, before the LCD line clock is pulsed. When a complete line of pixels is transmitted to the LCD driver, the value in HFP counts the number of pixel clocks to wait before asserting the line clock. HFP can generate a period of 1-256 pixel clock cycles. Program with desired value minus 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hfp{}; 
        ///Horizontal back porch. The 8-bit HBP field is used to specify the number of pixel clock periods inserted at the beginning of each line or row of pixels. After the line clock for the previous line has been deasserted, the value in HBP counts the number of pixel clocks to wait before starting the next display line. HBP can generate a delay of 1-256 pixel clock cycles. Program with desired value minus 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> hbp{}; 
    }
    namespace Nonetimv{    ///<Vertical Timing Control register
        using Addr = Register::Address<0x20088004,0x00000000,0,unsigned>;
        ///Lines per panel. This is the number of active lines per screen. The LPP field specifies the total number of lines or rows on the LCD panel being controlled. LPP is a 10-bit value allowing between 1 and 1024 lines. Program the register with the number of lines per LCD panel, minus 1. For dual panel displays, program the register with the number of lines on each of the upper and lower panels.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> lpp{}; 
        ///Vertical synchronization pulse width. This is the number of horizontal synchronization lines. The 6-bit VSW field specifies the pulse width of the vertical synchronization pulse. Program the register with the number of lines required, minus one. The number of horizontal synchronization lines must be small (for example, program to zero) for passive STN LCDs. The higher the value the worse the contrast on STN LCDs.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> vsw{}; 
        ///Vertical front porch. This is the number of inactive lines at the end of a frame, before the vertical synchronization period. The 8-bit VFP field specifies the number of line clocks to insert at the end of each frame. When a complete frame of pixels is transmitted to the LCD display, the value in VFP is used to count the number of line clock periods to wait. After the count has elapsed, the vertical synchronization signal, LCD_FP, is asserted in active mode, or extra line clocks are inserted as specified by the VSW bit-field in passive mode. VFP generates 0-255 line clock cycles. Program to zero on passive displays for improved contrast.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> vfp{}; 
        ///Vertical back porch. This is the number of inactive lines at the start of a frame, after the vertical synchronization period. The 8-bit VBP field specifies the number of line clocks inserted at the beginning of each frame. The VBP count starts immediately after the vertical synchronization signal for the previous frame has been negated for active mode, or the extra line clocks have been inserted as specified by the VSW bit field in passive mode. After this has occurred, the count value in VBP sets the number of line clock periods inserted before the next frame. VBP generates 0 to 255 extra line clock cycles. Program to zero on passive displays for improved contrast.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> vbp{}; 
    }
    namespace Nonepol{    ///<Clock and Signal Polarity Control register
        using Addr = Register::Address<0x20088008,0x00008000,0,unsigned>;
        ///Lower five bits of panel clock divisor. The ten-bit PCD field, comprising PCD_HI (bits 31:27 of this register) and PCD_LO, is used to derive the LCD panel clock frequency LCD_DCLK from the input clock, LCD_DCLK = LCDCLK/(PCD+2). For monochrome STN displays with a 4 or 8-bit interface, the panel clock is a factor of four and eight down from the actual individual pixel clock rate. For color STN displays, 22/3 pixels are output per LCD_DCLK cycle, so the panel clock is 0.375 times the pixel rate. For TFT displays, the pixel clock divider can be bypassed by setting the BCD bit in this register. Note: data path latency forces some restrictions on the usable minimum values for the panel clock divider in STN modes: Single panel color mode, PCD = 1 (LCD_DCLK = LCDCLK/3). Dual panel color mode, PCD = 4 (LCD_DCLK = LCDCLK/6). Single panel monochrome 4-bit interface mode, PCD = 2(LCD_DCLK = LCDCLK/4). Dual panel monochrome 4-bit interface mode and single panel monochrome 8-bit interface mode, PCD = 6(LCD_DCLK = LCDCLK/8). Dual panel monochrome 8-bit interface mode, PCD = 14(LCD_DCLK = LCDCLK/16).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> pcdLo{}; 
        ///Clock Select. This bit controls the selection of the source for LCDCLK. 0 = the clock source for the LCD block is CCLK. 1 = the clock source for the LCD block is LCD_CLKIN (external clock input for the LVD).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clksel{}; 
        ///AC bias pin frequency. The AC bias pin frequency is only applicable to STN displays. These require the pixel voltage polarity to periodically reverse to prevent damage caused by DC charge accumulation. Program this field with the required value minus one to apply the number of line clocks between each toggle of the AC bias pin, LCD_ENAB_M. This field has no effect if the LCD is operating in TFT mode, when the LCD_ENAB_M pin is used as a data enable signal.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> acb{}; 
        ///Invert vertical synchronization. The IVS bit inverts the polarity of the LCD_FP signal. 0 = LCD_FP pin is active HIGH and inactive LOW. 1 = LCD_FP pin is active LOW and inactive HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ivs{}; 
        ///Invert horizontal synchronization. The IHS bit inverts the polarity of the LCD_LP signal. 0 = LCD_LP pin is active HIGH and inactive LOW. 1 = LCD_LP pin is active LOW and inactive HIGH.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ihs{}; 
        ///Invert panel clock. The IPC bit selects the edge of the panel clock on which pixel data is driven out onto the LCD data lines. 0 = Data is driven on the LCD data lines on the rising edge of LCD_DCLK. 1 = Data is driven on the LCD data lines on the falling edge of LCD_DCLK.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ipc{}; 
        ///Invert output enable. This bit selects the active polarity of the output enable signal in TFT mode. In this mode, the LCD_ENAB_M pin is used as an enable that indicates to the LCD panel when valid display data is available. In active display mode, data is driven onto the LCD data lines at the programmed edge of LCD_DCLK when LCD_ENAB_M is in its active state. 0 = LCD_ENAB_M output pin is active HIGH in TFT mode. 1 = LCD_ENAB_M output pin is active LOW in TFT mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ioe{}; 
        ///Clocks per line. This field specifies the number of actual LCD_DCLK clocks to the LCD panel on each line. This is the number of PPL divided by either 1 (for TFT), 4 or 8 (for monochrome passive), 2 2/3 (for color passive), minus one. This must be correctly programmed in addition to the PPL bit in the LCD_TIMH register for the LCD display to work correctly.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> cpl{}; 
        ///Bypass pixel clock divider. Setting this to 1 bypasses the pixel clock divider logic. This is mainly used for TFT displays.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> bcd{}; 
        ///Upper five bits of panel clock divisor. See description for PCD_LO, in bits [4:0] of this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,27),Register::ReadWriteAccess,unsigned> pcdHi{}; 
    }
    namespace Nonele{    ///<Line End Control register
        using Addr = Register::Address<0x2008800c,0xfffeff80,0,unsigned>;
        ///Line-end delay. Controls Line-end signal delay from the rising-edge of the last panel clock, LCD_DCLK. Program with the number of LCDCLK clock periods minus 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> led{}; 
        ///LCD Line end enable. 0 = LCD_LE disabled (held LOW). 1 = LCD_LE signal active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lee{}; 
    }
    namespace Noneupbase{    ///<Upper Panel Frame Base Address register
        using Addr = Register::Address<0x20088010,0x00000007,0,unsigned>;
        ///LCD upper panel base address. This is the start address of the upper panel frame data in memory and is doubleword aligned.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> lcdupbase{}; 
    }
    namespace Nonelpbase{    ///<Lower Panel Frame Base Address register
        using Addr = Register::Address<0x20088014,0x00000007,0,unsigned>;
        ///LCD lower panel base address. This is the start address of the lower panel frame data in memory and is doubleword aligned.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> lcdlpbase{}; 
    }
    namespace Nonectrl{    ///<LCD Control register
        using Addr = Register::Address<0x20088018,0xfffec000,0,unsigned>;
        ///LCD enable control bit. 0 = LCD disabled. Signals LCD_LP, LCD_DCLK, LCD_FP, LCD_ENAB_M, and LCD_LE are low. 1 = LCD enabled. Signals LCD_LP, LCD_DCLK, LCD_FP, LCD_ENAB_M, and LCD_LE are high. See LCD power-up and power-down sequence for details on LCD power sequencing.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lcden{}; 
        ///LCD bits per pixel. Selects the number of bits per LCD pixel: 000 = 1 bpp. 001 = 2 bpp. 010 = 4 bpp. 011 = 8 bpp. 100 = 16 bpp. 101 = 24 bpp (TFT panel only). 110 = 16 bpp, 5:6:5 mode. 111 = 12 bpp, 4:4:4 mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> lcdbpp{}; 
        ///STN LCD monochrome/color selection. 0 = STN LCD is color. 1 = STN LCD is monochrome. This bit has no meaning in TFT mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lcdbw{}; 
        ///LCD panel TFT type selection. 0 = LCD is an STN display. Use gray scaler. 1 = LCD is a TFT display. Do not use gray scaler.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lcdtft{}; 
        ///Monochrome LCD interface width. Controls whether a monochrome STN LCD uses a 4 or 8-bit parallel interface. It has no meaning in other modes and must be programmed to zero. 0 = monochrome LCD uses a 4-bit interface. 1 = monochrome LCD uses a 8-bit interface.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lcdmono8{}; 
        ///Single or Dual LCD panel selection. STN LCD interface is: 0 = single-panel. 1 = dual-panel.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lcddual{}; 
        ///Color format selection. 0 = RGB: normal output. 1 = BGR: red and blue swapped.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bgr{}; 
        ///Big-endian Byte Order. Controls byte ordering in memory: 0 = little-endian byte order. 1 = big-endian byte order.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bebo{}; 
        ///Big-Endian Pixel Ordering. Controls pixel ordering within a byte: 0 = little-endian ordering within a byte. 1 = big-endian pixel ordering within a byte. The BEPO bit selects between little and big-endian pixel packing for 1, 2, and 4 bpp display modes, it has no effect on 8 or 16 bpp pixel formats. See Pixel serializer for more information on the data format.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bepo{}; 
        ///LCD power enable. 0 = power not gated through to LCD panel and LCD_VD[23:0] signals disabled, (held LOW). 1 = power gated through to LCD panel and LCD_VD[23:0] signals enabled, (active).  See LCD power-up and power-down sequence for details on LCD power sequencing.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lcdpwr{}; 
        ///LCD Vertical Compare Interrupt. Generate VComp interrupt at: 00 = start of vertical synchronization. 01 = start of back porch. 10 = start of active video. 11 = start of front porch.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> lcdvcomp{}; 
        ///LCD DMA FIFO watermark level. Controls when DMA requests are generated: 0 = An LCD DMA request is generated when either of the DMA FIFOs have four or more empty locations. 1 = An LCD DMA request is generated when either of the DMA FIFOs have eight or more empty locations.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> watermark{}; 
    }
    namespace Noneintmsk{    ///<Interrupt Mask register
        using Addr = Register::Address<0x2008801c,0xffffffe1,0,unsigned>;
        ///FIFO underflow interrupt enable. 0: The FIFO underflow interrupt is disabled. 1: Interrupt will be generated when the FIFO underflows.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fufim{}; 
        ///LCD next base address update interrupt enable. 0: The base address update interrupt is disabled. 1: Interrupt will be generated when the LCD base address registers have been updated from the next address registers.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lnbuim{}; 
        ///Vertical compare interrupt enable. 0: The vertical compare time interrupt is disabled. 1: Interrupt will be generated when the vertical compare time (as defined by LcdVComp field in the LCD_CTRL register) is reached.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vcompim{}; 
        ///AHB master error interrupt enable. 0: The AHB Master error interrupt is disabled. 1: Interrupt will be generated when an AHB Master error occurs.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> berim{}; 
    }
    namespace Noneintraw{    ///<Raw Interrupt Status register
        using Addr = Register::Address<0x20088020,0xffffffe1,0,unsigned>;
        ///FIFO underflow raw interrupt status. Set when either the upper or lower DMA FIFOs have been read accessed when empty causing an underflow condition to occur. Generates an interrupt if the FUFIM bit in the LCD_INTMSK register is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fufris{}; 
        ///LCD next address base update raw interrupt status. Mode dependent. Set when the current base address registers have been successfully updated by the next address registers. Signifies that a new next address can be loaded if double buffering is in use. Generates an interrupt if the LNBUIM bit in the LCD_INTMSK register is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lnburis{}; 
        ///Vertical compare raw interrupt status. Set when one of the four vertical regions is reached, as selected by the LcdVComp bits in the LCD_CTRL register. Generates an interrupt if the VCompIM bit in the LCD_INTMSK register is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vcompris{}; 
        ///AHB master bus error raw interrupt status. Set when the AHB master interface receives a bus error response from a slave. Generates an interrupt if the BERIM bit in the LCD_INTMSK register is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> berraw{}; 
    }
    namespace Noneintstat{    ///<Masked Interrupt Status register
        using Addr = Register::Address<0x20088024,0xffffffe1,0,unsigned>;
        ///FIFO underflow masked interrupt status. Set when the both the FUFRIS bit in the LCD_INTRAW register and the FUFIM bit in the LCD_INTMSK register are set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fufmis{}; 
        ///LCD next address base update masked interrupt status. Set when the both the LNBURIS bit in the LCD_INTRAW register and the LNBUIM bit in the LCD_INTMSK register are set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lnbumis{}; 
        ///Vertical compare masked interrupt status. Set when the both the VCompRIS bit in the LCD_INTRAW register and the VCompIM bit in the LCD_INTMSK register are set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vcompmis{}; 
        ///AHB master bus error masked interrupt status. Set when the both the BERRAW bit in the LCD_INTRAW register and the BERIM bit in the LCD_INTMSK register are set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bermis{}; 
    }
    namespace Noneintclr{    ///<Interrupt Clear register
        using Addr = Register::Address<0x20088028,0xffffffe1,0,unsigned>;
        ///FIFO underflow interrupt clear. Writing a 1 to this bit clears the FIFO underflow interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fufic{}; 
        ///LCD next address base update interrupt clear. Writing a 1 to this bit clears the LCD next address base update interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lnbuic{}; 
        ///Vertical compare interrupt clear. Writing a 1 to this bit clears the vertical compare interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vcompic{}; 
        ///AHB master error interrupt clear. Writing a 1 to this bit clears the AHB master error interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> beric{}; 
    }
    namespace Noneupcurr{    ///<Upper Panel Current Address Value register
        using Addr = Register::Address<0x2008802c,0x00000000,0,unsigned>;
        ///LCD Upper Panel Current Address. Contains the current LCD upper panel data DMA address.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lcdupcurr{}; 
    }
    namespace Nonelpcurr{    ///<Lower Panel Current Address Value register
        using Addr = Register::Address<0x20088030,0x00000000,0,unsigned>;
        ///LCD Lower Panel Current Address. Contains the current LCD lower panel data DMA address.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lcdlpcurr{}; 
    }
    namespace Nonepal0{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088200,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal1{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088204,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal2{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088208,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal3{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x2008820c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal4{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088210,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal5{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088214,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal6{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088218,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal7{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x2008821c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal8{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088220,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal9{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088224,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal10{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088228,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal11{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x2008822c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal12{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088230,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal13{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088234,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal14{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088238,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal15{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x2008823c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal16{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088240,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal17{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088244,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal18{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088248,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal19{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x2008824c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal20{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088250,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal21{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088254,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal22{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088258,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal23{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x2008825c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal24{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088260,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal25{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088264,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal26{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088268,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal27{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x2008826c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal28{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088270,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal29{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088274,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal30{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088278,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal31{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x2008827c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal32{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088280,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal33{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088284,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal34{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088288,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal35{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x2008828c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal36{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088290,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal37{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088294,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal38{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088298,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal39{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x2008829c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal40{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200882a0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal41{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200882a4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal42{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200882a8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal43{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200882ac,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal44{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200882b0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal45{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200882b4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal46{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200882b8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal47{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200882bc,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal48{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200882c0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal49{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200882c4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal50{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200882c8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal51{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200882cc,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal52{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200882d0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal53{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200882d4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal54{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200882d8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal55{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200882dc,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal56{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200882e0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal57{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200882e4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal58{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200882e8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal59{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200882ec,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal60{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200882f0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal61{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200882f4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal62{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200882f8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal63{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200882fc,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal64{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088300,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal65{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088304,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal66{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088308,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal67{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x2008830c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal68{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088310,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal69{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088314,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal70{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088318,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal71{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x2008831c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal72{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088320,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal73{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088324,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal74{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088328,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal75{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x2008832c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal76{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088330,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal77{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088334,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal78{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088338,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal79{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x2008833c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal80{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088340,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal81{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088344,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal82{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088348,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal83{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x2008834c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal84{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088350,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal85{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088354,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal86{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088358,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal87{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x2008835c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal88{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088360,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal89{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088364,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal90{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088368,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal91{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x2008836c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal92{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088370,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal93{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088374,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal94{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088378,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal95{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x2008837c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal96{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088380,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal97{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088384,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal98{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088388,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal99{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x2008838c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal100{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088390,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal101{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088394,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal102{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x20088398,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal103{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x2008839c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal104{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200883a0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal105{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200883a4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal106{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200883a8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal107{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200883ac,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal108{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200883b0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal109{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200883b4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal110{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200883b8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal111{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200883bc,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal112{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200883c0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal113{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200883c4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal114{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200883c8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal115{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200883cc,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal116{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200883d0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal117{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200883d4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal118{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200883d8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal119{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200883dc,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal120{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200883e0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal121{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200883e4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal122{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200883e8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal123{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200883ec,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal124{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200883f0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal125{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200883f4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal126{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200883f8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace Nonepal127{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x200883fc,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        ///Green palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        ///Blue palette data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
    }
    namespace NonecrsrImg0{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088800,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg1{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088804,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg2{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088808,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg3{    ///<Cursor Image registers
        using Addr = Register::Address<0x2008880c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg4{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088810,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg5{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088814,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg6{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088818,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg7{    ///<Cursor Image registers
        using Addr = Register::Address<0x2008881c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg8{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088820,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg9{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088824,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg10{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088828,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg11{    ///<Cursor Image registers
        using Addr = Register::Address<0x2008882c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg12{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088830,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg13{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088834,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg14{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088838,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg15{    ///<Cursor Image registers
        using Addr = Register::Address<0x2008883c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg16{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088840,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg17{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088844,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg18{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088848,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg19{    ///<Cursor Image registers
        using Addr = Register::Address<0x2008884c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg20{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088850,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg21{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088854,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg22{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088858,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg23{    ///<Cursor Image registers
        using Addr = Register::Address<0x2008885c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg24{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088860,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg25{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088864,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg26{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088868,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg27{    ///<Cursor Image registers
        using Addr = Register::Address<0x2008886c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg28{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088870,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg29{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088874,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg30{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088878,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg31{    ///<Cursor Image registers
        using Addr = Register::Address<0x2008887c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg32{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088880,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg33{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088884,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg34{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088888,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg35{    ///<Cursor Image registers
        using Addr = Register::Address<0x2008888c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg36{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088890,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg37{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088894,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg38{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088898,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg39{    ///<Cursor Image registers
        using Addr = Register::Address<0x2008889c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg40{    ///<Cursor Image registers
        using Addr = Register::Address<0x200888a0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg41{    ///<Cursor Image registers
        using Addr = Register::Address<0x200888a4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg42{    ///<Cursor Image registers
        using Addr = Register::Address<0x200888a8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg43{    ///<Cursor Image registers
        using Addr = Register::Address<0x200888ac,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg44{    ///<Cursor Image registers
        using Addr = Register::Address<0x200888b0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg45{    ///<Cursor Image registers
        using Addr = Register::Address<0x200888b4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg46{    ///<Cursor Image registers
        using Addr = Register::Address<0x200888b8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg47{    ///<Cursor Image registers
        using Addr = Register::Address<0x200888bc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg48{    ///<Cursor Image registers
        using Addr = Register::Address<0x200888c0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg49{    ///<Cursor Image registers
        using Addr = Register::Address<0x200888c4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg50{    ///<Cursor Image registers
        using Addr = Register::Address<0x200888c8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg51{    ///<Cursor Image registers
        using Addr = Register::Address<0x200888cc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg52{    ///<Cursor Image registers
        using Addr = Register::Address<0x200888d0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg53{    ///<Cursor Image registers
        using Addr = Register::Address<0x200888d4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg54{    ///<Cursor Image registers
        using Addr = Register::Address<0x200888d8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg55{    ///<Cursor Image registers
        using Addr = Register::Address<0x200888dc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg56{    ///<Cursor Image registers
        using Addr = Register::Address<0x200888e0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg57{    ///<Cursor Image registers
        using Addr = Register::Address<0x200888e4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg58{    ///<Cursor Image registers
        using Addr = Register::Address<0x200888e8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg59{    ///<Cursor Image registers
        using Addr = Register::Address<0x200888ec,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg60{    ///<Cursor Image registers
        using Addr = Register::Address<0x200888f0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg61{    ///<Cursor Image registers
        using Addr = Register::Address<0x200888f4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg62{    ///<Cursor Image registers
        using Addr = Register::Address<0x200888f8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg63{    ///<Cursor Image registers
        using Addr = Register::Address<0x200888fc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg64{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088900,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg65{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088904,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg66{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088908,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg67{    ///<Cursor Image registers
        using Addr = Register::Address<0x2008890c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg68{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088910,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg69{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088914,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg70{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088918,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg71{    ///<Cursor Image registers
        using Addr = Register::Address<0x2008891c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg72{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088920,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg73{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088924,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg74{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088928,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg75{    ///<Cursor Image registers
        using Addr = Register::Address<0x2008892c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg76{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088930,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg77{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088934,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg78{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088938,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg79{    ///<Cursor Image registers
        using Addr = Register::Address<0x2008893c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg80{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088940,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg81{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088944,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg82{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088948,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg83{    ///<Cursor Image registers
        using Addr = Register::Address<0x2008894c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg84{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088950,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg85{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088954,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg86{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088958,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg87{    ///<Cursor Image registers
        using Addr = Register::Address<0x2008895c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg88{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088960,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg89{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088964,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg90{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088968,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg91{    ///<Cursor Image registers
        using Addr = Register::Address<0x2008896c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg92{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088970,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg93{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088974,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg94{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088978,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg95{    ///<Cursor Image registers
        using Addr = Register::Address<0x2008897c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg96{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088980,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg97{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088984,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg98{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088988,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg99{    ///<Cursor Image registers
        using Addr = Register::Address<0x2008898c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg100{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088990,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg101{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088994,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg102{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088998,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg103{    ///<Cursor Image registers
        using Addr = Register::Address<0x2008899c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg104{    ///<Cursor Image registers
        using Addr = Register::Address<0x200889a0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg105{    ///<Cursor Image registers
        using Addr = Register::Address<0x200889a4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg106{    ///<Cursor Image registers
        using Addr = Register::Address<0x200889a8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg107{    ///<Cursor Image registers
        using Addr = Register::Address<0x200889ac,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg108{    ///<Cursor Image registers
        using Addr = Register::Address<0x200889b0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg109{    ///<Cursor Image registers
        using Addr = Register::Address<0x200889b4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg110{    ///<Cursor Image registers
        using Addr = Register::Address<0x200889b8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg111{    ///<Cursor Image registers
        using Addr = Register::Address<0x200889bc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg112{    ///<Cursor Image registers
        using Addr = Register::Address<0x200889c0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg113{    ///<Cursor Image registers
        using Addr = Register::Address<0x200889c4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg114{    ///<Cursor Image registers
        using Addr = Register::Address<0x200889c8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg115{    ///<Cursor Image registers
        using Addr = Register::Address<0x200889cc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg116{    ///<Cursor Image registers
        using Addr = Register::Address<0x200889d0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg117{    ///<Cursor Image registers
        using Addr = Register::Address<0x200889d4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg118{    ///<Cursor Image registers
        using Addr = Register::Address<0x200889d8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg119{    ///<Cursor Image registers
        using Addr = Register::Address<0x200889dc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg120{    ///<Cursor Image registers
        using Addr = Register::Address<0x200889e0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg121{    ///<Cursor Image registers
        using Addr = Register::Address<0x200889e4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg122{    ///<Cursor Image registers
        using Addr = Register::Address<0x200889e8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg123{    ///<Cursor Image registers
        using Addr = Register::Address<0x200889ec,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg124{    ///<Cursor Image registers
        using Addr = Register::Address<0x200889f0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg125{    ///<Cursor Image registers
        using Addr = Register::Address<0x200889f4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg126{    ///<Cursor Image registers
        using Addr = Register::Address<0x200889f8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg127{    ///<Cursor Image registers
        using Addr = Register::Address<0x200889fc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg128{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a00,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg129{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a04,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg130{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a08,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg131{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a0c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg132{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a10,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg133{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a14,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg134{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a18,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg135{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a1c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg136{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a20,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg137{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a24,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg138{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a28,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg139{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a2c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg140{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a30,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg141{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a34,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg142{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a38,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg143{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a3c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg144{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a40,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg145{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a44,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg146{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a48,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg147{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a4c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg148{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a50,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg149{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a54,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg150{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a58,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg151{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a5c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg152{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a60,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg153{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a64,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg154{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a68,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg155{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a6c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg156{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a70,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg157{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a74,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg158{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a78,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg159{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a7c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg160{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a80,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg161{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a84,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg162{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a88,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg163{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a8c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg164{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a90,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg165{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a94,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg166{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a98,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg167{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088a9c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg168{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088aa0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg169{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088aa4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg170{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088aa8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg171{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088aac,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg172{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088ab0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg173{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088ab4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg174{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088ab8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg175{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088abc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg176{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088ac0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg177{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088ac4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg178{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088ac8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg179{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088acc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg180{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088ad0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg181{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088ad4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg182{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088ad8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg183{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088adc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg184{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088ae0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg185{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088ae4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg186{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088ae8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg187{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088aec,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg188{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088af0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg189{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088af4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg190{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088af8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg191{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088afc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg192{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b00,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg193{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b04,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg194{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b08,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg195{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b0c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg196{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b10,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg197{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b14,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg198{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b18,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg199{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b1c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg200{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b20,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg201{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b24,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg202{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b28,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg203{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b2c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg204{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b30,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg205{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b34,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg206{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b38,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg207{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b3c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg208{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b40,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg209{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b44,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg210{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b48,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg211{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b4c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg212{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b50,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg213{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b54,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg214{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b58,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg215{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b5c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg216{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b60,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg217{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b64,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg218{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b68,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg219{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b6c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg220{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b70,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg221{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b74,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg222{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b78,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg223{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b7c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg224{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b80,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg225{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b84,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg226{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b88,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg227{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b8c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg228{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b90,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg229{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b94,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg230{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b98,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg231{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088b9c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg232{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088ba0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg233{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088ba4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg234{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088ba8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg235{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088bac,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg236{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088bb0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg237{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088bb4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg238{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088bb8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg239{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088bbc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg240{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088bc0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg241{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088bc4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg242{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088bc8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg243{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088bcc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg244{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088bd0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg245{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088bd4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg246{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088bd8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg247{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088bdc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg248{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088be0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg249{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088be4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg250{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088be8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg251{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088bec,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg252{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088bf0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg253{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088bf4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg254{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088bf8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrImg255{    ///<Cursor Image registers
        using Addr = Register::Address<0x20088bfc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor, or 4 32x32 cursors.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
    }
    namespace NonecrsrCtrl{    ///<Cursor Control register
        using Addr = Register::Address<0x20088c00,0xffffffce,0,unsigned>;
        ///Cursor enable. 0 = Cursor is not displayed. 1 = Cursor is displayed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crsron{}; 
        ///Cursor image number. If the selected cursor size is 6x64, this field has no effect. If the selected cursor size is 32x32: 00 = Cursor0. 01 = Cursor1. 10 = Cursor2. 11 = Cursor3.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> crsrnum10{}; 
    }
    namespace NonecrsrCfg{    ///<Cursor Configuration register
        using Addr = Register::Address<0x20088c04,0xfffffffc,0,unsigned>;
        ///Cursor size selection. 0 = 32x32 pixel cursor. Allows for 4 defined cursors. 1 = 64x64 pixel cursor.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crsrsize{}; 
        ///Cursor frame synchronization type. 0 = Cursor coordinates are asynchronous. 1 = Cursor coordinates are synchronized to the frame synchronization pulse.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> framesync{}; 
    }
    namespace NonecrsrPal0{    ///<Cursor Palette register 0
        using Addr = Register::Address<0x20088c08,0xff000000,0,unsigned>;
        ///Red color component
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> red{}; 
        ///Green color component
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> green{}; 
        ///Blue color component.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> blue{}; 
    }
    namespace NonecrsrPal1{    ///<Cursor Palette register 1
        using Addr = Register::Address<0x20088c0c,0xff000000,0,unsigned>;
        ///Red color component
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> red{}; 
        ///Green color component
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> green{}; 
        ///Blue color component.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> blue{}; 
    }
    namespace NonecrsrXy{    ///<Cursor XY Position register
        using Addr = Register::Address<0x20088c10,0xfc00fc00,0,unsigned>;
        ///X ordinate of the cursor origin measured in pixels. When 0, the left edge of the cursor is at the left of the display.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> crsrx{}; 
        ///Y ordinate of the cursor origin measured in pixels. When 0, the top edge of the cursor is at the top of the display.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> crsry{}; 
    }
    namespace NonecrsrClip{    ///<Cursor Clip Position register
        using Addr = Register::Address<0x20088c14,0xffffc0c0,0,unsigned>;
        ///Cursor clip position for X direction. Distance from the left edge of the cursor image to the first displayed pixel in the cursor. When 0, the first pixel of the cursor line is displayed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> crsrclipx{}; 
        ///Cursor clip position for Y direction. Distance from the top of the cursor image to the first displayed pixel in the cursor. When 0, the first displayed pixel is from the top line of the cursor image.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> crsrclipy{}; 
    }
    namespace NonecrsrIntmsk{    ///<Cursor Interrupt Mask register
        using Addr = Register::Address<0x20088c20,0xfffffffe,0,unsigned>;
        ///Cursor interrupt mask. When clear, the cursor never interrupts the processor. When set, the cursor interrupts the processor immediately after reading of the last word of cursor image.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crsrim{}; 
    }
    namespace NonecrsrIntclr{    ///<Cursor Interrupt Clear register
        using Addr = Register::Address<0x20088c24,0xfffffffe,0,unsigned>;
        ///Cursor interrupt clear. Writing a 0 to this bit has no effect. Writing a 1 to this bit causes the cursor interrupt status to be cleared.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crsric{}; 
    }
    namespace NonecrsrIntraw{    ///<Cursor Raw Interrupt Status register
        using Addr = Register::Address<0x20088c28,0xfffffffe,0,unsigned>;
        ///Cursor raw interrupt status. The cursor interrupt status is set immediately after the last data is read from the cursor image for the current frame. This bit is cleared by writing to the CrsrIC bit in the CRSR_INTCLR register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crsrris{}; 
    }
    namespace NonecrsrIntstat{    ///<Cursor Masked Interrupt Status register
        using Addr = Register::Address<0x20088c2c,0xfffffffe,0,unsigned>;
        ///Cursor masked interrupt status. The cursor interrupt status is set immediately after the last data read from the cursor image for the current frame, providing that the corresponding bit in the CRSR_INTMSK register is set. The bit remains clear if the CRSR_INTMSK register is clear. This bit is cleared by writing to the CRSR_INTCLR register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crsrmis{}; 
    }
}
