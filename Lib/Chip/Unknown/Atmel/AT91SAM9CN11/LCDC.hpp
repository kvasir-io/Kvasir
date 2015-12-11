#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//LCD Controller
    namespace LcdcLcdcfg0{    ///<LCD Controller Configuration Register 0
        using Addr = Register::Address<0xf8038000,0xff00fef2,0,unsigned>;
        ///LCD Controller Clock Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clkpol{}; 
        ///LCD Controller Clock Source Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clksel{}; 
        ///LCD Controller PWM Clock Source Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clkpwmsel{}; 
        ///Clock Gating Disable Control for the Base Layer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cgdisbase{}; 
        ///LCD Controller Clock Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clkdiv{}; 
    }
    namespace LcdcLcdcfg1{    ///<LCD Controller Configuration Register 1
        using Addr = Register::Address<0xf8038004,0xffc0ffc0,0,unsigned>;
        ///Horizontal Synchronization Pulse Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> hspw{}; 
        ///Vertical Synchronization Pulse Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> vspw{}; 
    }
    namespace LcdcLcdcfg2{    ///<LCD Controller Configuration Register 2
        using Addr = Register::Address<0xf8038008,0xffc0ffc0,0,unsigned>;
        ///Vertical Front Porch Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> vfpw{}; 
        ///Vertical Back Porch Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> vbpw{}; 
    }
    namespace LcdcLcdcfg3{    ///<LCD Controller Configuration Register 3
        using Addr = Register::Address<0xf803800c,0xff00ff00,0,unsigned>;
        ///Horizontal Front Porch Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> hfpw{}; 
        ///Horizontal Back Porch Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hbpw{}; 
    }
    namespace LcdcLcdcfg4{    ///<LCD Controller Configuration Register 4
        using Addr = Register::Address<0xf8038010,0xf800f800,0,unsigned>;
        ///Number of Pixels Per Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> ppl{}; 
        ///Number of Active Rows Per Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> rpf{}; 
    }
    namespace LcdcLcdcfg5{    ///<LCD Controller Configuration Register 5
        using Addr = Register::Address<0xf8038014,0xffe0cc20,0,unsigned>;
        ///Horizontal Synchronization Pulse Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hspol{}; 
        ///Vertical Synchronization Pulse Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vspol{}; 
        ///Vertical Synchronization Pulse Start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> vspdlys{}; 
        ///Vertical Synchronization Pulse End
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vspdlye{}; 
        ///Display Signal Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> disppol{}; 
        ///LCD Controller Dithering
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dither{}; 
        ///LCD Controller Display Power Signal Synchronization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dispdly{}; 
        ///LCD Controller Output Mode
        enum class ModeVal {
            output12bpp=0x00000000,     ///<LCD output mode is set to 12 bits per pixel
            output16bpp=0x00000001,     ///<LCD output mode is set to 16 bits per pixel
            output18bpp=0x00000002,     ///<LCD output mode is set to 18 bits per pixel
            output24bpp=0x00000003,     ///<LCD output mode is set to 24 bits per pixel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::output12bpp> output12bpp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::output16bpp> output16bpp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::output18bpp> output18bpp{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::output24bpp> output24bpp{};
        }
        ///LCD Controller Vertical Synchronization Pulse Setup Configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> vspsu{}; 
        ///LCD Controller Vertical Synchronization Pulse Hold Configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> vspho{}; 
        ///LCD DISPLAY Guard Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> guardtime{}; 
    }
    namespace LcdcLcdcfg6{    ///<LCD Controller Configuration Register 6
        using Addr = Register::Address<0xf8038018,0xffff00e8,0,unsigned>;
        ///PWM Clock Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> pwmps{}; 
        ///LCD Controller PWM Signal Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pwmpol{}; 
        ///LCD Controller PWM Compare Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pwmcval{}; 
    }
    namespace LcdcLcden{    ///<LCD Controller Enable Register
        using Addr = Register::Address<0xf8038020,0xfffffff0,0,unsigned>;
        ///LCD Controller Pixel Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clken{}; 
        ///LCD Controller Horizontal and Vertical Synchronization Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> syncen{}; 
        ///LCD Controller DISP Signal Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dispen{}; 
        ///LCD Controller Pulse Width Modulation Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pwmen{}; 
    }
    namespace LcdcLcddis{    ///<LCD Controller Disable Register
        using Addr = Register::Address<0xf8038024,0xfffff0f0,0,unsigned>;
        ///LCD Controller Pixel Clock Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clkdis{}; 
        ///LCD Controller Horizontal and Vertical Synchronization Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> syncdis{}; 
        ///LCD Controller DISP Signal Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dispdis{}; 
        ///LCD Controller Pulse Width Modulation Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pwmdis{}; 
        ///LCD Controller Clock Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clkrst{}; 
        ///LCD Controller Horizontal and Vertical Synchronization Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> syncrst{}; 
        ///LCD Controller DISP Signal Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> disprst{}; 
        ///LCD Controller PWM Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pwmrst{}; 
    }
    namespace LcdcLcdsr{    ///<LCD Controller Status Register
        using Addr = Register::Address<0xf8038028,0xffffffe0,0,unsigned>;
        ///Clock Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clksts{}; 
        ///LCD Controller Synchronization status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lcdsts{}; 
        ///LCD Controller DISP Signal Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dispsts{}; 
        ///LCD Controller PWM Signal Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pwmsts{}; 
        ///Synchronization In Progress
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sipsts{}; 
    }
    namespace LcdcLcdier{    ///<LCD Controller Interrupt Enable Register
        using Addr = Register::Address<0xf803802c,0xfffffee8,0,unsigned>;
        ///Start of Frame Interrupt Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sofie{}; 
        ///LCD Disable Interrupt Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> disie{}; 
        ///Power UP/Down Sequence Terminated Interrupt Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dispie{}; 
        ///Output FIFO Error Interrupt Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fifoerrie{}; 
        ///Base Layer Interrupt Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> baseie{}; 
    }
    namespace LcdcLcdidr{    ///<LCD Controller Interrupt Disable Register
        using Addr = Register::Address<0xf8038030,0xfffffee8,0,unsigned>;
        ///Start of Frame Interrupt Disable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sofid{}; 
        ///LCD Disable Interrupt Disable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> disid{}; 
        ///Power UP/Down Sequence Terminated Interrupt Disable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dispid{}; 
        ///Output FIFO Error Interrupt Disable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fifoerrid{}; 
        ///Base Layer Interrupt Disable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> baseid{}; 
    }
    namespace LcdcLcdimr{    ///<LCD Controller Interrupt Mask Register
        using Addr = Register::Address<0xf8038034,0xfffffee8,0,unsigned>;
        ///Start of Frame Interrupt Mask Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sofim{}; 
        ///LCD Disable Interrupt Mask Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> disim{}; 
        ///Power UP/Down Sequence Terminated Interrupt Mask Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dispim{}; 
        ///Output FIFO Error Interrupt Mask Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fifoerrim{}; 
        ///Base Layer Interrupt Mask Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> baseim{}; 
    }
    namespace LcdcLcdisr{    ///<LCD Controller Interrupt Status Register
        using Addr = Register::Address<0xf8038038,0xfffffee8,0,unsigned>;
        ///Start of Frame Interrupt Status Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sof{}; 
        ///LCD Disable Interrupt Status Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dis{}; 
        ///Power-up/Power-down Sequence Terminated Interrupt Status Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> disp{}; 
        ///Output FIFO Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fifoerr{}; 
        ///Base Layer Raw Interrupt Status Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> base{}; 
    }
    namespace LcdcBasecher{    ///<Base Layer Channel Enable Register
        using Addr = Register::Address<0xf8038040,0xfffffff8,0,unsigned>;
        ///Channel Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Update Overlay Attributes Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> updateen{}; 
        ///Add Head Pointer Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> a2qen{}; 
    }
    namespace LcdcBasechdr{    ///<Base Layer Channel Disable Register
        using Addr = Register::Address<0xf8038044,0xfffffefe,0,unsigned>;
        ///Channel Disable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel Reset Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chrst{}; 
    }
    namespace LcdcBasechsr{    ///<Base Layer Channel Status Register
        using Addr = Register::Address<0xf8038048,0xfffffff8,0,unsigned>;
        ///Channel Status Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chsr{}; 
        ///Update Overlay Attributes In Progress
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> updatesr{}; 
        ///Add To Queue Pending Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> a2qsr{}; 
    }
    namespace LcdcBaseier{    ///<Base Layer Interrupt Enable Register
        using Addr = Register::Address<0xf803804c,0xffffff83,0,unsigned>;
        ///End of DMA Transfer Interrupt Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Descriptor Loaded Interrupt Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscr{}; 
        ///Head Descriptor Loaded Interrupt Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> add{}; 
        ///End of List Interrupt Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> done{}; 
        ///Overflow Interrupt Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
    }
    namespace LcdcBaseidr{    ///<Base Layer Interrupt Disabled Register
        using Addr = Register::Address<0xf8038050,0xffffff83,0,unsigned>;
        ///End of DMA Transfer Interrupt Disable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Descriptor Loaded Interrupt Disable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscr{}; 
        ///Head Descriptor Loaded Interrupt Disable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> add{}; 
        ///End of List Interrupt Disable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> done{}; 
        ///Overflow Interrupt Disable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
    }
    namespace LcdcBaseimr{    ///<Base Layer Interrupt Mask Register
        using Addr = Register::Address<0xf8038054,0xffffff83,0,unsigned>;
        ///End of DMA Transfer Interrupt Mask Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Descriptor Loaded Interrupt Mask Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscr{}; 
        ///Head Descriptor Loaded Interrupt Mask Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> add{}; 
        ///End of List Interrupt Mask Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> done{}; 
        ///Overflow Interrupt Mask Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
    }
    namespace LcdcBaseisr{    ///<Base Layer Interrupt status Register
        using Addr = Register::Address<0xf8038058,0xffffff83,0,unsigned>;
        ///End of DMA Transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dma{}; 
        ///DMA Descriptor Loaded
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscr{}; 
        ///Head Descriptor Loaded
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> add{}; 
        ///End of List Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> done{}; 
        ///Overflow Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
    }
    namespace LcdcBasehead{    ///<Base Layer DMA Head Register
        using Addr = Register::Address<0xf803805c,0x00000003,0,unsigned>;
        ///DMA Head Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> head{}; 
    }
    namespace LcdcBaseaddr{    ///<Base Layer DMA Address Register
        using Addr = Register::Address<0xf8038060,0x00000000,0,unsigned>;
        ///DMA Transfer Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace LcdcBasectrl{    ///<Base Layer DMA Control Register
        using Addr = Register::Address<0xf8038064,0xffffffc0,0,unsigned>;
        ///Transfer Descriptor Fetch Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dfetch{}; 
        ///Lookup Table Fetch Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lfetch{}; 
        ///End of DMA Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmaien{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscrien{}; 
        ///Add Head Descriptor to Queue Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> addien{}; 
        ///End of List Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> doneien{}; 
    }
    namespace LcdcBasenext{    ///<Base Layer DMA Next Register
        using Addr = Register::Address<0xf8038068,0x00000000,0,unsigned>;
        ///DMA Descriptor Next Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> next{}; 
    }
    namespace LcdcBasecfg0{    ///<Base Layer Configuration Register 0
        using Addr = Register::Address<0xf803806c,0xfffffecf,0,unsigned>;
        ///AHB Burst Length
        enum class BlenVal {
            ahbSingle=0x00000000,     ///<AHB Access is started as soon as there is enough space in the FIFO to store one 32-bit data. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts can be used. INCR is used for a burst of 2 and 3 beats.
            ahbIncr4=0x00000001,     ///<AHB Access is started as soon as there is enough space in the FIFO to store a total amount of four 32-bit data. An AHB INCR4 Burst is preferred. SINGLE, INCR and INCR4 bursts can be used. INCR is used for a burst of 2 and 3 beats.
            ahbIncr8=0x00000002,     ///<AHB Access is started as soon as there is enough space in the FIFO to store a total amount of eight 32-bit data. An AHB INCR8 Burst is preferred. SINGLE, INCR, INCR4 and INCR8 bursts can be used. INCR is used for a burst of 2 and 3 beats.
            ahbIncr16=0x00000003,     ///<AHB Access is started as soon as there is enough space in the FIFO to store a total amount of sixteen 32-bit data. An AHB INCR16 Burst is preferred. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts can be used. INCR is used for a burst of 2 and 3 beats.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,BlenVal> blen{}; 
        namespace BlenValC{
            constexpr Register::FieldValue<decltype(blen)::Type,BlenVal::ahbSingle> ahbSingle{};
            constexpr Register::FieldValue<decltype(blen)::Type,BlenVal::ahbIncr4> ahbIncr4{};
            constexpr Register::FieldValue<decltype(blen)::Type,BlenVal::ahbIncr8> ahbIncr8{};
            constexpr Register::FieldValue<decltype(blen)::Type,BlenVal::ahbIncr16> ahbIncr16{};
        }
        ///Defined Length Burst Only For Channel Bus Transaction.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dlbo{}; 
    }
    namespace LcdcBasecfg1{    ///<Base Layer Configuration Register 1
        using Addr = Register::Address<0xf8038070,0xfffffc0e,0,unsigned>;
        ///Color Lookup Table Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cluten{}; 
        ///RGB Input Mode Selection
        enum class RgbmodeVal {
            v12bppRgb444=0x00000000,     ///<12 bpp RGB 444
            v16bppArgb4444=0x00000001,     ///<16 bpp ARGB 4444
            v16bppRgba4444=0x00000002,     ///<16 bpp RGBA 4444
            v16bppRgb565=0x00000003,     ///<16 bpp RGB 565
            v16bppTrgb1555=0x00000004,     ///<16 bpp TRGB 1555
            v18bppRgb666=0x00000005,     ///<18 bpp RGB 666
            v18bppRgb666Packed=0x00000006,     ///<18 bpp RGB 666 PACKED
            v19bppTrgb1666=0x00000007,     ///<19 bpp TRGB 1666
            v19bppTrgbPacked=0x00000008,     ///<19 bpp TRGB 1666 PACKED
            v24bppRgb888=0x00000009,     ///<24 bpp RGB 888
            v24bppRgb888Packed=0x0000000a,     ///<24 bpp RGB 888 PACKED
            v25bppTrgb1888=0x0000000b,     ///<25 bpp TRGB 1888
            v32bppArgb8888=0x0000000c,     ///<32 bpp ARGB 8888
            v32bppRgba8888=0x0000000d,     ///<32 bpp RGBA 8888
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,RgbmodeVal> rgbmode{}; 
        namespace RgbmodeValC{
            constexpr Register::FieldValue<decltype(rgbmode)::Type,RgbmodeVal::v12bppRgb444> v12bppRgb444{};
            constexpr Register::FieldValue<decltype(rgbmode)::Type,RgbmodeVal::v16bppArgb4444> v16bppArgb4444{};
            constexpr Register::FieldValue<decltype(rgbmode)::Type,RgbmodeVal::v16bppRgba4444> v16bppRgba4444{};
            constexpr Register::FieldValue<decltype(rgbmode)::Type,RgbmodeVal::v16bppRgb565> v16bppRgb565{};
            constexpr Register::FieldValue<decltype(rgbmode)::Type,RgbmodeVal::v16bppTrgb1555> v16bppTrgb1555{};
            constexpr Register::FieldValue<decltype(rgbmode)::Type,RgbmodeVal::v18bppRgb666> v18bppRgb666{};
            constexpr Register::FieldValue<decltype(rgbmode)::Type,RgbmodeVal::v18bppRgb666Packed> v18bppRgb666Packed{};
            constexpr Register::FieldValue<decltype(rgbmode)::Type,RgbmodeVal::v19bppTrgb1666> v19bppTrgb1666{};
            constexpr Register::FieldValue<decltype(rgbmode)::Type,RgbmodeVal::v19bppTrgbPacked> v19bppTrgbPacked{};
            constexpr Register::FieldValue<decltype(rgbmode)::Type,RgbmodeVal::v24bppRgb888> v24bppRgb888{};
            constexpr Register::FieldValue<decltype(rgbmode)::Type,RgbmodeVal::v24bppRgb888Packed> v24bppRgb888Packed{};
            constexpr Register::FieldValue<decltype(rgbmode)::Type,RgbmodeVal::v25bppTrgb1888> v25bppTrgb1888{};
            constexpr Register::FieldValue<decltype(rgbmode)::Type,RgbmodeVal::v32bppArgb8888> v32bppArgb8888{};
            constexpr Register::FieldValue<decltype(rgbmode)::Type,RgbmodeVal::v32bppRgba8888> v32bppRgba8888{};
        }
        ///Color Lookup Table Input Mode Selection
        enum class ClutmodeVal {
            v1bpp=0x00000000,     ///<color lookup table mode set to 1 bit per pixel
            v2bpp=0x00000001,     ///<color lookup table mode set to 2 bits per pixel
            v4bpp=0x00000002,     ///<color lookup table mode set to 4 bits per pixel
            v8bpp=0x00000003,     ///<color lookup table mode set to 8 bits per pixel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ClutmodeVal> clutmode{}; 
        namespace ClutmodeValC{
            constexpr Register::FieldValue<decltype(clutmode)::Type,ClutmodeVal::v1bpp> v1bpp{};
            constexpr Register::FieldValue<decltype(clutmode)::Type,ClutmodeVal::v2bpp> v2bpp{};
            constexpr Register::FieldValue<decltype(clutmode)::Type,ClutmodeVal::v4bpp> v4bpp{};
            constexpr Register::FieldValue<decltype(clutmode)::Type,ClutmodeVal::v8bpp> v8bpp{};
        }
    }
    namespace LcdcBasecfg2{    ///<Base Layer Configuration Register 2
        using Addr = Register::Address<0xf8038074,0x00000000,0,unsigned>;
        ///Horizontal Stride
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> xstride{}; 
    }
    namespace LcdcBasecfg3{    ///<Base Layer Configuration Register 3
        using Addr = Register::Address<0xf8038078,0xff000000,0,unsigned>;
        ///Blue Default
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bdef{}; 
        ///Green Default
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gdef{}; 
        ///Red Default
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rdef{}; 
    }
    namespace LcdcBasecfg4{    ///<Base Layer Configuration Register 4
        using Addr = Register::Address<0xf803807c,0xfffffcff,0,unsigned>;
        ///Use DMA Data Path
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Use Replication logic to expand RGB color to 24 bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rep{}; 
    }
    namespace LcdcBaseclut0{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038400,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut1{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038404,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut2{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038408,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut3{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803840c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut4{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038410,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut5{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038414,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut6{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038418,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut7{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803841c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut8{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038420,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut9{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038424,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut10{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038428,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut11{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803842c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut12{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038430,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut13{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038434,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut14{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038438,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut15{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803843c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut16{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038440,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut17{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038444,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut18{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038448,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut19{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803844c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut20{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038450,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut21{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038454,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut22{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038458,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut23{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803845c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut24{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038460,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut25{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038464,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut26{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038468,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut27{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803846c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut28{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038470,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut29{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038474,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut30{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038478,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut31{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803847c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut32{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038480,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut33{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038484,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut34{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038488,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut35{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803848c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut36{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038490,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut37{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038494,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut38{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038498,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut39{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803849c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut40{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384a0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut41{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384a4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut42{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384a8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut43{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384ac,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut44{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384b0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut45{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384b4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut46{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384b8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut47{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384bc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut48{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384c0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut49{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384c4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut50{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384c8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut51{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384cc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut52{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384d0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut53{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384d4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut54{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384d8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut55{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384dc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut56{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384e0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut57{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384e4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut58{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384e8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut59{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384ec,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut60{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384f0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut61{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384f4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut62{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384f8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut63{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384fc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut64{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038500,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut65{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038504,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut66{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038508,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut67{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803850c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut68{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038510,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut69{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038514,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut70{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038518,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut71{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803851c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut72{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038520,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut73{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038524,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut74{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038528,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut75{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803852c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut76{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038530,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut77{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038534,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut78{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038538,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut79{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803853c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut80{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038540,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut81{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038544,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut82{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038548,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut83{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803854c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut84{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038550,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut85{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038554,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut86{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038558,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut87{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803855c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut88{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038560,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut89{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038564,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut90{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038568,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut91{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803856c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut92{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038570,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut93{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038574,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut94{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038578,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut95{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803857c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut96{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038580,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut97{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038584,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut98{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038588,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut99{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803858c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut100{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038590,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut101{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038594,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut102{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038598,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut103{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803859c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut104{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385a0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut105{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385a4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut106{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385a8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut107{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385ac,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut108{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385b0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut109{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385b4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut110{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385b8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut111{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385bc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut112{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385c0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut113{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385c4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut114{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385c8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut115{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385cc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut116{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385d0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut117{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385d4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut118{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385d8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut119{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385dc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut120{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385e0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut121{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385e4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut122{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385e8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut123{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385ec,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut124{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385f0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut125{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385f4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut126{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385f8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut127{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385fc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut128{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038600,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut129{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038604,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut130{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038608,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut131{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803860c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut132{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038610,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut133{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038614,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut134{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038618,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut135{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803861c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut136{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038620,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut137{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038624,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut138{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038628,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut139{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803862c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut140{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038630,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut141{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038634,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut142{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038638,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut143{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803863c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut144{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038640,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut145{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038644,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut146{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038648,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut147{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803864c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut148{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038650,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut149{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038654,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut150{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038658,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut151{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803865c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut152{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038660,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut153{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038664,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut154{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038668,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut155{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803866c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut156{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038670,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut157{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038674,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut158{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038678,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut159{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803867c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut160{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038680,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut161{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038684,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut162{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038688,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut163{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803868c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut164{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038690,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut165{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038694,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut166{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038698,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut167{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803869c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut168{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386a0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut169{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386a4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut170{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386a8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut171{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386ac,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut172{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386b0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut173{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386b4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut174{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386b8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut175{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386bc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut176{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386c0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut177{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386c4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut178{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386c8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut179{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386cc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut180{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386d0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut181{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386d4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut182{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386d8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut183{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386dc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut184{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386e0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut185{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386e4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut186{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386e8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut187{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386ec,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut188{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386f0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut189{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386f4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut190{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386f8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut191{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386fc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut192{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038700,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut193{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038704,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut194{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038708,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut195{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803870c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut196{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038710,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut197{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038714,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut198{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038718,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut199{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803871c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut200{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038720,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut201{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038724,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut202{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038728,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut203{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803872c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut204{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038730,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut205{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038734,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut206{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038738,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut207{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803873c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut208{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038740,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut209{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038744,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut210{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038748,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut211{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803874c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut212{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038750,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut213{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038754,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut214{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038758,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut215{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803875c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut216{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038760,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut217{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038764,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut218{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038768,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut219{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803876c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut220{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038770,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut221{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038774,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut222{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038778,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut223{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803877c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut224{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038780,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut225{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038784,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut226{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038788,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut227{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803878c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut228{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038790,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut229{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038794,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut230{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038798,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut231{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803879c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut232{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387a0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut233{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387a4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut234{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387a8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut235{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387ac,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut236{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387b0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut237{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387b4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut238{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387b8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut239{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387bc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut240{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387c0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut241{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387c4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut242{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387c8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut243{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387cc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut244{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387d0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut245{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387d4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut246{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387d8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut247{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387dc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut248{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387e0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut249{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387e4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut250{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387e8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut251{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387ec,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut252{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387f0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut253{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387f4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut254{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387f8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut255{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387fc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcAddrsize{    ///<Address Size Register
        using Addr = Register::Address<0xf8039fec,0xffffffff,0,unsigned>;
    }
    namespace LcdcIpname0{    ///<IP Name1 Register
        using Addr = Register::Address<0xf8039ff0,0xffffffff,0,unsigned>;
    }
    namespace LcdcIpname1{    ///<IP Name1 Register
        using Addr = Register::Address<0xf8039ff4,0xffffffff,0,unsigned>;
    }
    namespace LcdcFeatures{    ///<Features Register
        using Addr = Register::Address<0xf8039ff8,0xffffffff,0,unsigned>;
    }
    namespace LcdcVersion{    ///<Version Register
        using Addr = Register::Address<0xf8039ffc,0xffffffff,0,unsigned>;
    }
}
