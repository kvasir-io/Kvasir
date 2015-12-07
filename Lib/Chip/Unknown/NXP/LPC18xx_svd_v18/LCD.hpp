#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx LCD Modification date=1/19/2011 Major revision=0 Minor revision=7 
    namespace Nonetimh{    ///<Horizontal Timing Control register
        using Addr = Register::Address<0x40008000,0x00000003,0,unsigned>;
        ///Pixels-per-line. The PPL bit field specifies the number of pixels in each line or row of the screen. PPL is a 6-bit value that represents between 16 and 1024 pixels per line. PPL counts the number of pixel clocks that occur before the HFP is applied. Program the value required divided by 16, minus 1. Actual pixels-per-line = 16 * (PPL + 1). For example, to obtain 320 pixels per line, program PPL as (320/16) -1 = 19.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> ppl{}; 
        namespace PplValC{
        }
        ///Horizontal synchronization pulse width. The 8-bit HSW field specifies the pulse width of the line clock in passive mode, or the horizontal synchronization pulse in active mode. Program with desired value minus 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> hsw{}; 
        namespace HswValC{
        }
        ///Horizontal front porch. The 8-bit HFP field sets the number of pixel clock intervals at the end of each line or row of pixels, before the LCD line clock is pulsed. When a complete line of pixels is transmitted to the LCD driver, the value in HFP counts the number of pixel clocks to wait before asserting the line clock. HFP can generate a period of 1-256 pixel clock cycles. Program with desired value minus 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hfp{}; 
        namespace HfpValC{
        }
        ///Horizontal back porch. The 8-bit HBP field is used to specify the number of pixel clock periods inserted at the beginning of each line or row of pixels. After the line clock for the previous line has been deasserted, the value in HBP counts the number of pixel clocks to wait before starting the next display line. HBP can generate a delay of 1-256 pixel clock cycles. Program with desired value minus 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> hbp{}; 
        namespace HbpValC{
        }
    }
    namespace Nonetimv{    ///<Vertical Timing Control register
        using Addr = Register::Address<0x40008004,0x00000000,0,unsigned>;
        ///Lines per panel. This is the number of active lines per screen. The LPP field specifies the total number of lines or rows on the LCD panel being controlled. LPP is a 10 bit value allowing between 1 and 1024 lines. Program the register with the number of lines per LCD panel, minus 1. For dual panel displays, program the register with the number of lines on each of the upper and lower panels.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> lpp{}; 
        namespace LppValC{
        }
        ///Vertical synchronization pulse width. This is the number of horizontal synchronization lines. The 6 bit VSW field specifies the pulse width of the vertical synchronization pulse. Program the register with the number of lines required, minus one. The number of horizontal synchronization lines must be small (for example, program to zero) for passive STN LCDs. The higher the value the worse the contrast on STN LCDs.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> vsw{}; 
        namespace VswValC{
        }
        ///Vertical front porch. This is the number of inactive lines at the end of a frame, before the vertical synchronization period. The 8 bit VFP field specifies the number of line clocks to insert at the end of each frame. When a complete frame of pixels is transmitted to the LCD display, the value in VFP is used to count the number of line clock periods to wait. After the count has elapsed, the vertical synchronization signal, LCDFP, is asserted in active mode, or extra line clocks are inserted as specified by the VSW bit field in passive mode. VFP generates 0-255 line clock cycles. Program to zero on passive displays for improved contrast.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> vfp{}; 
        namespace VfpValC{
        }
        ///Vertical back porch. This is the number of inactive lines at the start of a frame, after the vertical synchronization period. The 8 bit VBP field specifies the number of line clocks inserted at the beginning of each frame. The VBP count starts immediately after the vertical synchronization signal for the previous frame has been negated for active mode, or the extra line clocks have been inserted as specified by the VSW bit field in passive mode. After this has occurred, the count value in VBP sets the number of line clock periods inserted before the next frame. VBP generates 0-255 extra line clock cycles. Program to zero on passive displays for improved contrast.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> vbp{}; 
        namespace VbpValC{
        }
    }
    namespace Nonepol{    ///<Clock and Signal Polarity Control register
        using Addr = Register::Address<0x40008008,0x00008000,0,unsigned>;
        ///Lower five bits of panel clock divisor. The ten-bit PCD field, comprising PCD_HI (bits 31:27 of this register) and PCD_LO, is used to derive the LCD panel clock frequency LCDDCLK from the input clock, LCDDCLK = LCDCLK/(PCD+2). For monochrome STN displays with a 4 or 8-bit interface, the panel clock is a factor of four and eight down from the actual individual pixel clock rate. For color STN displays, 22/3 pixels are output per LCDDCLK cycle, so the panel clock is 0.375 times the pixel rate. For TFT displays, the pixel clock divider can be bypassed by setting the BCD bit in this register. Note: data path latency forces some restrictions on the usable minimum values for the panel clock divider in STN modes: Single panel color mode, PCD = 1 (LCDDCLK = LCDCLK/3). Dual panel color mode, PCD = 4 (LCDDCLK = LCDCLK/6). Single panel monochrome 4-bit interface mode, PCD = 2(LCDDCLK = LCDCLK/4). Dual panel monochrome 4-bit interface mode and single panel monochrome 8-bit interface mode, PCD = 6(LCDDCLK = LCDCLK/8). Dual panel monochrome 8-bit interface mode, PCD = 14(LCDDCLK = LCDCLK/16).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> pcdLo{}; 
        namespace PcdloValC{
        }
        ///Clock Select. This bit controls the selection of the source for LCDCLK. 0 = the clock source for the LCD block is CCLK. 1 = the clock source for the LCD block is LCDCLKIN (external clock input for the LVD).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clksel{}; 
        namespace ClkselValC{
        }
        ///AC bias pin frequency. The AC bias pin frequency is only applicable to STN displays. These require the pixel voltage polarity to periodically reverse to prevent damage caused by DC charge accumulation. Program this field with the required value minus one to apply the number of line clocks between each toggle of the AC bias pin, LCDENAB. This field has no effect if the LCD is operating in TFT mode, when the LCDENAB pin is used as a data enable signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> acb{}; 
        namespace AcbValC{
        }
        ///Invert vertical synchronization. The IVS bit inverts the polarity of the LCDFP signal. 0 = LCDFP pin is active HIGH and inactive LOW. 1 = LCDFP pin is active LOW and inactive HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ivs{}; 
        namespace IvsValC{
        }
        ///Invert horizontal synchronization. The IHS bit inverts the polarity of the LCDLP signal. 0 = LCDLP pin is active HIGH and inactive LOW. 1 = LCDLP pin is active LOW and inactive HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ihs{}; 
        namespace IhsValC{
        }
        ///Invert panel clock. The IPC bit selects the edge of the panel clock on which pixel data is driven out onto the LCD data lines. 0 = Data is driven on the LCD data lines on the rising edge of LCDDCLK. 1 = Data is driven on the LCD data lines on the falling edge of LCDDCLK.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ipc{}; 
        namespace IpcValC{
        }
        ///Invert output enable. This bit selects the active polarity of the output enable signal in TFT mode. In this mode, the LCDENAB pin is used as an enable that indicates to the LCD panel when valid display data is available. In active display mode, data is driven onto the LCD data lines at the programmed edge of LCDDCLK when LCDENAB is in its active state. 0 = LCDENAB output pin is active HIGH in TFT mode. 1 = LCDENAB output pin is active LOW in TFT mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ioe{}; 
        namespace IoeValC{
        }
        ///Clocks per line. This field specifies the number of actual LCDDCLK clocks to the LCD panel on each line. This is the number of PPL divided by either 1 (for TFT), 4 or 8 (for monochrome passive), 2 2/3 (for color passive), minus one. This must be correctly programmed in addition to the PPL bit in the TIMH register for the LCD display to work correctly.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> cpl{}; 
        namespace CplValC{
        }
        ///Bypass pixel clock divider. Setting this to 1 bypasses the pixel clock divider logic. This is mainly used for TFT displays.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> bcd{}; 
        namespace BcdValC{
        }
        ///Upper five bits of panel clock divisor. See description for PCD_LO, in bits [4:0] of this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,27),Register::ReadWriteAccess,unsigned> pcdHi{}; 
        namespace PcdhiValC{
        }
    }
    namespace Nonele{    ///<Line End Control register
        using Addr = Register::Address<0x4000800c,0xfffeff80,0,unsigned>;
        ///Line-end delay. Controls Line-end signal delay from the rising-edge of the last panel clock, LCDDCLK. Program with number of LCDCLK clock periods minus 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> led{}; 
        namespace LedValC{
        }
        ///LCD Line end enable. 0 = LCDLE disabled (held LOW). 1 = LCDLE signal active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lee{}; 
        namespace LeeValC{
        }
    }
    namespace Noneupbase{    ///<Upper Panel Frame Base Address register
        using Addr = Register::Address<0x40008010,0x00000007,0,unsigned>;
        ///LCD upper panel base address. This is the start address of the upper panel frame data in memory and is doubleword aligned.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> lcdupbase{}; 
        namespace LcdupbaseValC{
        }
    }
    namespace Nonelpbase{    ///<Lower Panel Frame Base Address register
        using Addr = Register::Address<0x40008014,0x00000007,0,unsigned>;
        ///LCD lower panel base address. This is the start address of the lower panel frame data in memory and is doubleword aligned.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> lcdlpbase{}; 
        namespace LcdlpbaseValC{
        }
    }
    namespace Nonectrl{    ///<LCD Control register
        using Addr = Register::Address<0x40008018,0xfffec000,0,unsigned>;
        ///LCD enable control bit. 0 = LCD disabled. Signals LCDLP, LCDDCLK, LCDFP, LCDENAB, and LCDLE are low. 1 = LCD enabled. Signals LCDLP, LCDDCLK, LCDFP, LCDENAB, and LCDLE are high. See LCD power-up and power-down sequence for details on LCD power sequencing.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lcden{}; 
        namespace LcdenValC{
        }
        ///LCD bits per pixel: Selects the number of bits per LCD pixel: 000 = 1 bpp. 001 = 2 bpp. 010 = 4 bpp. 011 = 8 bpp. 100 = 16 bpp. 101 = 24 bpp (TFT panel only). 110 = 16 bpp, 5:6:5 mode. 111 = 12 bpp, 4:4:4 mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> lcdbpp{}; 
        namespace LcdbppValC{
        }
        ///STN LCD monochrome/color selection. 0 = STN LCD is color. 1 = STN LCD is monochrome. This bit has no meaning in TFT mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lcdbw{}; 
        namespace LcdbwValC{
        }
        ///LCD panel TFT type selection. 0 = LCD is an STN display. Use gray scaler. 1 = LCD is a TFT display. Do not use gray scaler.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lcdtft{}; 
        namespace LcdtftValC{
        }
        ///Monochrome LCD interface width. This bit controls whether a monochrome STN LCD uses a 4 or 8-bit parallel interface. It has no meaning in other modes and must be programmed to zero. 0 = monochrome LCD uses a 4-bit interface. 1 = monochrome LCD uses a 8-bit interface.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lcdmono8{}; 
        namespace Lcdmono8ValC{
        }
        ///Single or Dual LCD panel selection. STN LCD interface is: 0 = single-panel. 1 = dual-panel.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lcddual{}; 
        namespace LcddualValC{
        }
        ///Color format selection. 0 = RGB: normal output. 1 = BGR: red and blue swapped.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bgr{}; 
        namespace BgrValC{
        }
        ///Big-endian Byte Order. Controls byte ordering in memory: 0 = little-endian byte order. 1 = big-endian byte order.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bebo{}; 
        namespace BeboValC{
        }
        ///Big-Endian Pixel Ordering. Controls pixel ordering within a byte: 0 = little-endian ordering within a byte. 1 = big-endian pixel ordering within a byte. The BEPO bit selects between little and big-endian pixel packing for 1, 2, and 4 bpp display modes, it has no effect on 8 or 16 bpp pixel formats.  See Pixel serializer for more information on the data format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bepo{}; 
        namespace BepoValC{
        }
        ///LCD power enable. 0 = power not gated through to LCD panel and LCDV[23:0] signals disabled, (held LOW). 1 = power gated through to LCD panel and LCDV[23:0] signals enabled, (active).  See LCD power-up and power-down sequence for details on LCD power sequencing.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lcdpwr{}; 
        namespace LcdpwrValC{
        }
        ///LCD Vertical Compare Interrupt. Generate VComp interrupt at: 00 = start of vertical synchronization. 01 = start of back porch. 10 = start of active video. 11 = start of front porch.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> lcdvcomp{}; 
        namespace LcdvcompValC{
        }
        ///LCD DMA FIFO watermark level. Controls when DMA requests are generated: 0 = An LCD DMA request is generated when either of the DMA FIFOs have four or more empty locations. 1 = An LCD DMA request is generated when either of the DMA FIFOs have eight or more empty locations.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> watermark{}; 
        namespace WatermarkValC{
        }
    }
    namespace Noneintmsk{    ///<Interrupt Mask register
        using Addr = Register::Address<0x4000801c,0xffffffe1,0,unsigned>;
        ///FIFO underflow interrupt enable. 0: The FIFO underflow interrupt is disabled. 1: Interrupt will be generated when the FIFO underflows.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fufim{}; 
        namespace FufimValC{
        }
        ///LCD next base address update interrupt enable. 0: The base address update interrupt is disabled. 1: Interrupt will be generated when the LCD base address registers have been updated from the next address registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lnbuim{}; 
        namespace LnbuimValC{
        }
        ///Vertical compare interrupt enable. 0: The vertical compare time interrupt is disabled. 1: Interrupt will be generated when the vertical compare time (as defined by LcdVComp field in the CTRL register) is reached.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vcompim{}; 
        namespace VcompimValC{
        }
        ///AHB master error interrupt enable. 0: The AHB Master error interrupt is disabled. 1: Interrupt will be generated when an AHB Master error occurs.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> berim{}; 
        namespace BerimValC{
        }
    }
    namespace Noneintraw{    ///<Raw Interrupt Status register
        using Addr = Register::Address<0x40008020,0xffffffe1,0,unsigned>;
        ///FIFO underflow raw interrupt status. Set when either the upper or lower DMA FIFOs have been read accessed when empty causing an underflow condition to occur. Generates an interrupt if the FUFIM bit in the INTMSK register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fufris{}; 
        namespace FufrisValC{
        }
        ///LCD next address base update raw interrupt status. Mode dependent. Set when the current base address registers have been successfully updated by the next address registers. Signifies that a new next address can be loaded if double buffering is in use. Generates an interrupt if the LNBUIM bit in the INTMSK register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lnburis{}; 
        namespace LnburisValC{
        }
        ///Vertical compare raw interrupt status. Set when one of the four vertical regions is reached, as selected by the LcdVComp bits in the CTRL register. Generates an interrupt if the VCompIM bit in the INTMSK register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vcompris{}; 
        namespace VcomprisValC{
        }
        ///AHB master bus error raw interrupt status. Set when the AHB master interface receives a bus error response from a slave. Generates an interrupt if the BERIM bit in the INTMSK register is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> berraw{}; 
        namespace BerrawValC{
        }
    }
    namespace Noneintstat{    ///<Masked Interrupt Status register
        using Addr = Register::Address<0x40008024,0xffffffe1,0,unsigned>;
        ///FIFO underflow masked interrupt status. Set when the both the FUFRIS bit in the INTRAW register and the FUFIM bit in the INTMSK register are set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fufmis{}; 
        namespace FufmisValC{
        }
        ///LCD next address base update masked interrupt status. Set when the both the LNBURIS bit in the INTRAW register and the LNBUIM bit in the INTMSK register are set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lnbumis{}; 
        namespace LnbumisValC{
        }
        ///Vertical compare masked interrupt status. Set when the both the VCompRIS bit in the INTRAW register and the VCompIM bit in the INTMSK register are set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vcompmis{}; 
        namespace VcompmisValC{
        }
        ///AHB master bus error masked interrupt status. Set when the both the BERRAW bit in the INTRAW register and the BERIM bit in the INTMSK register are set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bermis{}; 
        namespace BermisValC{
        }
    }
    namespace Noneintclr{    ///<Interrupt Clear register
        using Addr = Register::Address<0x40008028,0xffffffe1,0,unsigned>;
        ///FIFO underflow interrupt clear. Writing a 1 to this bit clears the FIFO underflow interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fufic{}; 
        namespace FuficValC{
        }
        ///LCD next address base update interrupt clear. Writing a 1 to this bit clears the LCD next address base update interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lnbuic{}; 
        namespace LnbuicValC{
        }
        ///Vertical compare interrupt clear. Writing a 1 to this bit clears the vertical compare interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vcompic{}; 
        namespace VcompicValC{
        }
        ///AHB master error interrupt clear. Writing a 1 to this bit clears the AHB master error interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> beric{}; 
        namespace BericValC{
        }
    }
    namespace Noneupcurr{    ///<Upper Panel Current Address Value register
        using Addr = Register::Address<0x4000802c,0x00000000,0,unsigned>;
        ///LCD Upper Panel Current Address. Contains the current LCD upper panel data DMA address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lcdupcurr{}; 
        namespace LcdupcurrValC{
        }
    }
    namespace Nonelpcurr{    ///<Lower Panel Current Address Value register
        using Addr = Register::Address<0x40008030,0x00000000,0,unsigned>;
        ///LCD Lower Panel Current Address. Contains the current LCD lower panel data DMA address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lcdlpcurr{}; 
        namespace LcdlpcurrValC{
        }
    }
    namespace Nonepal0{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008200,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal1{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008204,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal2{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008208,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal3{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000820c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal4{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008210,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal5{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008214,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal6{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008218,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal7{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000821c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal8{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008220,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal9{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008224,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal10{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008228,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal11{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000822c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal12{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008230,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal13{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008234,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal14{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008238,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal15{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000823c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal16{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008240,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal17{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008244,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal18{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008248,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal19{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000824c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal20{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008250,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal21{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008254,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal22{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008258,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal23{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000825c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal24{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008260,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal25{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008264,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal26{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008268,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal27{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000826c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal28{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008270,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal29{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008274,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal30{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008278,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal31{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000827c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal32{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008280,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal33{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008284,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal34{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008288,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal35{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000828c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal36{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008290,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal37{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008294,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal38{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008298,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal39{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000829c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal40{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082a0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal41{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082a4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal42{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082a8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal43{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082ac,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal44{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082b0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal45{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082b4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal46{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082b8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal47{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082bc,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal48{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082c0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal49{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082c4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal50{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082c8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal51{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082cc,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal52{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082d0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal53{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082d4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal54{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082d8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal55{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082dc,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal56{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082e0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal57{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082e4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal58{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082e8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal59{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082ec,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal60{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082f0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal61{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082f4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal62{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082f8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal63{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400082fc,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal64{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008300,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal65{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008304,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal66{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008308,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal67{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000830c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal68{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008310,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal69{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008314,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal70{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008318,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal71{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000831c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal72{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008320,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal73{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008324,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal74{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008328,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal75{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000832c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal76{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008330,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal77{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008334,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal78{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008338,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal79{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000833c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal80{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008340,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal81{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008344,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal82{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008348,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal83{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000834c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal84{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008350,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal85{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008354,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal86{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008358,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal87{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000835c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal88{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008360,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal89{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008364,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal90{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008368,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal91{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000836c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal92{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008370,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal93{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008374,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal94{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008378,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal95{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000837c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal96{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008380,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal97{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008384,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal98{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008388,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal99{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000838c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal100{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008390,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal101{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008394,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal102{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008398,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal103{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000839c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal104{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083a0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal105{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083a4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal106{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083a8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal107{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083ac,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal108{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083b0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal109{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083b4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal110{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083b8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal111{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083bc,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal112{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083c0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal113{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083c4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal114{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083c8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal115{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083cc,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal116{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083d0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal117{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083d4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal118{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083d8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal119{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083dc,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal120{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083e0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal121{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083e4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal122{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083e8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal123{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083ec,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal124{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083f0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal125{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083f4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal126{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083f8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal127{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400083fc,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal128{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008400,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal129{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008404,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal130{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008408,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal131{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000840c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal132{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008410,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal133{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008414,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal134{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008418,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal135{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000841c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal136{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008420,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal137{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008424,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal138{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008428,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal139{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000842c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal140{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008430,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal141{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008434,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal142{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008438,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal143{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000843c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal144{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008440,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal145{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008444,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal146{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008448,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal147{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000844c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal148{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008450,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal149{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008454,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal150{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008458,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal151{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000845c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal152{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008460,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal153{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008464,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal154{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008468,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal155{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000846c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal156{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008470,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal157{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008474,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal158{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008478,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal159{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000847c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal160{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008480,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal161{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008484,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal162{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008488,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal163{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000848c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal164{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008490,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal165{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008494,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal166{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008498,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal167{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000849c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal168{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084a0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal169{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084a4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal170{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084a8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal171{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084ac,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal172{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084b0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal173{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084b4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal174{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084b8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal175{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084bc,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal176{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084c0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal177{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084c4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal178{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084c8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal179{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084cc,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal180{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084d0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal181{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084d4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal182{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084d8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal183{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084dc,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal184{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084e0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal185{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084e4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal186{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084e8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal187{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084ec,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal188{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084f0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal189{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084f4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal190{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084f8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal191{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400084fc,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal192{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008500,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal193{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008504,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal194{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008508,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal195{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000850c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal196{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008510,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal197{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008514,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal198{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008518,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal199{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000851c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal200{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008520,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal201{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008524,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal202{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008528,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal203{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000852c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal204{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008530,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal205{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008534,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal206{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008538,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal207{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000853c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal208{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008540,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal209{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008544,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal210{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008548,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal211{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000854c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal212{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008550,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal213{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008554,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal214{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008558,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal215{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000855c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal216{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008560,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal217{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008564,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal218{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008568,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal219{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000856c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal220{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008570,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal221{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008574,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal222{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008578,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal223{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000857c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal224{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008580,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal225{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008584,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal226{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008588,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal227{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000858c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal228{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008590,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal229{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008594,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal230{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x40008598,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal231{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x4000859c,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal232{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085a0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal233{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085a4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal234{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085a8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal235{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085ac,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal236{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085b0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal237{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085b4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal238{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085b8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal239{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085bc,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal240{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085c0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal241{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085c4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal242{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085c8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal243{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085cc,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal244{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085d0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal245{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085d4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal246{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085d8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal247{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085dc,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal248{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085e0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal249{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085e4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal250{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085e8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal251{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085ec,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal252{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085f0,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal253{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085f4,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal254{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085f8,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace Nonepal255{    ///<256x16-bit Color Palette registers
        using Addr = Register::Address<0x400085fc,0x00000000,0,unsigned>;
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> r040{}; 
        namespace R040ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> g040{}; 
        namespace G040ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> b040{}; 
        namespace B040ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> i0{}; 
        namespace I0ValC{
        }
        ///Red palette data. For STN displays, only the four MSBs, bits [4:1], are used. For monochrome displays only the red palette data is used. All of the palette registers have the same bit fields.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> r140{}; 
        namespace R140ValC{
        }
        ///Green palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> g140{}; 
        namespace G140ValC{
        }
        ///Blue palette data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///Intensity / unused bit. Can be used as the LSB of the R, G, and B inputs to a 6:6:6 TFT display, doubling the number of colors to 64K, where each color has two different intensities.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i1{}; 
        namespace I1ValC{
        }
    }
    namespace NonecrsrImg0{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008800,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg1{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008804,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg2{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008808,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg3{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000880c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg4{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008810,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg5{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008814,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg6{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008818,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg7{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000881c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg8{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008820,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg9{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008824,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg10{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008828,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg11{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000882c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg12{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008830,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg13{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008834,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg14{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008838,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg15{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000883c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg16{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008840,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg17{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008844,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg18{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008848,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg19{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000884c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg20{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008850,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg21{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008854,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg22{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008858,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg23{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000885c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg24{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008860,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg25{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008864,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg26{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008868,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg27{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000886c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg28{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008870,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg29{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008874,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg30{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008878,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg31{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000887c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg32{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008880,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg33{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008884,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg34{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008888,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg35{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000888c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg36{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008890,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg37{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008894,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg38{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008898,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg39{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000889c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg40{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088a0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg41{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088a4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg42{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088a8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg43{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088ac,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg44{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088b0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg45{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088b4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg46{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088b8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg47{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088bc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg48{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088c0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg49{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088c4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg50{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088c8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg51{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088cc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg52{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088d0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg53{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088d4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg54{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088d8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg55{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088dc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg56{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088e0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg57{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088e4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg58{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088e8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg59{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088ec,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg60{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088f0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg61{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088f4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg62{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088f8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg63{    ///<Cursor Image registers
        using Addr = Register::Address<0x400088fc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg64{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008900,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg65{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008904,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg66{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008908,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg67{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000890c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg68{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008910,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg69{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008914,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg70{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008918,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg71{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000891c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg72{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008920,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg73{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008924,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg74{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008928,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg75{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000892c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg76{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008930,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg77{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008934,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg78{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008938,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg79{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000893c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg80{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008940,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg81{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008944,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg82{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008948,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg83{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000894c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg84{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008950,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg85{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008954,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg86{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008958,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg87{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000895c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg88{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008960,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg89{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008964,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg90{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008968,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg91{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000896c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg92{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008970,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg93{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008974,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg94{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008978,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg95{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000897c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg96{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008980,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg97{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008984,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg98{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008988,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg99{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000898c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg100{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008990,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg101{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008994,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg102{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008998,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg103{    ///<Cursor Image registers
        using Addr = Register::Address<0x4000899c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg104{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089a0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg105{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089a4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg106{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089a8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg107{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089ac,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg108{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089b0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg109{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089b4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg110{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089b8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg111{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089bc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg112{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089c0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg113{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089c4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg114{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089c8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg115{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089cc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg116{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089d0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg117{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089d4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg118{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089d8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg119{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089dc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg120{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089e0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg121{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089e4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg122{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089e8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg123{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089ec,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg124{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089f0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg125{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089f4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg126{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089f8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg127{    ///<Cursor Image registers
        using Addr = Register::Address<0x400089fc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg128{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a00,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg129{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a04,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg130{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a08,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg131{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a0c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg132{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a10,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg133{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a14,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg134{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a18,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg135{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a1c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg136{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a20,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg137{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a24,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg138{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a28,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg139{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a2c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg140{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a30,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg141{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a34,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg142{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a38,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg143{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a3c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg144{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a40,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg145{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a44,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg146{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a48,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg147{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a4c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg148{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a50,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg149{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a54,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg150{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a58,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg151{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a5c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg152{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a60,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg153{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a64,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg154{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a68,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg155{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a6c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg156{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a70,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg157{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a74,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg158{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a78,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg159{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a7c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg160{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a80,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg161{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a84,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg162{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a88,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg163{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a8c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg164{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a90,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg165{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a94,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg166{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a98,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg167{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008a9c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg168{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008aa0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg169{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008aa4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg170{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008aa8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg171{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008aac,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg172{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ab0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg173{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ab4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg174{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ab8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg175{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008abc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg176{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ac0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg177{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ac4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg178{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ac8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg179{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008acc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg180{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ad0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg181{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ad4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg182{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ad8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg183{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008adc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg184{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ae0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg185{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ae4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg186{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ae8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg187{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008aec,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg188{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008af0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg189{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008af4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg190{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008af8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg191{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008afc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg192{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b00,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg193{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b04,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg194{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b08,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg195{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b0c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg196{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b10,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg197{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b14,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg198{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b18,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg199{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b1c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg200{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b20,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg201{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b24,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg202{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b28,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg203{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b2c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg204{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b30,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg205{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b34,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg206{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b38,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg207{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b3c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg208{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b40,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg209{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b44,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg210{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b48,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg211{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b4c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg212{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b50,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg213{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b54,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg214{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b58,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg215{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b5c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg216{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b60,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg217{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b64,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg218{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b68,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg219{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b6c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg220{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b70,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg221{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b74,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg222{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b78,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg223{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b7c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg224{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b80,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg225{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b84,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg226{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b88,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg227{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b8c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg228{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b90,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg229{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b94,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg230{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b98,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg231{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008b9c,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg232{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ba0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg233{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ba4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg234{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008ba8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg235{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bac,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg236{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bb0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg237{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bb4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg238{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bb8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg239{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bbc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg240{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bc0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg241{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bc4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg242{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bc8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg243{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bcc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg244{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bd0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg245{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bd4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg246{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bd8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg247{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bdc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg248{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008be0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg249{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008be4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg250{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008be8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg251{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bec,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg252{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bf0,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg253{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bf4,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg254{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bf8,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrImg255{    ///<Cursor Image registers
        using Addr = Register::Address<0x40008bfc,0x00000000,0,unsigned>;
        ///Cursor Image data. The 256 words of the cursor image registers define the appearance of either one 64x64 cursor or 4 32x32 cursors.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crsrImg{}; 
        namespace CrsrimgValC{
        }
    }
    namespace NonecrsrCtrl{    ///<Cursor Control register
        using Addr = Register::Address<0x40008c00,0xffffffce,0,unsigned>;
        ///Cursor enable. 0 = Cursor is not displayed. 1 = Cursor is displayed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crsron{}; 
        namespace CrsronValC{
        }
        ///Cursor image number. If the selected cursor size is 6x64, this field has no effect. If the selected cursor size is 32x32: 00 = Cursor0. 01 = Cursor1. 10 = Cursor2. 11 = Cursor3.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> crsrnum10{}; 
        namespace Crsrnum10ValC{
        }
    }
    namespace NonecrsrCfg{    ///<Cursor Configuration register
        using Addr = Register::Address<0x40008c04,0xfffffffc,0,unsigned>;
        ///Cursor size selection. 0 = 32x32 pixel cursor. Allows for 4 defined cursors. 1 = 64x64 pixel cursor.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crsrsize{}; 
        namespace CrsrsizeValC{
        }
        ///Cursor frame synchronization type. 0 = Cursor coordinates are asynchronous. 1 = Cursor coordinates are synchronized to the frame synchronization pulse.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> framesync{}; 
        namespace FramesyncValC{
        }
    }
    namespace NonecrsrPal0{    ///<Cursor Palette register 0
        using Addr = Register::Address<0x40008c08,0xff000000,0,unsigned>;
        ///Red color component
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> red{}; 
        namespace RedValC{
        }
        ///Green color component
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> green{}; 
        namespace GreenValC{
        }
        ///Blue color component.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> blue{}; 
        namespace BlueValC{
        }
    }
    namespace NonecrsrPal1{    ///<Cursor Palette register 1
        using Addr = Register::Address<0x40008c0c,0xff000000,0,unsigned>;
        ///Red color component
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> red{}; 
        namespace RedValC{
        }
        ///Green color component
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> green{}; 
        namespace GreenValC{
        }
        ///Blue color component.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> blue{}; 
        namespace BlueValC{
        }
    }
    namespace NonecrsrXy{    ///<Cursor XY Position register
        using Addr = Register::Address<0x40008c10,0xfc00fc00,0,unsigned>;
        ///X ordinate of the cursor origin measured in pixels. When 0, the left edge of the cursor is at the left of the display.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> crsrx{}; 
        namespace CrsrxValC{
        }
        ///Y ordinate of the cursor origin measured in pixels. When 0, the top edge of the cursor is at the top of the display.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> crsry{}; 
        namespace CrsryValC{
        }
    }
    namespace NonecrsrClip{    ///<Cursor Clip Position register
        using Addr = Register::Address<0x40008c14,0xffffc0c0,0,unsigned>;
        ///Cursor clip position for X direction. Distance from the left edge of the cursor image to the first displayed pixel in the cursor. When 0, the first pixel of the cursor line is displayed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> crsrclipx{}; 
        namespace CrsrclipxValC{
        }
        ///Cursor clip position for Y direction. Distance from the top of the cursor image to the first displayed pixel in the cursor. When 0, the first displayed pixel is from the top line of the cursor image.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> crsrclipy{}; 
        namespace CrsrclipyValC{
        }
    }
    namespace NonecrsrIntmsk{    ///<Cursor Interrupt Mask register
        using Addr = Register::Address<0x40008c20,0xfffffffe,0,unsigned>;
        ///Cursor interrupt mask. When clear, the cursor never interrupts the processor. When set, the cursor interrupts the processor immediately after reading of the last word of cursor image.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crsrim{}; 
        namespace CrsrimValC{
        }
    }
    namespace NonecrsrIntclr{    ///<Cursor Interrupt Clear register
        using Addr = Register::Address<0x40008c24,0xfffffffe,0,unsigned>;
        ///Cursor interrupt clear. Writing a 0 to this bit has no effect. Writing a 1 to this bit causes the cursor interrupt status to be cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crsric{}; 
        namespace CrsricValC{
        }
    }
    namespace NonecrsrIntraw{    ///<Cursor Raw Interrupt Status register
        using Addr = Register::Address<0x40008c28,0xfffffffe,0,unsigned>;
        ///Cursor raw interrupt status. The cursor interrupt status is set immediately after the last data is read from the cursor image for the current frame. This bit is cleared by writing to the CrsrIC bit in the CRSR_INTCLR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crsrris{}; 
        namespace CrsrrisValC{
        }
    }
    namespace NonecrsrIntstat{    ///<Cursor Masked Interrupt Status register
        using Addr = Register::Address<0x40008c2c,0xfffffffe,0,unsigned>;
        ///Cursor masked interrupt status. The cursor interrupt status is set immediately after the last data read from the cursor image for the current frame, providing that the corresponding bit in the CRSR_INTMSK register is set. The bit remains clear if the CRSR_INTMSK register is clear. This bit is cleared by writing to the CRSR_INTCLR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crsrmis{}; 
        namespace CrsrmisValC{
        }
    }
}
