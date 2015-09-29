#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//LCD Controller
    namespace LcdcLcdcfg0{    ///<LCD Controller Configuration Register 0
        using Addr = Register::Address<0xf8038000,0xff00e4f2,0,unsigned>;
        ///LCD Controller Clock Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clkpol{}; 
        ///LCD Controller Clock Source Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clksel{}; 
        ///LCD Controller PWM Clock Source Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clkpwmsel{}; 
        ///Clock Gating Disable Control for the Base Layer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cgdisbase{}; 
        ///Clock Gating Disable Control for the Overlay 1 Layer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cgdisovr1{}; 
        ///Clock Gating Disable Control for the High End Overlay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cgdisheo{}; 
        ///Clock Gating Disable Control for the Hardware Cursor Layer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cgdishcr{}; 
        ///LCD Controller Clock Divider
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clkdiv{}; 
    }
    namespace LcdcLcdcfg1{    ///<LCD Controller Configuration Register 1
        using Addr = Register::Address<0xf8038004,0xffc0ffc0,0,unsigned>;
        ///Horizontal Synchronization Pulse Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> hspw{}; 
        ///Vertical Synchronization Pulse Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> vspw{}; 
    }
    namespace LcdcLcdcfg2{    ///<LCD Controller Configuration Register 2
        using Addr = Register::Address<0xf8038008,0xffc0ffc0,0,unsigned>;
        ///Vertical Front Porch Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> vfpw{}; 
        ///Vertical Back Porch Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> vbpw{}; 
    }
    namespace LcdcLcdcfg3{    ///<LCD Controller Configuration Register 3
        using Addr = Register::Address<0xf803800c,0xff00ff00,0,unsigned>;
        ///Horizontal Front Porch Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> hfpw{}; 
        ///Horizontal Back Porch Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hbpw{}; 
    }
    namespace LcdcLcdcfg4{    ///<LCD Controller Configuration Register 4
        using Addr = Register::Address<0xf8038010,0xf800f800,0,unsigned>;
        ///Number of Pixels Per Line
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> ppl{}; 
        ///Number of Active Rows Per Frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> rpf{}; 
    }
    namespace LcdcLcdcfg5{    ///<LCD Controller Configuration Register 5
        using Addr = Register::Address<0xf8038014,0xffe0cc20,0,unsigned>;
        ///Horizontal Synchronization Pulse Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hspol{}; 
        ///Vertical Synchronization Pulse Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vspol{}; 
        ///Vertical Synchronization Pulse Start
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> vspdlys{}; 
        ///Vertical Synchronization Pulse End
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vspdlye{}; 
        ///Display Signal Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> disppol{}; 
        ///LCD Controller Dithering
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dither{}; 
        ///LCD Controller Display Power Signal Synchronization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dispdly{}; 
        ///LCD Controller Output Mode
        enum class modeVal {
            output12bpp=0x00000000,     ///<LCD output mode is set to 12 bits per pixel
            output16bpp=0x00000001,     ///<LCD output mode is set to 16 bits per pixel
            output18bpp=0x00000002,     ///<LCD output mode is set to 18 bits per pixel
            output24bpp=0x00000003,     ///<LCD output mode is set to 24 bits per pixel
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::output12bpp> output12bpp{};
            constexpr MPL::Value<modeVal,modeVal::output16bpp> output16bpp{};
            constexpr MPL::Value<modeVal,modeVal::output18bpp> output18bpp{};
            constexpr MPL::Value<modeVal,modeVal::output24bpp> output24bpp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,modeVal> mode{}; 
        ///LCD Controller Vertical Synchronization Pulse Setup Configuration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> vspsu{}; 
        ///LCD Controller Vertical Synchronization Pulse Hold Configuration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> vspho{}; 
        ///LCD DISPLAY Guard Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> guardtime{}; 
    }
    namespace LcdcLcdcfg6{    ///<LCD Controller Configuration Register 6
        using Addr = Register::Address<0xf8038018,0xffff00e8,0,unsigned>;
        ///PWM Clock Prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> pwmps{}; 
        ///LCD Controller PWM Signal Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pwmpol{}; 
        ///LCD Controller PWM Compare Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pwmcval{}; 
    }
    namespace LcdcLcden{    ///<LCD Controller Enable Register
        using Addr = Register::Address<0xf8038020,0xfffffff0,0,unsigned>;
        ///LCD Controller Pixel Clock Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clken{}; 
        ///LCD Controller Horizontal and Vertical Synchronization Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> syncen{}; 
        ///LCD Controller DISP Signal Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dispen{}; 
        ///LCD Controller Pulse Width Modulation Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pwmen{}; 
    }
    namespace LcdcLcddis{    ///<LCD Controller Disable Register
        using Addr = Register::Address<0xf8038024,0xfffff0f0,0,unsigned>;
        ///LCD Controller Pixel Clock Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clkdis{}; 
        ///LCD Controller Horizontal and Vertical Synchronization Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> syncdis{}; 
        ///LCD Controller DISP Signal Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dispdis{}; 
        ///LCD Controller Pulse Width Modulation Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pwmdis{}; 
        ///LCD Controller Clock Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clkrst{}; 
        ///LCD Controller Horizontal and Vertical Synchronization Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> syncrst{}; 
        ///LCD Controller DISP Signal Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> disprst{}; 
        ///LCD Controller PWM Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pwmrst{}; 
    }
    namespace LcdcLcdsr{    ///<LCD Controller Status Register
        using Addr = Register::Address<0xf8038028,0xffffffe0,0,unsigned>;
        ///Clock Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clksts{}; 
        ///LCD Controller Synchronization status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lcdsts{}; 
        ///LCD Controller DISP Signal Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dispsts{}; 
        ///LCD Controller PWM Signal Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pwmsts{}; 
        ///Synchronization In Progress
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sipsts{}; 
    }
    namespace LcdcLcdier{    ///<LCD Controller Interrupt Enable Register
        using Addr = Register::Address<0xf803802c,0xfffff0e8,0,unsigned>;
        ///Start of Frame Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sofie{}; 
        ///LCD Disable Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> disie{}; 
        ///Power UP/Down Sequence Terminated Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dispie{}; 
        ///Output FIFO Error Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fifoerrie{}; 
        ///Base Layer Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> baseie{}; 
        ///Overlay 1 Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ovr1ie{}; 
        ///High End Overlay Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> heoie{}; 
        ///Hardware Cursor Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hcrie{}; 
    }
    namespace LcdcLcdidr{    ///<LCD Controller Interrupt Disable Register
        using Addr = Register::Address<0xf8038030,0xfffff0e8,0,unsigned>;
        ///Start of Frame Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sofid{}; 
        ///LCD Disable Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> disid{}; 
        ///Power UP/Down Sequence Terminated Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dispid{}; 
        ///Output FIFO Error Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fifoerrid{}; 
        ///Base Layer Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> baseid{}; 
        ///Overlay 1 Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ovr1id{}; 
        ///High End Overlay Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> heoid{}; 
        ///Hardware Cursor Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hcrid{}; 
    }
    namespace LcdcLcdimr{    ///<LCD Controller Interrupt Mask Register
        using Addr = Register::Address<0xf8038034,0xfffff0e8,0,unsigned>;
        ///Start of Frame Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sofim{}; 
        ///LCD Disable Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> disim{}; 
        ///Power UP/Down Sequence Terminated Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dispim{}; 
        ///Output FIFO Error Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fifoerrim{}; 
        ///Base Layer Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> baseim{}; 
        ///Overlay 1 Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ovr1im{}; 
        ///High End Overlay Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> heoim{}; 
        ///Hardware Cursor Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hcrim{}; 
    }
    namespace LcdcLcdisr{    ///<LCD Controller Interrupt Status Register
        using Addr = Register::Address<0xf8038038,0xfffff0e8,0,unsigned>;
        ///Start of Frame Interrupt Status Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sof{}; 
        ///LCD Disable Interrupt Status Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dis{}; 
        ///Power-up/Power-down Sequence Terminated Interrupt Status Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> disp{}; 
        ///Output FIFO Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fifoerr{}; 
        ///Base Layer Raw Interrupt Status Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> base{}; 
        ///Overlay 1 Raw Interrupt Status Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ovr1{}; 
        ///High End Overlay Raw Interrupt Status Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> heo{}; 
        ///Hardware Cursor Raw Interrupt Status Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hcr{}; 
    }
    namespace LcdcBasecher{    ///<Base Layer Channel Enable Register
        using Addr = Register::Address<0xf8038040,0xfffffff8,0,unsigned>;
        ///Channel Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Update Overlay Attributes Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> updateen{}; 
        ///Add Head Pointer Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> a2qen{}; 
    }
    namespace LcdcBasechdr{    ///<Base Layer Channel Disable Register
        using Addr = Register::Address<0xf8038044,0xfffffefe,0,unsigned>;
        ///Channel Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel Reset Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chrst{}; 
    }
    namespace LcdcBasechsr{    ///<Base Layer Channel Status Register
        using Addr = Register::Address<0xf8038048,0xfffffff8,0,unsigned>;
        ///Channel Status Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chsr{}; 
        ///Update Overlay Attributes In Progress
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> updatesr{}; 
        ///Add To Queue Pending Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> a2qsr{}; 
    }
    namespace LcdcBaseier{    ///<Base Layer Interrupt Enable Register
        using Addr = Register::Address<0xf803804c,0xffffff83,0,unsigned>;
        ///End of DMA Transfer Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Descriptor Loaded Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscr{}; 
        ///Head Descriptor Loaded Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> add{}; 
        ///End of List Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> done{}; 
        ///Overflow Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
    }
    namespace LcdcBaseidr{    ///<Base Layer Interrupt Disabled Register
        using Addr = Register::Address<0xf8038050,0xffffff83,0,unsigned>;
        ///End of DMA Transfer Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Descriptor Loaded Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscr{}; 
        ///Head Descriptor Loaded Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> add{}; 
        ///End of List Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> done{}; 
        ///Overflow Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
    }
    namespace LcdcBaseimr{    ///<Base Layer Interrupt Mask Register
        using Addr = Register::Address<0xf8038054,0xffffff83,0,unsigned>;
        ///End of DMA Transfer Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Descriptor Loaded Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscr{}; 
        ///Head Descriptor Loaded Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> add{}; 
        ///End of List Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> done{}; 
        ///Overflow Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
    }
    namespace LcdcBaseisr{    ///<Base Layer Interrupt status Register
        using Addr = Register::Address<0xf8038058,0xffffff83,0,unsigned>;
        ///End of DMA Transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dma{}; 
        ///DMA Descriptor Loaded
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscr{}; 
        ///Head Descriptor Loaded
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> add{}; 
        ///End of List Detected
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> done{}; 
        ///Overflow Detected
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
    }
    namespace LcdcBasehead{    ///<Base Layer DMA Head Register
        using Addr = Register::Address<0xf803805c,0x00000003,0,unsigned>;
        ///DMA Head Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> head{}; 
    }
    namespace LcdcBaseaddr{    ///<Base Layer DMA Address Register
        using Addr = Register::Address<0xf8038060,0x00000000,0,unsigned>;
        ///DMA Transfer Start Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace LcdcBasectrl{    ///<Base Layer DMA Control Register
        using Addr = Register::Address<0xf8038064,0xffffffc0,0,unsigned>;
        ///Transfer Descriptor Fetch Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dfetch{}; 
        ///Lookup Table Fetch Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lfetch{}; 
        ///End of DMA Transfer Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmaien{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscrien{}; 
        ///Add Head Descriptor to Queue Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> addien{}; 
        ///End of List Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> doneien{}; 
    }
    namespace LcdcBasenext{    ///<Base Layer DMA Next Register
        using Addr = Register::Address<0xf8038068,0x00000000,0,unsigned>;
        ///DMA Descriptor Next Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> next{}; 
    }
    namespace LcdcBasecfg0{    ///<Base Layer Configuration Register 0
        using Addr = Register::Address<0xf803806c,0xfffffecf,0,unsigned>;
        ///AHB Burst Length
        enum class blenVal {
            ahbSingle=0x00000000,     ///<AHB Access is started as soon as there is enough space in the FIFO to store one 32-bit data. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts can be used. INCR is used for a burst of 2 and 3 beats.
            ahbIncr4=0x00000001,     ///<AHB Access is started as soon as there is enough space in the FIFO to store a total amount of four 32-bit data. An AHB INCR4 Burst is preferred. SINGLE, INCR and INCR4 bursts can be used. INCR is used for a burst of 2 and 3 beats.
            ahbIncr8=0x00000002,     ///<AHB Access is started as soon as there is enough space in the FIFO to store a total amount of eight 32-bit data. An AHB INCR8 Burst is preferred. SINGLE, INCR, INCR4 and INCR8 bursts can be used. INCR is used for a burst of 2 and 3 beats.
            ahbIncr16=0x00000003,     ///<AHB Access is started as soon as there is enough space in the FIFO to store a total amount of sixteen 32-bit data. An AHB INCR16 Burst is preferred. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts can be used. INCR is used for a burst of 2 and 3 beats.
        };
        namespace blenValC{
            constexpr MPL::Value<blenVal,blenVal::ahbSingle> ahbSingle{};
            constexpr MPL::Value<blenVal,blenVal::ahbIncr4> ahbIncr4{};
            constexpr MPL::Value<blenVal,blenVal::ahbIncr8> ahbIncr8{};
            constexpr MPL::Value<blenVal,blenVal::ahbIncr16> ahbIncr16{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,blenVal> blen{}; 
        ///Defined Length Burst Only For Channel Bus Transaction.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dlbo{}; 
    }
    namespace LcdcBasecfg1{    ///<Base Layer Configuration Register 1
        using Addr = Register::Address<0xf8038070,0xfffffc0e,0,unsigned>;
        ///Color Lookup Table Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cluten{}; 
        ///RGB Input Mode Selection
        enum class rgbmodeVal {
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
        namespace rgbmodeValC{
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v12bppRgb444> v12bppRgb444{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v16bppArgb4444> v16bppArgb4444{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v16bppRgba4444> v16bppRgba4444{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v16bppRgb565> v16bppRgb565{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v16bppTrgb1555> v16bppTrgb1555{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v18bppRgb666> v18bppRgb666{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v18bppRgb666Packed> v18bppRgb666Packed{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v19bppTrgb1666> v19bppTrgb1666{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v19bppTrgbPacked> v19bppTrgbPacked{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v24bppRgb888> v24bppRgb888{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v24bppRgb888Packed> v24bppRgb888Packed{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v25bppTrgb1888> v25bppTrgb1888{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v32bppArgb8888> v32bppArgb8888{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v32bppRgba8888> v32bppRgba8888{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,rgbmodeVal> rgbmode{}; 
        ///Color Lookup Table Input Mode Selection
        enum class clutmodeVal {
            v1bpp=0x00000000,     ///<color lookup table mode set to 1 bit per pixel
            v2bpp=0x00000001,     ///<color lookup table mode set to 2 bits per pixel
            v4bpp=0x00000002,     ///<color lookup table mode set to 4 bits per pixel
            v8bpp=0x00000003,     ///<color lookup table mode set to 8 bits per pixel
        };
        namespace clutmodeValC{
            constexpr MPL::Value<clutmodeVal,clutmodeVal::v1bpp> v1bpp{};
            constexpr MPL::Value<clutmodeVal,clutmodeVal::v2bpp> v2bpp{};
            constexpr MPL::Value<clutmodeVal,clutmodeVal::v4bpp> v4bpp{};
            constexpr MPL::Value<clutmodeVal,clutmodeVal::v8bpp> v8bpp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,clutmodeVal> clutmode{}; 
    }
    namespace LcdcBasecfg2{    ///<Base Layer Configuration Register 2
        using Addr = Register::Address<0xf8038074,0x00000000,0,unsigned>;
        ///Horizontal Stride
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> xstride{}; 
    }
    namespace LcdcBasecfg3{    ///<Base Layer Configuration Register 3
        using Addr = Register::Address<0xf8038078,0xff000000,0,unsigned>;
        ///Blue Default
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bdef{}; 
        ///Green Default
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gdef{}; 
        ///Red Default
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rdef{}; 
    }
    namespace LcdcBasecfg4{    ///<Base Layer Configuration Register 4
        using Addr = Register::Address<0xf803807c,0xfffffcff,0,unsigned>;
        ///Use DMA Data Path
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Use Replication logic to expand RGB color to 24 bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rep{}; 
    }
    namespace LcdcOvrcher1{    ///<Overlay 1 Channel Enable Register
        using Addr = Register::Address<0xf8038100,0xfffffff8,0,unsigned>;
        ///Channel Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Update Overlay Attributes Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> updateen{}; 
        ///Add Head Pointer Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> a2qen{}; 
    }
    namespace LcdcOvrchdr1{    ///<Overlay 1 Channel Disable Register
        using Addr = Register::Address<0xf8038104,0xfffffefe,0,unsigned>;
        ///Channel Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel Reset Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chrst{}; 
    }
    namespace LcdcOvrchsr1{    ///<Overlay 1 Channel Status Register
        using Addr = Register::Address<0xf8038108,0xfffffff8,0,unsigned>;
        ///Channel Status Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chsr{}; 
        ///Update Overlay Attributes In Progress
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> updatesr{}; 
        ///Add to Queue Pending Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> a2qsr{}; 
    }
    namespace LcdcOvrier1{    ///<Overlay 1 Interrupt Enable Register
        using Addr = Register::Address<0xf803810c,0xffffff83,0,unsigned>;
        ///End of DMA Transfer Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Descriptor Loaded Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscr{}; 
        ///Head Descriptor Loaded Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> add{}; 
        ///End of List Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> done{}; 
        ///Overflow Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
    }
    namespace LcdcOvridr1{    ///<Overlay 1 Interrupt Disable Register
        using Addr = Register::Address<0xf8038110,0xffffff83,0,unsigned>;
        ///End of DMA Transfer Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Descriptor Loaded Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscr{}; 
        ///Head Descriptor Loaded Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> add{}; 
        ///End of List Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> done{}; 
        ///Overflow Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
    }
    namespace LcdcOvrimr1{    ///<Overlay 1 Interrupt Mask Register
        using Addr = Register::Address<0xf8038114,0xffffff83,0,unsigned>;
        ///End of DMA Transfer Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Descriptor Loaded Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscr{}; 
        ///Head Descriptor Loaded Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> add{}; 
        ///End of List Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> done{}; 
        ///Overflow Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
    }
    namespace LcdcOvrisr1{    ///<Overlay 1 Interrupt Status Register
        using Addr = Register::Address<0xf8038118,0xffffff83,0,unsigned>;
        ///End of DMA Transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dma{}; 
        ///DMA Descriptor Loaded
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscr{}; 
        ///Head Descriptor Loaded
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> add{}; 
        ///End of List Detected Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> done{}; 
        ///Overflow Detected
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
    }
    namespace LcdcOvrhead1{    ///<Overlay 1 DMA Head Register
        using Addr = Register::Address<0xf803811c,0x00000003,0,unsigned>;
        ///DMA Head Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> head{}; 
    }
    namespace LcdcOvraddr1{    ///<Overlay 1 DMA Address Register
        using Addr = Register::Address<0xf8038120,0x00000000,0,unsigned>;
        ///DMA Transfer Overlay 1 Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace LcdcOvrctrl1{    ///<Overlay1 DMA Control Register
        using Addr = Register::Address<0xf8038124,0xffffffc0,0,unsigned>;
        ///Transfer Descriptor Fetch Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dfetch{}; 
        ///Lookup Table Fetch Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lfetch{}; 
        ///End of DMA Transfer Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmaien{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscrien{}; 
        ///Add Head Descriptor to Queue Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> addien{}; 
        ///End of List Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> doneien{}; 
    }
    namespace LcdcOvrnext1{    ///<Overlay1 DMA Next Register
        using Addr = Register::Address<0xf8038128,0x00000000,0,unsigned>;
        ///DMA Descriptor Next Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> next{}; 
    }
    namespace LcdcOvr1cfg0{    ///<Overlay 1 Configuration 0 Register
        using Addr = Register::Address<0xf803812c,0xffffcecf,0,unsigned>;
        ///AHB Burst Length
        enum class blenVal {
            ahbSingle=0x00000000,     ///<AHB Access is started as soon as there is enough space in the FIFO to store one 32-bit data. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts are preferred. INCR is used for a burst of 2 and 3 beats.
            ahbIncr4=0x00000001,     ///<AHB Access is started as soon as there is enough space in the FIFO to store a total amount of four 32-bit data. An AHB INCR4 Burst is preferred. SINGLE, INCR and INCR4 bursts can be used. INCR is used for a burst of 2 and 3 beats.
            ahbIncr8=0x00000002,     ///<AHB Access is started as soon as there is enough space in the FIFO to store a total amount of eight 32-bit data. An AHB INCR8 Burst is preferred. SINGLE, INCR, INCR4 and INCR8 bursts can be used. INCR is used for a burst of 2 and 3 beats.
            ahbIncr16=0x00000003,     ///<AHB Access is started as soon as there is enough space in the FIFO to store a total amount of sixteen 32-bit data. An AHB INCR16 Burst is preferred. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts can be used. INCR is used for a burst of 2 and 3 beats.
        };
        namespace blenValC{
            constexpr MPL::Value<blenVal,blenVal::ahbSingle> ahbSingle{};
            constexpr MPL::Value<blenVal,blenVal::ahbIncr4> ahbIncr4{};
            constexpr MPL::Value<blenVal,blenVal::ahbIncr8> ahbIncr8{};
            constexpr MPL::Value<blenVal,blenVal::ahbIncr16> ahbIncr16{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,blenVal> blen{}; 
        ///Defined Length Burst Only for Channel Bus Transaction.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dlbo{}; 
        ///Hardware Rotation Optimization Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rotdis{}; 
        ///Hardware Rotation Lock Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lockdis{}; 
    }
    namespace LcdcOvr1cfg1{    ///<Overlay 1 Configuration 1 Register
        using Addr = Register::Address<0xf8038130,0xfffffc0e,0,unsigned>;
        ///Color Lookup Table Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cluten{}; 
        ///RGB Input Mode Selection
        enum class rgbmodeVal {
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
        namespace rgbmodeValC{
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v12bppRgb444> v12bppRgb444{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v16bppArgb4444> v16bppArgb4444{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v16bppRgba4444> v16bppRgba4444{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v16bppRgb565> v16bppRgb565{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v16bppTrgb1555> v16bppTrgb1555{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v18bppRgb666> v18bppRgb666{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v18bppRgb666Packed> v18bppRgb666Packed{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v19bppTrgb1666> v19bppTrgb1666{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v19bppTrgbPacked> v19bppTrgbPacked{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v24bppRgb888> v24bppRgb888{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v24bppRgb888Packed> v24bppRgb888Packed{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v25bppTrgb1888> v25bppTrgb1888{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v32bppArgb8888> v32bppArgb8888{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v32bppRgba8888> v32bppRgba8888{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,rgbmodeVal> rgbmode{}; 
        ///Color Lookup table input mode selection
        enum class clutmodeVal {
            v1bpp=0x00000000,     ///<color lookup table mode set to 1 bit per pixel
            v2bpp=0x00000001,     ///<color lookup table mode set to 2 bits per pixel
            v4bpp=0x00000002,     ///<color lookup table mode set to 4 bits per pixel
            v8bpp=0x00000003,     ///<color lookup table mode set to 8 bits per pixel
        };
        namespace clutmodeValC{
            constexpr MPL::Value<clutmodeVal,clutmodeVal::v1bpp> v1bpp{};
            constexpr MPL::Value<clutmodeVal,clutmodeVal::v2bpp> v2bpp{};
            constexpr MPL::Value<clutmodeVal,clutmodeVal::v4bpp> v4bpp{};
            constexpr MPL::Value<clutmodeVal,clutmodeVal::v8bpp> v8bpp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,clutmodeVal> clutmode{}; 
    }
    namespace LcdcOvr1cfg2{    ///<Overlay 1 Configuration 2 Register
        using Addr = Register::Address<0xf8038134,0xf800f800,0,unsigned>;
        ///Horizontal Window Position
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> xpos{}; 
        ///Vertical Window Position
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> ypos{}; 
    }
    namespace LcdcOvr1cfg3{    ///<Overlay 1 Configuration 3 Register
        using Addr = Register::Address<0xf8038138,0xf800f800,0,unsigned>;
        ///Horizontal Window Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> xsize{}; 
        ///Vertical Window Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> ysize{}; 
    }
    namespace LcdcOvr1cfg4{    ///<Overlay 1 Configuration 4 Register
        using Addr = Register::Address<0xf803813c,0x00000000,0,unsigned>;
        ///Horizontal Stride
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> xstride{}; 
    }
    namespace LcdcOvr1cfg5{    ///<Overlay 1 Configuration 5 Register
        using Addr = Register::Address<0xf8038140,0x00000000,0,unsigned>;
        ///Pixel Stride
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pstride{}; 
    }
    namespace LcdcOvr1cfg6{    ///<Overlay 1 Configuration 6 Register
        using Addr = Register::Address<0xf8038144,0xff000000,0,unsigned>;
        ///Blue Default
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bdef{}; 
        ///Green Default
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gdef{}; 
        ///Red Default
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rdef{}; 
    }
    namespace LcdcOvr1cfg7{    ///<Overlay 1 Configuration 7 Register
        using Addr = Register::Address<0xf8038148,0xff000000,0,unsigned>;
        ///Blue Color Component Chroma Key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bkey{}; 
        ///Green Color Component Chroma Key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gkey{}; 
        ///Red Color Component Chroma Key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rkey{}; 
    }
    namespace LcdcOvr1cfg8{    ///<Overlay 1 Configuration 8 Register
        using Addr = Register::Address<0xf803814c,0xff000000,0,unsigned>;
        ///Blue Color Component Chroma Key Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bmask{}; 
        ///Green Color Component Chroma Key Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gmask{}; 
        ///Red Color Component Chroma Key Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rmask{}; 
    }
    namespace LcdcOvr1cfg9{    ///<Overlay 1 Configuration 9 Register
        using Addr = Register::Address<0xf8038150,0xff00f800,0,unsigned>;
        ///Blender Chroma Key Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crkey{}; 
        ///Blender Inverted Blender Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inv{}; 
        ///Blender Iterated Color Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> iter2bl{}; 
        ///Blender Use Iterated Color
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iter{}; 
        ///Blender Reverse Alpha
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> revalpha{}; 
        ///Blender Global Alpha Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gaen{}; 
        ///Blender Local Alpha Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> laen{}; 
        ///Blender Overlay Layer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Blender DMA Layer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Use Replication logic to expand RGB color to 24 bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rep{}; 
        ///Destination Chroma Keying
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dstkey{}; 
        ///Blender Global Alpha
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ga{}; 
    }
    namespace LcdcHeocher{    ///<High End Overlay Channel Enable Register
        using Addr = Register::Address<0xf8038280,0xfffffff8,0,unsigned>;
        ///Channel Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Update Overlay Attributes Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> updateen{}; 
        ///Add Head Pointer Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> a2qen{}; 
    }
    namespace LcdcHeochdr{    ///<High End Overlay Channel Disable Register
        using Addr = Register::Address<0xf8038284,0xfffffefe,0,unsigned>;
        ///Channel Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel Reset Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chrst{}; 
    }
    namespace LcdcHeochsr{    ///<High End Overlay Channel Status Register
        using Addr = Register::Address<0xf8038288,0xfffffff8,0,unsigned>;
        ///Channel Status Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chsr{}; 
        ///Update Overlay Attributes In Progress
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> updatesr{}; 
        ///Add To Queue Pending Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> a2qsr{}; 
    }
    namespace LcdcHeoier{    ///<High End Overlay Interrupt Enable Register
        using Addr = Register::Address<0xf803828c,0xff838383,0,unsigned>;
        ///End of DMA Transfer Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Descriptor Loaded Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscr{}; 
        ///Head Descriptor Loaded Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> add{}; 
        ///End of List Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> done{}; 
        ///Overflow Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///End of DMA Transfer for U or UV Chrominance Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> udma{}; 
        ///Descriptor Loaded for U or UV Chrominance Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> udscr{}; 
        ///Head Descriptor Loaded for U or UV Chrominance Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> uadd{}; 
        ///End of List for U or UV Chrominance Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> udone{}; 
        ///Overflow for U or UV Chrominance Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> uovr{}; 
        ///End of DMA for V Chrominance Transfer Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> vdma{}; 
        ///Descriptor Loaded for V Chrominance Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> vdscr{}; 
        ///Head Descriptor Loaded for V Chrominance Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> vadd{}; 
        ///End of List for V Chrominance Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> vdone{}; 
        ///Overflow for V Chrominance Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> vovr{}; 
    }
    namespace LcdcHeoidr{    ///<High End Overlay Interrupt Disable Register
        using Addr = Register::Address<0xf8038290,0xff838383,0,unsigned>;
        ///End of DMA Transfer Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Descriptor Loaded Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscr{}; 
        ///Head Descriptor Loaded Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> add{}; 
        ///End of List Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> done{}; 
        ///Overflow Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///End of DMA Transfer for U or UV Chrominance Component Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> udma{}; 
        ///Descriptor Loaded for U or UV Chrominance Component Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> udscr{}; 
        ///Head Descriptor Loaded for U or UV Chrominance Component Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> uadd{}; 
        ///End of List Interrupt for U or UV Chrominance Component Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> udone{}; 
        ///Overflow Interrupt for U or UV Chrominance Component Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> uovr{}; 
        ///End of DMA Transfer for V Chrominance Component Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> vdma{}; 
        ///Descriptor Loaded for V Chrominance Component Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> vdscr{}; 
        ///Head Descriptor Loaded for V Chrominance Component Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> vadd{}; 
        ///End of List for V Chrominance Component Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> vdone{}; 
        ///Overflow for V Chrominance Component Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> vovr{}; 
    }
    namespace LcdcHeoimr{    ///<High End Overlay Interrupt Mask Register
        using Addr = Register::Address<0xf8038294,0xff838383,0,unsigned>;
        ///End of DMA Transfer Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Descriptor Loaded Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscr{}; 
        ///Head Descriptor Loaded Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> add{}; 
        ///End of List Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> done{}; 
        ///Overflow Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///End of DMA Transfer for U or UV Chrominance Component Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> udma{}; 
        ///Descriptor Loaded for U or UV Chrominance Component Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> udscr{}; 
        ///Head Descriptor Loaded for U or UV Chrominance Component Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> uadd{}; 
        ///End of List for U or UV Chrominance Component Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> udone{}; 
        ///Overflow for U Chrominance Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> uovr{}; 
        ///End of DMA Transfer for V Chrominance Component Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> vdma{}; 
        ///Descriptor Loaded for V Chrominance Component Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> vdscr{}; 
        ///Head Descriptor Loaded for V Chrominance Component Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> vadd{}; 
        ///End of List for V Chrominance Component Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> vdone{}; 
        ///Overflow for V Chrominance Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> vovr{}; 
    }
    namespace LcdcHeoisr{    ///<High End Overlay Interrupt Status Register
        using Addr = Register::Address<0xf8038298,0xff838383,0,unsigned>;
        ///End of DMA Transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dma{}; 
        ///DMA Descriptor Loaded
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscr{}; 
        ///Head Descriptor Loaded
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> add{}; 
        ///End of List Detected
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> done{}; 
        ///Overflow Detected
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///End of DMA Transfer for U component
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> udma{}; 
        ///DMA Descriptor Loaded for U component
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> udscr{}; 
        ///Head Descriptor Loaded for U component
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> uadd{}; 
        ///End of List Detected for U component
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> udone{}; 
        ///Overflow Detected for U component
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> uovr{}; 
        ///End of DMA Transfer for V component
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> vdma{}; 
        ///DMA Descriptor Loaded for V component
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> vdscr{}; 
        ///Head Descriptor Loaded for V component
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> vadd{}; 
        ///End of List Detected for V component
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> vdone{}; 
        ///Overflow Detected for V component
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> vovr{}; 
    }
    namespace LcdcHeohead{    ///<High End Overlay DMA Head Register
        using Addr = Register::Address<0xf803829c,0x00000003,0,unsigned>;
        ///DMA Head Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> head{}; 
    }
    namespace LcdcHeoaddr{    ///<High End Overlay DMA Address Register
        using Addr = Register::Address<0xf80382a0,0x00000000,0,unsigned>;
        ///DMA Transfer start Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace LcdcHeoctrl{    ///<High End Overlay DMA Control Register
        using Addr = Register::Address<0xf80382a4,0xffffffc0,0,unsigned>;
        ///Transfer Descriptor Fetch Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dfetch{}; 
        ///Lookup Table Fetch Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lfetch{}; 
        ///End of DMA Transfer Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmaien{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscrien{}; 
        ///Add Head Descriptor to Queue Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> addien{}; 
        ///End of List Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> doneien{}; 
    }
    namespace LcdcHeonext{    ///<High End Overlay DMA Next Register
        using Addr = Register::Address<0xf80382a8,0x00000000,0,unsigned>;
        ///DMA Descriptor Next Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> next{}; 
    }
    namespace LcdcHeouhead{    ///<High End Overlay U DMA Head Register
        using Addr = Register::Address<0xf80382ac,0x00000000,0,unsigned>;
        ///DMA Head Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uhead{}; 
    }
    namespace LcdcHeouaddr{    ///<High End Overlay U DMA Address Register
        using Addr = Register::Address<0xf80382b0,0x00000000,0,unsigned>;
        ///DMA Transfer Start Address for U or UV Chrominance
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uaddr{}; 
    }
    namespace LcdcHeouctrl{    ///<High End Overlay U DMA Control Register
        using Addr = Register::Address<0xf80382b4,0xffffffc2,0,unsigned>;
        ///Transfer Descriptor Fetch Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> udfetch{}; 
        ///End of DMA Transfer Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> udmaien{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> udscrien{}; 
        ///Add Head Descriptor to Queue Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uaddien{}; 
        ///End of List Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> udoneien{}; 
    }
    namespace LcdcHeounext{    ///<High End Overlay U DMA Next Register
        using Addr = Register::Address<0xf80382b8,0x00000000,0,unsigned>;
        ///DMA Descriptor Next Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> unext{}; 
    }
    namespace LcdcHeovhead{    ///<High End Overlay V DMA Head Register
        using Addr = Register::Address<0xf80382bc,0x00000000,0,unsigned>;
        ///DMA Head Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vhead{}; 
    }
    namespace LcdcHeovaddr{    ///<High End Overlay V DMA Address Register
        using Addr = Register::Address<0xf80382c0,0x00000000,0,unsigned>;
        ///DMA Transfer Start Address for V Chrominance
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vaddr{}; 
    }
    namespace LcdcHeovctrl{    ///<High End Overlay V DMA Control Register
        using Addr = Register::Address<0xf80382c4,0xffffffc2,0,unsigned>;
        ///Transfer Descriptor Fetch Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> vdfetch{}; 
        ///End of DMA Transfer Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> vdmaien{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vdscrien{}; 
        ///Add Head Descriptor to Queue Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> vaddien{}; 
        ///End of List Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> vdoneien{}; 
    }
    namespace LcdcHeovnext{    ///<High End Overlay VDMA Next Register
        using Addr = Register::Address<0xf80382c8,0x00000000,0,unsigned>;
        ///DMA Descriptor Next Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> vnext{}; 
    }
    namespace LcdcHeocfg0{    ///<High End Overlay Configuration Register 0
        using Addr = Register::Address<0xf80382cc,0xffffce0f,0,unsigned>;
        ///AHB Burst Length
        enum class blenVal {
            ahbSingle=0x00000000,     ///<AHB Access is started as soon as there is enough space in the FIFO to store one 32-bit data. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts can be used. INCR is used for a burst of 2 and 3 beats.
            ahbIncr4=0x00000001,     ///<AHB Access is started as soon as there is enough space in the FIFO to store a total amount of four 32-bit data. An AHB INCR4 Burst is preferred. SINGLE, INCR and INCR4 bursts can be used. INCR is used for a burst of 2 and 3 beats.
            ahbIncr8=0x00000002,     ///<AHB Access is started as soon as there is enough space in the FIFO to store a total amount of eight 32-bit data. An AHB INCR8 Burst is preferred. SINGLE, INCR, INCR4 and INCR8 bursts can be used. INCR is used for a burst of 2 and 3 beats.
            ahbIncr16=0x00000003,     ///<AHB Access is started as soon as there is enough space in the FIFO to store a total amount of sixteen 32-bit data. An AHB INCR16 Burst is preferred. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts can be used. INCR is used for a burst of 2 and 3 beats.
        };
        namespace blenValC{
            constexpr MPL::Value<blenVal,blenVal::ahbSingle> ahbSingle{};
            constexpr MPL::Value<blenVal,blenVal::ahbIncr4> ahbIncr4{};
            constexpr MPL::Value<blenVal,blenVal::ahbIncr8> ahbIncr8{};
            constexpr MPL::Value<blenVal,blenVal::ahbIncr16> ahbIncr16{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,blenVal> blen{}; 
        ///AHB Burst Length for U-V Channel
        enum class blenuvVal {
            ahbSingle=0x00000000,     ///<AHB Access is started as soon as there is enough space in the FIFO to store one data. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts can be used. INCR is used for a burst of 2 and 3 beats.
            ahbIncr4=0x00000001,     ///<AHB Access is started as soon as there is enough space in the FIFO to store a total amount of four 32-bit data. An AHB INCR4 Burst is preferred. SINGLE, INCR and INCR4 bursts can be used. INCR is used for a burst of 2 and 3 beats.
            ahbIncr8=0x00000002,     ///<AHB Access is started as soon as there is enough space in the FIFO to store a total amount of 8 data. An AHB INCR8 Burst is preferred. SINGLE, INCR, INCR4 and INCR8 bursts can be used. INCR is used for a burst of 2 and 3 beats.
            ahbIncr16=0x00000003,     ///<AHB Access is started as soon as there is enough space in the FIFO to store a total amount of sixteen 32-bit data. An AHB INCR16 Burst is preferred. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts can be used. INCR is used for a burst of 2 and 3 beats.
        };
        namespace blenuvValC{
            constexpr MPL::Value<blenuvVal,blenuvVal::ahbSingle> ahbSingle{};
            constexpr MPL::Value<blenuvVal,blenuvVal::ahbIncr4> ahbIncr4{};
            constexpr MPL::Value<blenuvVal,blenuvVal::ahbIncr8> ahbIncr8{};
            constexpr MPL::Value<blenuvVal,blenuvVal::ahbIncr16> ahbIncr16{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,blenuvVal> blenuv{}; 
        ///Defined Length Burst Only For Channel Bus Transaction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dlbo{}; 
        ///Hardware Rotation Optimization Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rotdis{}; 
        ///Hardware Rotation Lock Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lockdis{}; 
    }
    namespace LcdcHeocfg1{    ///<High End Overlay Configuration Register 1
        using Addr = Register::Address<0xf80382d0,0xfffc0c0c,0,unsigned>;
        ///Color Lookup Table Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cluten{}; 
        ///YUV Color Space Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> yuven{}; 
        ///RGB input mode selection
        enum class rgbmodeVal {
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
        namespace rgbmodeValC{
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v12bppRgb444> v12bppRgb444{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v16bppArgb4444> v16bppArgb4444{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v16bppRgba4444> v16bppRgba4444{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v16bppRgb565> v16bppRgb565{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v16bppTrgb1555> v16bppTrgb1555{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v18bppRgb666> v18bppRgb666{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v18bppRgb666Packed> v18bppRgb666Packed{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v19bppTrgb1666> v19bppTrgb1666{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v19bppTrgbPacked> v19bppTrgbPacked{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v24bppRgb888> v24bppRgb888{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v24bppRgb888Packed> v24bppRgb888Packed{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v25bppTrgb1888> v25bppTrgb1888{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v32bppArgb8888> v32bppArgb8888{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v32bppRgba8888> v32bppRgba8888{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,rgbmodeVal> rgbmode{}; 
        ///Color Lookup table input mode selection
        enum class clutmodeVal {
            v1bpp=0x00000000,     ///<color lookup table mode set to 1 bit per pixel
            v2bpp=0x00000001,     ///<color lookup table mode set to 2 bits per pixel
            v4bpp=0x00000002,     ///<color lookup table mode set to 4 bits per pixel
            v8bpp=0x00000003,     ///<color lookup table mode set to 8 bits per pixel
        };
        namespace clutmodeValC{
            constexpr MPL::Value<clutmodeVal,clutmodeVal::v1bpp> v1bpp{};
            constexpr MPL::Value<clutmodeVal,clutmodeVal::v2bpp> v2bpp{};
            constexpr MPL::Value<clutmodeVal,clutmodeVal::v4bpp> v4bpp{};
            constexpr MPL::Value<clutmodeVal,clutmodeVal::v8bpp> v8bpp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,clutmodeVal> clutmode{}; 
        ///YUV input mode selection
        enum class yuvmodeVal {
            v32bppAycbcr=0x00000000,     ///<32 bpp AYCbCr 444
            v16bppYcbcrMode0=0x00000001,     ///<16 bpp Cr(n)Y(n+1)Cb(n)Y(n) 422
            v16bppYcbcrMode1=0x00000002,     ///<16 bpp Y(n+1)Cr(n)Y(n)Cb(n) 422
            v16bppYcbcrMode2=0x00000003,     ///<16 bpp Cb(n)Y(+1)Cr(n)Y(n) 422
            v16bppYcbcrMode3=0x00000004,     ///<16 bpp Y(n+1)Cb(n)Y(n)Cr(n) 422
            v16bppYcbcrSemiplanar=0x00000005,     ///<16 bpp Semiplanar 422 YCbCr
            v16bppYcbcrPlanar=0x00000006,     ///<16 bpp Planar 422 YCbCr
            v12bppYcbcrSemiplanar=0x00000007,     ///<12 bpp Semiplanar 420 YCbCr
            v12bppYcbcrPlanar=0x00000008,     ///<12 bpp Planar 420 YCbCr
        };
        namespace yuvmodeValC{
            constexpr MPL::Value<yuvmodeVal,yuvmodeVal::v32bppAycbcr> v32bppAycbcr{};
            constexpr MPL::Value<yuvmodeVal,yuvmodeVal::v16bppYcbcrMode0> v16bppYcbcrMode0{};
            constexpr MPL::Value<yuvmodeVal,yuvmodeVal::v16bppYcbcrMode1> v16bppYcbcrMode1{};
            constexpr MPL::Value<yuvmodeVal,yuvmodeVal::v16bppYcbcrMode2> v16bppYcbcrMode2{};
            constexpr MPL::Value<yuvmodeVal,yuvmodeVal::v16bppYcbcrMode3> v16bppYcbcrMode3{};
            constexpr MPL::Value<yuvmodeVal,yuvmodeVal::v16bppYcbcrSemiplanar> v16bppYcbcrSemiplanar{};
            constexpr MPL::Value<yuvmodeVal,yuvmodeVal::v16bppYcbcrPlanar> v16bppYcbcrPlanar{};
            constexpr MPL::Value<yuvmodeVal,yuvmodeVal::v12bppYcbcrSemiplanar> v12bppYcbcrSemiplanar{};
            constexpr MPL::Value<yuvmodeVal,yuvmodeVal::v12bppYcbcrPlanar> v12bppYcbcrPlanar{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,yuvmodeVal> yuvmode{}; 
        ///YUV 4:2:2 Rotation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> yuv422rot{}; 
        ///YUV 4:2:2 SWAP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> yuv422swp{}; 
    }
    namespace LcdcHeocfg2{    ///<High End Overlay Configuration Register 2
        using Addr = Register::Address<0xf80382d4,0xf800f800,0,unsigned>;
        ///Horizontal Window Position
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> xpos{}; 
        ///Vertical Window Position
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> ypos{}; 
    }
    namespace LcdcHeocfg3{    ///<High End Overlay Configuration Register 3
        using Addr = Register::Address<0xf80382d8,0xf800f800,0,unsigned>;
        ///Horizontal Window Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> xsize{}; 
        ///Vertical Window Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> ysize{}; 
    }
    namespace LcdcHeocfg4{    ///<High End Overlay Configuration Register 4
        using Addr = Register::Address<0xf80382dc,0xf800f800,0,unsigned>;
        ///Horizontal image Size in Memory
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> xmemSize{}; 
        ///Vertical image Size in Memory
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> ymemSize{}; 
    }
    namespace LcdcHeocfg5{    ///<High End Overlay Configuration Register 5
        using Addr = Register::Address<0xf80382e0,0x00000000,0,unsigned>;
        ///Horizontal Stride
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> xstride{}; 
    }
    namespace LcdcHeocfg6{    ///<High End Overlay Configuration Register 6
        using Addr = Register::Address<0xf80382e4,0x00000000,0,unsigned>;
        ///Pixel Stride
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pstride{}; 
    }
    namespace LcdcHeocfg7{    ///<High End Overlay Configuration Register 7
        using Addr = Register::Address<0xf80382e8,0x00000000,0,unsigned>;
        ///UV Horizontal Stride
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uvxstride{}; 
    }
    namespace LcdcHeocfg8{    ///<High End Overlay Configuration Register 8
        using Addr = Register::Address<0xf80382ec,0x00000000,0,unsigned>;
        ///UV Pixel Stride
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uvpstride{}; 
    }
    namespace LcdcHeocfg9{    ///<High End Overlay Configuration Register 9
        using Addr = Register::Address<0xf80382f0,0xff000000,0,unsigned>;
        ///Blue Default
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bdef{}; 
        ///Green Default
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gdef{}; 
        ///Red Default
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rdef{}; 
    }
    namespace LcdcHeocfg10{    ///<High End Overlay Configuration Register 10
        using Addr = Register::Address<0xf80382f4,0xff000000,0,unsigned>;
        ///Blue Color Component Chroma Key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bkey{}; 
        ///Green Color Component Chroma Key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gkey{}; 
        ///Red Color Component Chroma Key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rkey{}; 
    }
    namespace LcdcHeocfg11{    ///<High End Overlay Configuration Register 11
        using Addr = Register::Address<0xf80382f8,0xff000000,0,unsigned>;
        ///Blue Color Component Chroma Key Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bmask{}; 
        ///Green Color Component Chroma Key Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gmask{}; 
        ///Red Color Component Chroma Key Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rmask{}; 
    }
    namespace LcdcHeocfg12{    ///<High End Overlay Configuration Register 12
        using Addr = Register::Address<0xf80382fc,0xff00e800,0,unsigned>;
        ///Blender Chroma Key Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crkey{}; 
        ///Blender Inverted Blender Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inv{}; 
        ///Blender Iterated Color Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> iter2bl{}; 
        ///Blender Use Iterated Color
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iter{}; 
        ///Blender Reverse Alpha
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> revalpha{}; 
        ///Blender Global Alpha Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gaen{}; 
        ///Blender Local Alpha Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> laen{}; 
        ///Blender Overlay Layer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Blender DMA Layer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Use Replication logic to expand RGB color to 24 bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rep{}; 
        ///Destination Chroma Keying
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dstkey{}; 
        ///Video Priority
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> vidpri{}; 
        ///Blender Global Alpha
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ga{}; 
    }
    namespace LcdcHeocfg13{    ///<High End Overlay Configuration Register 13
        using Addr = Register::Address<0xf8038300,0x6000e000,0,unsigned>;
        ///Horizontal Scaling Factor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> xfactor{}; 
        ///Vertical Scaling Factor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,16),Register::ReadWriteAccess,unsigned> yfactor{}; 
        ///Hardware Scaler Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> scalen{}; 
    }
    namespace LcdcHeocfg14{    ///<High End Overlay Configuration Register 14
        using Addr = Register::Address<0xf8038304,0x80000000,0,unsigned>;
        ///Color Space Conversion Y coefficient for Red Component 1:2:7 format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> cscry{}; 
        ///Color Space Conversion U coefficient for Red Component 1:2:7 format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,10),Register::ReadWriteAccess,unsigned> cscru{}; 
        ///Color Space Conversion V coefficient for Red Component 1:2:7 format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,20),Register::ReadWriteAccess,unsigned> cscrv{}; 
        ///Color Space Conversion Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> cscyoff{}; 
    }
    namespace LcdcHeocfg15{    ///<High End Overlay Configuration Register 15
        using Addr = Register::Address<0xf8038308,0x80000000,0,unsigned>;
        ///Color Space Conversion Y coefficient for Green Component 1:2:7 format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> cscgy{}; 
        ///Color Space Conversion U coefficient for Green Component 1:2:7 format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,10),Register::ReadWriteAccess,unsigned> cscgu{}; 
        ///Color Space Conversion V coefficient for Green Component 1:2:7 format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,20),Register::ReadWriteAccess,unsigned> cscgv{}; 
        ///Color Space Conversion Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> cscuoff{}; 
    }
    namespace LcdcHeocfg16{    ///<High End Overlay Configuration Register 16
        using Addr = Register::Address<0xf803830c,0x80000000,0,unsigned>;
        ///Color Space Conversion Y coefficient for Blue Component 1:2:7 format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> cscby{}; 
        ///Color Space Conversion U coefficient for Blue Component 1:2:7 format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,10),Register::ReadWriteAccess,unsigned> cscbu{}; 
        ///Color Space Conversion V coefficient for Blue Component 1:2:7 format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,20),Register::ReadWriteAccess,unsigned> cscbv{}; 
        ///Color Space Conversion Offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> cscvoff{}; 
    }
    namespace LcdcHcrcher{    ///<Hardware Cursor Channel Enable Register
        using Addr = Register::Address<0xf8038340,0xfffffff8,0,unsigned>;
        ///Channel Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        ///Update Overlay Attributes Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> updateen{}; 
        ///Add Head Pointer Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> a2qen{}; 
    }
    namespace LcdcHcrchdr{    ///<Hardware Cursor Channel Disable Register
        using Addr = Register::Address<0xf8038344,0xfffffefe,0,unsigned>;
        ///Channel Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel Reset Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chrst{}; 
    }
    namespace LcdcHcrchsr{    ///<Hardware Cursor Channel Status Register
        using Addr = Register::Address<0xf8038348,0xfffffff8,0,unsigned>;
        ///Channel Status Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chsr{}; 
        ///Update Overlay Attributes In Progress
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> updatesr{}; 
        ///Add To Queue Pending Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> a2qsr{}; 
    }
    namespace LcdcHcrier{    ///<Hardware Cursor Interrupt Enable Register
        using Addr = Register::Address<0xf803834c,0xffffff83,0,unsigned>;
        ///End of DMA Transfer Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Descriptor Loaded Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscr{}; 
        ///Head Descriptor Loaded Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> add{}; 
        ///End of List Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> done{}; 
        ///Overflow Interrupt Enable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
    }
    namespace LcdcHcridr{    ///<Hardware Cursor Interrupt Disable Register
        using Addr = Register::Address<0xf8038350,0xffffff83,0,unsigned>;
        ///End of DMA Transfer Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Descriptor Loaded Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscr{}; 
        ///Head Descriptor Loaded Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> add{}; 
        ///End of List Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> done{}; 
        ///Overflow Interrupt Disable Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
    }
    namespace LcdcHcrimr{    ///<Hardware Cursor Interrupt Mask Register
        using Addr = Register::Address<0xf8038354,0xffffff83,0,unsigned>;
        ///End of DMA Transfer Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Descriptor Loaded Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscr{}; 
        ///Head Descriptor Loaded Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> add{}; 
        ///End of List Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> done{}; 
        ///Overflow Interrupt Mask Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
    }
    namespace LcdcHcrisr{    ///<Hardware Cursor Interrupt Status Register
        using Addr = Register::Address<0xf8038358,0xffffff83,0,unsigned>;
        ///End of DMA Transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dma{}; 
        ///DMA Descriptor Loaded
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscr{}; 
        ///Head Descriptor Loaded
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> add{}; 
        ///End of List Detected
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> done{}; 
        ///Overflow Detected
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
    }
    namespace LcdcHcrhead{    ///<Hardware Cursor DMA Head Register
        using Addr = Register::Address<0xf803835c,0x00000003,0,unsigned>;
        ///DMA Head Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> head{}; 
    }
    namespace LcdcHcraddr{    ///<Hardware cursor DMA Address Register
        using Addr = Register::Address<0xf8038360,0x00000000,0,unsigned>;
        ///DMA Transfer start address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace LcdcHcrctrl{    ///<Hardware Cursor DMA Control Register
        using Addr = Register::Address<0xf8038364,0xffffffc0,0,unsigned>;
        ///Transfer Descriptor Fetch Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dfetch{}; 
        ///Lookup Table Fetch Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lfetch{}; 
        ///End of DMA Transfer Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmaien{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscrien{}; 
        ///Add Head Descriptor to Queue Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> addien{}; 
        ///End of List Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> doneien{}; 
    }
    namespace LcdcHcrnext{    ///<Hardware Cursor DMA NExt Register
        using Addr = Register::Address<0xf8038368,0x00000000,0,unsigned>;
        ///DMA Descriptor Next Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> next{}; 
    }
    namespace LcdcHcrcfg0{    ///<Hardware Cursor Configuration 0 Register
        using Addr = Register::Address<0xf803836c,0xfffffecf,0,unsigned>;
        ///AHB Burst Length
        enum class blenVal {
            ahbSingle=0x00000000,     ///<AHB Access is started as soon as there is enough space in the FIFO to store one data. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts can be used. INCR is used for a burst of 2 and 3 beats.
            ahbIncr4=0x00000001,     ///<AHB Access is started as soon as there is enough space in the FIFO to store a total amount of four 32-bit data. An AHB INCR4 Burst is preferred. SINGLE, INCR and INCR4 bursts can be used. INCR is used for a burst of 2 and 3 beats.
            ahbIncr8=0x00000002,     ///<AHB Access is started as soon as there is enough space in the FIFO to store a total amount of eight 32-bit data. An AHB INCR8 Burst is preferred. SINGLE, INCR, INCR4 and INCR8 bursts can be used. INCR is used for a burst of 2 and 3 beats.
            ahbIncr16=0x00000003,     ///<AHB Access is started as soon as there is enough space in the FIFO to store a total amount of sixteen 32-bit data. An AHB INCR16 Burst is preferred. SINGLE, INCR, INCR4, INCR8 and INCR16 bursts can be used. INCR is used for a burst of 2 and 3 beats.
        };
        namespace blenValC{
            constexpr MPL::Value<blenVal,blenVal::ahbSingle> ahbSingle{};
            constexpr MPL::Value<blenVal,blenVal::ahbIncr4> ahbIncr4{};
            constexpr MPL::Value<blenVal,blenVal::ahbIncr8> ahbIncr8{};
            constexpr MPL::Value<blenVal,blenVal::ahbIncr16> ahbIncr16{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,blenVal> blen{}; 
        ///Defined Length Burst Only for Channel Bus Transaction.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dlbo{}; 
    }
    namespace LcdcHcrcfg1{    ///<Hardware Cursor Configuration 1 Register
        using Addr = Register::Address<0xf8038370,0xfffffc0e,0,unsigned>;
        ///Color Lookup Table Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cluten{}; 
        ///RGB input mode selection
        enum class rgbmodeVal {
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
        namespace rgbmodeValC{
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v12bppRgb444> v12bppRgb444{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v16bppArgb4444> v16bppArgb4444{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v16bppRgba4444> v16bppRgba4444{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v16bppRgb565> v16bppRgb565{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v16bppTrgb1555> v16bppTrgb1555{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v18bppRgb666> v18bppRgb666{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v18bppRgb666Packed> v18bppRgb666Packed{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v19bppTrgb1666> v19bppTrgb1666{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v19bppTrgbPacked> v19bppTrgbPacked{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v24bppRgb888> v24bppRgb888{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v24bppRgb888Packed> v24bppRgb888Packed{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v25bppTrgb1888> v25bppTrgb1888{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v32bppArgb8888> v32bppArgb8888{};
            constexpr MPL::Value<rgbmodeVal,rgbmodeVal::v32bppRgba8888> v32bppRgba8888{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,rgbmodeVal> rgbmode{}; 
        ///Color Lookup table input mode selection
        enum class clutmodeVal {
            v1bpp=0x00000000,     ///<color lookup table mode set to 1 bit per pixel
            v2bpp=0x00000001,     ///<color lookup table mode set to 2 bits per pixel
            v4bpp=0x00000002,     ///<color lookup table mode set to 4 bits per pixel
            v8bpp=0x00000003,     ///<color lookup table mode set to 8 bits per pixel
        };
        namespace clutmodeValC{
            constexpr MPL::Value<clutmodeVal,clutmodeVal::v1bpp> v1bpp{};
            constexpr MPL::Value<clutmodeVal,clutmodeVal::v2bpp> v2bpp{};
            constexpr MPL::Value<clutmodeVal,clutmodeVal::v4bpp> v4bpp{};
            constexpr MPL::Value<clutmodeVal,clutmodeVal::v8bpp> v8bpp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,clutmodeVal> clutmode{}; 
    }
    namespace LcdcHcrcfg2{    ///<Hardware Cursor Configuration 2 Register
        using Addr = Register::Address<0xf8038374,0xf800f800,0,unsigned>;
        ///Horizontal Window Position
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> xpos{}; 
        ///Vertical Window Position
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> ypos{}; 
    }
    namespace LcdcHcrcfg3{    ///<Hardware Cursor Configuration 3 Register
        using Addr = Register::Address<0xf8038378,0xff80ff80,0,unsigned>;
        ///Horizontal Window Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> xsize{}; 
        ///Vertical Window Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> ysize{}; 
    }
    namespace LcdcHcrcfg4{    ///<Hardware Cursor Configuration 4 Register
        using Addr = Register::Address<0xf803837c,0x00000000,0,unsigned>;
        ///Horizontal Stride
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> xstride{}; 
    }
    namespace LcdcHcrcfg6{    ///<Hardware Cursor Configuration 6 Register
        using Addr = Register::Address<0xf8038384,0xff000000,0,unsigned>;
        ///Blue Default
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bdef{}; 
        ///Green Default
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gdef{}; 
        ///Red Default
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rdef{}; 
    }
    namespace LcdcHcrcfg7{    ///<Hardware Cursor Configuration 7 Register
        using Addr = Register::Address<0xf8038388,0xff000000,0,unsigned>;
        ///Blue Color Component Chroma Key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bkey{}; 
        ///Green Color Component Chroma Key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gkey{}; 
        ///Red Color Component Chroma Key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rkey{}; 
    }
    namespace LcdcHcrcfg8{    ///<Hardware Cursor Configuration 8 Register
        using Addr = Register::Address<0xf803838c,0xff000000,0,unsigned>;
        ///Blue Color Component Chroma Key Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bmask{}; 
        ///Green Color Component Chroma Key Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gmask{}; 
        ///Red Color Component Chroma Key Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rmask{}; 
    }
    namespace LcdcHcrcfg9{    ///<Hardware Cursor Configuration 9 Register
        using Addr = Register::Address<0xf8038390,0xff00f800,0,unsigned>;
        ///Blender Chroma Key Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crkey{}; 
        ///Blender Inverted Blender Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inv{}; 
        ///Blender Iterated Color Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> iter2bl{}; 
        ///Blender Use Iterated Color
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iter{}; 
        ///Blender Reverse Alpha
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> revalpha{}; 
        ///Blender Global Alpha Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gaen{}; 
        ///Blender Local Alpha Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> laen{}; 
        ///Blender Overlay Layer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Blender DMA Layer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Use Replication logic to expand RGB color to 24 bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rep{}; 
        ///Destination Chroma Keying
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dstkey{}; 
        ///Blender Global Alpha
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ga{}; 
    }
    namespace LcdcBaseclut0{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038400,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut1{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038404,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut2{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038408,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut3{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803840c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut4{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038410,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut5{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038414,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut6{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038418,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut7{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803841c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut8{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038420,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut9{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038424,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut10{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038428,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut11{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803842c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut12{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038430,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut13{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038434,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut14{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038438,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut15{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803843c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut16{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038440,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut17{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038444,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut18{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038448,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut19{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803844c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut20{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038450,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut21{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038454,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut22{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038458,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut23{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803845c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut24{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038460,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut25{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038464,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut26{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038468,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut27{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803846c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut28{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038470,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut29{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038474,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut30{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038478,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut31{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803847c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut32{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038480,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut33{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038484,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut34{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038488,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut35{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803848c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut36{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038490,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut37{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038494,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut38{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038498,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut39{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803849c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut40{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384a0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut41{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384a4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut42{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384a8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut43{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384ac,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut44{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384b0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut45{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384b4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut46{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384b8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut47{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384bc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut48{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384c0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut49{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384c4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut50{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384c8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut51{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384cc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut52{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384d0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut53{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384d4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut54{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384d8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut55{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384dc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut56{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384e0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut57{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384e4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut58{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384e8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut59{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384ec,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut60{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384f0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut61{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384f4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut62{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384f8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut63{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384fc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut64{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038500,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut65{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038504,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut66{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038508,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut67{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803850c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut68{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038510,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut69{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038514,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut70{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038518,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut71{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803851c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut72{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038520,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut73{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038524,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut74{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038528,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut75{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803852c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut76{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038530,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut77{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038534,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut78{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038538,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut79{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803853c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut80{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038540,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut81{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038544,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut82{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038548,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut83{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803854c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut84{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038550,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut85{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038554,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut86{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038558,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut87{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803855c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut88{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038560,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut89{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038564,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut90{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038568,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut91{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803856c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut92{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038570,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut93{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038574,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut94{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038578,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut95{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803857c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut96{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038580,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut97{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038584,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut98{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038588,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut99{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803858c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut100{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038590,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut101{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038594,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut102{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038598,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut103{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803859c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut104{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385a0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut105{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385a4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut106{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385a8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut107{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385ac,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut108{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385b0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut109{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385b4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut110{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385b8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut111{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385bc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut112{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385c0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut113{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385c4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut114{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385c8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut115{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385cc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut116{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385d0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut117{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385d4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut118{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385d8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut119{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385dc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut120{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385e0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut121{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385e4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut122{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385e8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut123{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385ec,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut124{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385f0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut125{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385f4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut126{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385f8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut127{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385fc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut128{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038600,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut129{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038604,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut130{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038608,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut131{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803860c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut132{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038610,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut133{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038614,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut134{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038618,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut135{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803861c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut136{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038620,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut137{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038624,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut138{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038628,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut139{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803862c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut140{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038630,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut141{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038634,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut142{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038638,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut143{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803863c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut144{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038640,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut145{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038644,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut146{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038648,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut147{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803864c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut148{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038650,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut149{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038654,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut150{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038658,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut151{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803865c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut152{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038660,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut153{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038664,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut154{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038668,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut155{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803866c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut156{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038670,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut157{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038674,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut158{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038678,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut159{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803867c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut160{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038680,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut161{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038684,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut162{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038688,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut163{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803868c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut164{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038690,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut165{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038694,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut166{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038698,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut167{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803869c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut168{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386a0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut169{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386a4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut170{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386a8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut171{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386ac,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut172{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386b0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut173{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386b4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut174{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386b8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut175{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386bc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut176{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386c0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut177{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386c4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut178{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386c8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut179{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386cc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut180{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386d0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut181{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386d4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut182{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386d8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut183{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386dc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut184{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386e0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut185{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386e4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut186{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386e8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut187{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386ec,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut188{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386f0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut189{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386f4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut190{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386f8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut191{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386fc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut192{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038700,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut193{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038704,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut194{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038708,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut195{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803870c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut196{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038710,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut197{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038714,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut198{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038718,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut199{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803871c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut200{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038720,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut201{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038724,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut202{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038728,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut203{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803872c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut204{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038730,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut205{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038734,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut206{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038738,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut207{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803873c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut208{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038740,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut209{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038744,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut210{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038748,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut211{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803874c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut212{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038750,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut213{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038754,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut214{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038758,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut215{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803875c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut216{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038760,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut217{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038764,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut218{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038768,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut219{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803876c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut220{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038770,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut221{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038774,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut222{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038778,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut223{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803877c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut224{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038780,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut225{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038784,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut226{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038788,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut227{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803878c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut228{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038790,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut229{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038794,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut230{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038798,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut231{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803879c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut232{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387a0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut233{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387a4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut234{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387a8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut235{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387ac,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut236{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387b0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut237{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387b4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut238{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387b8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut239{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387bc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut240{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387c0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut241{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387c4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut242{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387c8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut243{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387cc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut244{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387d0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut245{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387d4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut246{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387d8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut247{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387dc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut248{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387e0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut249{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387e4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut250{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387e8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut251{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387ec,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut252{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387f0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut253{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387f4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut254{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387f8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcBaseclut255{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387fc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
    }
    namespace LcdcOvr1clut0{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038800,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut1{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038804,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut2{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038808,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut3{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf803880c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut4{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038810,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut5{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038814,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut6{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038818,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut7{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf803881c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut8{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038820,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut9{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038824,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut10{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038828,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut11{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf803882c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut12{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038830,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut13{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038834,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut14{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038838,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut15{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf803883c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut16{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038840,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut17{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038844,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut18{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038848,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut19{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf803884c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut20{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038850,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut21{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038854,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut22{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038858,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut23{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf803885c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut24{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038860,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut25{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038864,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut26{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038868,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut27{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf803886c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut28{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038870,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut29{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038874,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut30{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038878,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut31{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf803887c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut32{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038880,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut33{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038884,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut34{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038888,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut35{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf803888c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut36{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038890,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut37{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038894,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut38{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038898,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut39{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf803889c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut40{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80388a0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut41{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80388a4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut42{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80388a8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut43{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80388ac,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut44{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80388b0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut45{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80388b4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut46{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80388b8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut47{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80388bc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut48{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80388c0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut49{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80388c4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut50{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80388c8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut51{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80388cc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut52{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80388d0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut53{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80388d4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut54{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80388d8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut55{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80388dc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut56{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80388e0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut57{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80388e4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut58{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80388e8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut59{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80388ec,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut60{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80388f0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut61{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80388f4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut62{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80388f8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut63{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80388fc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut64{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038900,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut65{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038904,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut66{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038908,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut67{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf803890c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut68{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038910,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut69{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038914,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut70{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038918,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut71{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf803891c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut72{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038920,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut73{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038924,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut74{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038928,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut75{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf803892c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut76{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038930,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut77{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038934,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut78{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038938,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut79{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf803893c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut80{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038940,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut81{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038944,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut82{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038948,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut83{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf803894c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut84{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038950,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut85{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038954,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut86{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038958,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut87{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf803895c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut88{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038960,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut89{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038964,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut90{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038968,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut91{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf803896c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut92{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038970,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut93{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038974,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut94{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038978,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut95{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf803897c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut96{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038980,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut97{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038984,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut98{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038988,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut99{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf803898c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut100{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038990,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut101{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038994,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut102{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038998,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut103{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf803899c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut104{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80389a0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut105{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80389a4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut106{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80389a8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut107{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80389ac,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut108{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80389b0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut109{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80389b4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut110{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80389b8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut111{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80389bc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut112{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80389c0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut113{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80389c4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut114{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80389c8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut115{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80389cc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut116{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80389d0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut117{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80389d4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut118{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80389d8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut119{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80389dc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut120{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80389e0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut121{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80389e4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut122{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80389e8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut123{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80389ec,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut124{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80389f0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut125{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80389f4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut126{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80389f8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut127{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf80389fc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut128{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a00,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut129{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a04,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut130{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a08,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut131{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a0c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut132{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a10,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut133{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a14,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut134{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a18,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut135{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a1c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut136{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a20,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut137{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a24,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut138{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a28,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut139{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a2c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut140{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a30,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut141{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a34,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut142{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a38,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut143{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a3c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut144{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a40,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut145{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a44,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut146{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a48,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut147{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a4c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut148{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a50,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut149{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a54,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut150{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a58,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut151{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a5c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut152{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a60,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut153{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a64,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut154{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a68,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut155{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a6c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut156{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a70,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut157{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a74,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut158{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a78,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut159{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a7c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut160{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a80,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut161{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a84,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut162{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a88,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut163{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a8c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut164{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a90,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut165{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a94,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut166{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a98,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut167{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038a9c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut168{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038aa0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut169{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038aa4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut170{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038aa8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut171{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038aac,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut172{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038ab0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut173{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038ab4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut174{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038ab8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut175{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038abc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut176{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038ac0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut177{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038ac4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut178{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038ac8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut179{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038acc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut180{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038ad0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut181{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038ad4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut182{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038ad8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut183{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038adc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut184{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038ae0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut185{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038ae4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut186{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038ae8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut187{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038aec,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut188{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038af0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut189{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038af4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut190{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038af8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut191{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038afc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut192{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b00,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut193{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b04,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut194{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b08,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut195{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b0c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut196{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b10,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut197{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b14,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut198{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b18,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut199{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b1c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut200{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b20,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut201{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b24,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut202{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b28,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut203{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b2c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut204{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b30,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut205{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b34,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut206{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b38,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut207{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b3c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut208{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b40,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut209{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b44,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut210{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b48,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut211{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b4c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut212{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b50,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut213{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b54,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut214{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b58,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut215{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b5c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut216{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b60,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut217{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b64,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut218{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b68,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut219{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b6c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut220{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b70,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut221{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b74,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut222{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b78,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut223{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b7c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut224{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b80,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut225{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b84,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut226{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b88,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut227{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b8c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut228{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b90,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut229{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b94,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut230{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b98,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut231{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038b9c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut232{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038ba0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut233{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038ba4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut234{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038ba8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut235{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038bac,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut236{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038bb0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut237{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038bb4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut238{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038bb8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut239{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038bbc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut240{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038bc0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut241{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038bc4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut242{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038bc8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut243{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038bcc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut244{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038bd0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut245{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038bd4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut246{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038bd8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut247{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038bdc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut248{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038be0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut249{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038be4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut250{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038be8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut251{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038bec,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut252{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038bf0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut253{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038bf4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut254{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038bf8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcOvr1clut255{    ///<Overlay 1 CLUT Register
        using Addr = Register::Address<0xf8038bfc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut0{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039000,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut1{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039004,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut2{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039008,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut3{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803900c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut4{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039010,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut5{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039014,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut6{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039018,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut7{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803901c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut8{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039020,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut9{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039024,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut10{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039028,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut11{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803902c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut12{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039030,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut13{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039034,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut14{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039038,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut15{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803903c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut16{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039040,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut17{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039044,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut18{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039048,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut19{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803904c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut20{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039050,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut21{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039054,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut22{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039058,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut23{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803905c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut24{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039060,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut25{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039064,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut26{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039068,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut27{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803906c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut28{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039070,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut29{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039074,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut30{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039078,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut31{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803907c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut32{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039080,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut33{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039084,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut34{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039088,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut35{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803908c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut36{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039090,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut37{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039094,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut38{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039098,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut39{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803909c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut40{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80390a0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut41{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80390a4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut42{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80390a8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut43{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80390ac,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut44{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80390b0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut45{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80390b4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut46{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80390b8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut47{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80390bc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut48{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80390c0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut49{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80390c4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut50{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80390c8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut51{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80390cc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut52{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80390d0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut53{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80390d4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut54{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80390d8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut55{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80390dc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut56{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80390e0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut57{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80390e4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut58{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80390e8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut59{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80390ec,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut60{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80390f0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut61{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80390f4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut62{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80390f8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut63{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80390fc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut64{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039100,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut65{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039104,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut66{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039108,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut67{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803910c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut68{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039110,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut69{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039114,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut70{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039118,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut71{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803911c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut72{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039120,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut73{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039124,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut74{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039128,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut75{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803912c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut76{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039130,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut77{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039134,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut78{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039138,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut79{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803913c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut80{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039140,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut81{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039144,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut82{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039148,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut83{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803914c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut84{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039150,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut85{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039154,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut86{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039158,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut87{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803915c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut88{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039160,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut89{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039164,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut90{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039168,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut91{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803916c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut92{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039170,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut93{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039174,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut94{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039178,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut95{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803917c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut96{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039180,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut97{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039184,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut98{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039188,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut99{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803918c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut100{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039190,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut101{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039194,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut102{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039198,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut103{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803919c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut104{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80391a0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut105{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80391a4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut106{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80391a8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut107{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80391ac,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut108{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80391b0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut109{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80391b4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut110{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80391b8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut111{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80391bc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut112{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80391c0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut113{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80391c4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut114{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80391c8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut115{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80391cc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut116{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80391d0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut117{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80391d4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut118{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80391d8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut119{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80391dc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut120{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80391e0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut121{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80391e4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut122{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80391e8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut123{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80391ec,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut124{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80391f0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut125{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80391f4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut126{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80391f8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut127{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80391fc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut128{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039200,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut129{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039204,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut130{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039208,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut131{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803920c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut132{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039210,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut133{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039214,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut134{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039218,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut135{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803921c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut136{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039220,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut137{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039224,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut138{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039228,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut139{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803922c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut140{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039230,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut141{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039234,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut142{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039238,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut143{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803923c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut144{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039240,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut145{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039244,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut146{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039248,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut147{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803924c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut148{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039250,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut149{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039254,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut150{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039258,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut151{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803925c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut152{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039260,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut153{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039264,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut154{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039268,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut155{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803926c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut156{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039270,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut157{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039274,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut158{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039278,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut159{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803927c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut160{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039280,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut161{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039284,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut162{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039288,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut163{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803928c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut164{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039290,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut165{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039294,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut166{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039298,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut167{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803929c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut168{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80392a0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut169{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80392a4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut170{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80392a8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut171{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80392ac,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut172{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80392b0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut173{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80392b4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut174{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80392b8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut175{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80392bc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut176{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80392c0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut177{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80392c4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut178{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80392c8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut179{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80392cc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut180{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80392d0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut181{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80392d4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut182{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80392d8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut183{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80392dc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut184{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80392e0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut185{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80392e4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut186{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80392e8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut187{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80392ec,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut188{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80392f0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut189{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80392f4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut190{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80392f8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut191{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80392fc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut192{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039300,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut193{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039304,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut194{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039308,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut195{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803930c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut196{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039310,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut197{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039314,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut198{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039318,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut199{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803931c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut200{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039320,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut201{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039324,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut202{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039328,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut203{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803932c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut204{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039330,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut205{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039334,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut206{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039338,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut207{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803933c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut208{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039340,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut209{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039344,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut210{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039348,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut211{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803934c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut212{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039350,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut213{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039354,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut214{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039358,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut215{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803935c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut216{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039360,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut217{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039364,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut218{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039368,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut219{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803936c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut220{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039370,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut221{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039374,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut222{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039378,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut223{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803937c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut224{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039380,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut225{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039384,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut226{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039388,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut227{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803938c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut228{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039390,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut229{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039394,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut230{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf8039398,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut231{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf803939c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut232{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80393a0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut233{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80393a4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut234{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80393a8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut235{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80393ac,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut236{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80393b0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut237{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80393b4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut238{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80393b8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut239{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80393bc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut240{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80393c0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut241{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80393c4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut242{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80393c8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut243{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80393cc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut244{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80393d0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut245{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80393d4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut246{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80393d8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut247{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80393dc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut248{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80393e0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut249{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80393e4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut250{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80393e8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut251{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80393ec,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut252{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80393f0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut253{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80393f4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut254{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80393f8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHeoclut255{    ///<High End Overlay CLUT Register
        using Addr = Register::Address<0xf80393fc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut0{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039400,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut1{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039404,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut2{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039408,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut3{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803940c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut4{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039410,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut5{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039414,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut6{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039418,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut7{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803941c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut8{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039420,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut9{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039424,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut10{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039428,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut11{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803942c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut12{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039430,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut13{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039434,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut14{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039438,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut15{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803943c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut16{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039440,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut17{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039444,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut18{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039448,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut19{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803944c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut20{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039450,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut21{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039454,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut22{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039458,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut23{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803945c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut24{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039460,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut25{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039464,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut26{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039468,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut27{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803946c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut28{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039470,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut29{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039474,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut30{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039478,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut31{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803947c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut32{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039480,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut33{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039484,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut34{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039488,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut35{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803948c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut36{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039490,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut37{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039494,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut38{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039498,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut39{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803949c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut40{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80394a0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut41{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80394a4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut42{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80394a8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut43{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80394ac,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut44{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80394b0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut45{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80394b4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut46{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80394b8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut47{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80394bc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut48{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80394c0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut49{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80394c4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut50{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80394c8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut51{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80394cc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut52{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80394d0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut53{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80394d4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut54{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80394d8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut55{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80394dc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut56{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80394e0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut57{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80394e4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut58{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80394e8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut59{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80394ec,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut60{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80394f0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut61{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80394f4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut62{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80394f8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut63{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80394fc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut64{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039500,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut65{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039504,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut66{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039508,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut67{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803950c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut68{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039510,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut69{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039514,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut70{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039518,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut71{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803951c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut72{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039520,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut73{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039524,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut74{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039528,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut75{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803952c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut76{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039530,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut77{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039534,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut78{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039538,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut79{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803953c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut80{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039540,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut81{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039544,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut82{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039548,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut83{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803954c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut84{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039550,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut85{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039554,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut86{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039558,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut87{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803955c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut88{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039560,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut89{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039564,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut90{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039568,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut91{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803956c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut92{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039570,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut93{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039574,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut94{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039578,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut95{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803957c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut96{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039580,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut97{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039584,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut98{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039588,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut99{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803958c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut100{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039590,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut101{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039594,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut102{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039598,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut103{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803959c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut104{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80395a0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut105{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80395a4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut106{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80395a8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut107{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80395ac,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut108{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80395b0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut109{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80395b4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut110{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80395b8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut111{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80395bc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut112{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80395c0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut113{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80395c4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut114{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80395c8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut115{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80395cc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut116{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80395d0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut117{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80395d4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut118{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80395d8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut119{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80395dc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut120{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80395e0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut121{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80395e4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut122{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80395e8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut123{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80395ec,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut124{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80395f0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut125{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80395f4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut126{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80395f8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut127{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80395fc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut128{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039600,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut129{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039604,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut130{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039608,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut131{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803960c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut132{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039610,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut133{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039614,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut134{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039618,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut135{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803961c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut136{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039620,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut137{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039624,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut138{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039628,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut139{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803962c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut140{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039630,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut141{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039634,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut142{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039638,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut143{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803963c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut144{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039640,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut145{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039644,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut146{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039648,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut147{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803964c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut148{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039650,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut149{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039654,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut150{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039658,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut151{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803965c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut152{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039660,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut153{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039664,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut154{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039668,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut155{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803966c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut156{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039670,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut157{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039674,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut158{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039678,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut159{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803967c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut160{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039680,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut161{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039684,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut162{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039688,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut163{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803968c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut164{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039690,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut165{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039694,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut166{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039698,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut167{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803969c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut168{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80396a0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut169{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80396a4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut170{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80396a8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut171{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80396ac,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut172{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80396b0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut173{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80396b4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut174{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80396b8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut175{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80396bc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut176{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80396c0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut177{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80396c4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut178{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80396c8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut179{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80396cc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut180{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80396d0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut181{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80396d4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut182{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80396d8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut183{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80396dc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut184{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80396e0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut185{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80396e4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut186{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80396e8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut187{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80396ec,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut188{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80396f0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut189{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80396f4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut190{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80396f8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut191{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80396fc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut192{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039700,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut193{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039704,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut194{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039708,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut195{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803970c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut196{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039710,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut197{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039714,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut198{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039718,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut199{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803971c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut200{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039720,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut201{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039724,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut202{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039728,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut203{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803972c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut204{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039730,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut205{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039734,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut206{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039738,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut207{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803973c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut208{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039740,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut209{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039744,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut210{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039748,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut211{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803974c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut212{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039750,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut213{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039754,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut214{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039758,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut215{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803975c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut216{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039760,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut217{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039764,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut218{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039768,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut219{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803976c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut220{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039770,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut221{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039774,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut222{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039778,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut223{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803977c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut224{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039780,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut225{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039784,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut226{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039788,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut227{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803978c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut228{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039790,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut229{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039794,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut230{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf8039798,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut231{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf803979c,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut232{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80397a0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut233{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80397a4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut234{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80397a8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut235{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80397ac,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut236{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80397b0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut237{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80397b4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut238{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80397b8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut239{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80397bc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut240{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80397c0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut241{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80397c4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut242{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80397c8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut243{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80397cc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut244{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80397d0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut245{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80397d4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut246{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80397d8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut247{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80397dc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut248{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80397e0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut249{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80397e4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut250{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80397e8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut251{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80397ec,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut252{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80397f0,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut253{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80397f4,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut254{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80397f8,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
    }
    namespace LcdcHcrclut255{    ///<Hardware Cursor CLUT Register
        using Addr = Register::Address<0xf80397fc,0x00000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        ///Green Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        ///Red Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        ///Alpha Color entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> aclut{}; 
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
