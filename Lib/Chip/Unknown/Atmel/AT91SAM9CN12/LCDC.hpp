#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//LCD Controller
    namespace LcdcLcdcfg0{    ///<LCD Controller Configuration Register 0
        using Addr = Register::Address<0xf8038000,0xff00fef2,0,unsigned>;
        ///LCD Controller Clock Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clkpol{}; 
        namespace ClkpolValC{
        }
        ///LCD Controller Clock Source Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clksel{}; 
        namespace ClkselValC{
        }
        ///LCD Controller PWM Clock Source Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clkpwmsel{}; 
        namespace ClkpwmselValC{
        }
        ///Clock Gating Disable Control for the Base Layer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cgdisbase{}; 
        namespace CgdisbaseValC{
        }
        ///LCD Controller Clock Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        namespace ClkdivValC{
        }
    }
    namespace LcdcLcdcfg1{    ///<LCD Controller Configuration Register 1
        using Addr = Register::Address<0xf8038004,0xffc0ffc0,0,unsigned>;
        ///Horizontal Synchronization Pulse Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> hspw{}; 
        namespace HspwValC{
        }
        ///Vertical Synchronization Pulse Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> vspw{}; 
        namespace VspwValC{
        }
    }
    namespace LcdcLcdcfg2{    ///<LCD Controller Configuration Register 2
        using Addr = Register::Address<0xf8038008,0xffc0ffc0,0,unsigned>;
        ///Vertical Front Porch Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> vfpw{}; 
        namespace VfpwValC{
        }
        ///Vertical Back Porch Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> vbpw{}; 
        namespace VbpwValC{
        }
    }
    namespace LcdcLcdcfg3{    ///<LCD Controller Configuration Register 3
        using Addr = Register::Address<0xf803800c,0xff00ff00,0,unsigned>;
        ///Horizontal Front Porch Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> hfpw{}; 
        namespace HfpwValC{
        }
        ///Horizontal Back Porch Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hbpw{}; 
        namespace HbpwValC{
        }
    }
    namespace LcdcLcdcfg4{    ///<LCD Controller Configuration Register 4
        using Addr = Register::Address<0xf8038010,0xf800f800,0,unsigned>;
        ///Number of Pixels Per Line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> ppl{}; 
        namespace PplValC{
        }
        ///Number of Active Rows Per Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> rpf{}; 
        namespace RpfValC{
        }
    }
    namespace LcdcLcdcfg5{    ///<LCD Controller Configuration Register 5
        using Addr = Register::Address<0xf8038014,0xffe0cc20,0,unsigned>;
        ///Horizontal Synchronization Pulse Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hspol{}; 
        namespace HspolValC{
        }
        ///Vertical Synchronization Pulse Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vspol{}; 
        namespace VspolValC{
        }
        ///Vertical Synchronization Pulse Start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> vspdlys{}; 
        namespace VspdlysValC{
        }
        ///Vertical Synchronization Pulse End
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vspdlye{}; 
        namespace VspdlyeValC{
        }
        ///Display Signal Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> disppol{}; 
        namespace DisppolValC{
        }
        ///LCD Controller Dithering
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dither{}; 
        namespace DitherValC{
        }
        ///LCD Controller Display Power Signal Synchronization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dispdly{}; 
        namespace DispdlyValC{
        }
        ///LCD Controller Output Mode
        enum class ModeVal {
            output12bpp=0x00000000,     ///<LCD output mode is set to 12 bits per pixel
            output16bpp=0x00000001,     ///<LCD output mode is set to 16 bits per pixel
            output18bpp=0x00000002,     ///<LCD output mode is set to 18 bits per pixel
            output24bpp=0x00000003,     ///<LCD output mode is set to 24 bits per pixel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::output12bpp> output12bpp{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::output16bpp> output16bpp{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::output18bpp> output18bpp{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::output24bpp> output24bpp{};
        }
        ///LCD Controller Vertical Synchronization Pulse Setup Configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> vspsu{}; 
        namespace VspsuValC{
        }
        ///LCD Controller Vertical Synchronization Pulse Hold Configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> vspho{}; 
        namespace VsphoValC{
        }
        ///LCD DISPLAY Guard Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> guardtime{}; 
        namespace GuardtimeValC{
        }
    }
    namespace LcdcLcdcfg6{    ///<LCD Controller Configuration Register 6
        using Addr = Register::Address<0xf8038018,0xffff00e8,0,unsigned>;
        ///PWM Clock Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> pwmps{}; 
        namespace PwmpsValC{
        }
        ///LCD Controller PWM Signal Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pwmpol{}; 
        namespace PwmpolValC{
        }
        ///LCD Controller PWM Compare Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pwmcval{}; 
        namespace PwmcvalValC{
        }
    }
    namespace LcdcLcden{    ///<LCD Controller Enable Register
        using Addr = Register::Address<0xf8038020,0xfffffff0,0,unsigned>;
        ///LCD Controller Pixel Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clken{}; 
        namespace ClkenValC{
        }
        ///LCD Controller Horizontal and Vertical Synchronization Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> syncen{}; 
        namespace SyncenValC{
        }
        ///LCD Controller DISP Signal Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dispen{}; 
        namespace DispenValC{
        }
        ///LCD Controller Pulse Width Modulation Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pwmen{}; 
        namespace PwmenValC{
        }
    }
    namespace LcdcLcddis{    ///<LCD Controller Disable Register
        using Addr = Register::Address<0xf8038024,0xfffff0f0,0,unsigned>;
        ///LCD Controller Pixel Clock Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clkdis{}; 
        namespace ClkdisValC{
        }
        ///LCD Controller Horizontal and Vertical Synchronization Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> syncdis{}; 
        namespace SyncdisValC{
        }
        ///LCD Controller DISP Signal Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dispdis{}; 
        namespace DispdisValC{
        }
        ///LCD Controller Pulse Width Modulation Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pwmdis{}; 
        namespace PwmdisValC{
        }
        ///LCD Controller Clock Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clkrst{}; 
        namespace ClkrstValC{
        }
        ///LCD Controller Horizontal and Vertical Synchronization Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> syncrst{}; 
        namespace SyncrstValC{
        }
        ///LCD Controller DISP Signal Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> disprst{}; 
        namespace DisprstValC{
        }
        ///LCD Controller PWM Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pwmrst{}; 
        namespace PwmrstValC{
        }
    }
    namespace LcdcLcdsr{    ///<LCD Controller Status Register
        using Addr = Register::Address<0xf8038028,0xffffffe0,0,unsigned>;
        ///Clock Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clksts{}; 
        namespace ClkstsValC{
        }
        ///LCD Controller Synchronization status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lcdsts{}; 
        namespace LcdstsValC{
        }
        ///LCD Controller DISP Signal Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dispsts{}; 
        namespace DispstsValC{
        }
        ///LCD Controller PWM Signal Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pwmsts{}; 
        namespace PwmstsValC{
        }
        ///Synchronization In Progress
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sipsts{}; 
        namespace SipstsValC{
        }
    }
    namespace LcdcLcdier{    ///<LCD Controller Interrupt Enable Register
        using Addr = Register::Address<0xf803802c,0xfffffee8,0,unsigned>;
        ///Start of Frame Interrupt Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sofie{}; 
        namespace SofieValC{
        }
        ///LCD Disable Interrupt Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> disie{}; 
        namespace DisieValC{
        }
        ///Power UP/Down Sequence Terminated Interrupt Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dispie{}; 
        namespace DispieValC{
        }
        ///Output FIFO Error Interrupt Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fifoerrie{}; 
        namespace FifoerrieValC{
        }
        ///Base Layer Interrupt Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> baseie{}; 
        namespace BaseieValC{
        }
    }
    namespace LcdcLcdidr{    ///<LCD Controller Interrupt Disable Register
        using Addr = Register::Address<0xf8038030,0xfffffee8,0,unsigned>;
        ///Start of Frame Interrupt Disable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sofid{}; 
        namespace SofidValC{
        }
        ///LCD Disable Interrupt Disable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> disid{}; 
        namespace DisidValC{
        }
        ///Power UP/Down Sequence Terminated Interrupt Disable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dispid{}; 
        namespace DispidValC{
        }
        ///Output FIFO Error Interrupt Disable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fifoerrid{}; 
        namespace FifoerridValC{
        }
        ///Base Layer Interrupt Disable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> baseid{}; 
        namespace BaseidValC{
        }
    }
    namespace LcdcLcdimr{    ///<LCD Controller Interrupt Mask Register
        using Addr = Register::Address<0xf8038034,0xfffffee8,0,unsigned>;
        ///Start of Frame Interrupt Mask Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sofim{}; 
        namespace SofimValC{
        }
        ///LCD Disable Interrupt Mask Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> disim{}; 
        namespace DisimValC{
        }
        ///Power UP/Down Sequence Terminated Interrupt Mask Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dispim{}; 
        namespace DispimValC{
        }
        ///Output FIFO Error Interrupt Mask Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fifoerrim{}; 
        namespace FifoerrimValC{
        }
        ///Base Layer Interrupt Mask Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> baseim{}; 
        namespace BaseimValC{
        }
    }
    namespace LcdcLcdisr{    ///<LCD Controller Interrupt Status Register
        using Addr = Register::Address<0xf8038038,0xfffffee8,0,unsigned>;
        ///Start of Frame Interrupt Status Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sof{}; 
        namespace SofValC{
        }
        ///LCD Disable Interrupt Status Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dis{}; 
        namespace DisValC{
        }
        ///Power-up/Power-down Sequence Terminated Interrupt Status Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> disp{}; 
        namespace DispValC{
        }
        ///Output FIFO Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fifoerr{}; 
        namespace FifoerrValC{
        }
        ///Base Layer Raw Interrupt Status Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> base{}; 
        namespace BaseValC{
        }
    }
    namespace LcdcBasecher{    ///<Base Layer Channel Enable Register
        using Addr = Register::Address<0xf8038040,0xfffffff8,0,unsigned>;
        ///Channel Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        namespace ChenValC{
        }
        ///Update Overlay Attributes Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> updateen{}; 
        namespace UpdateenValC{
        }
        ///Add Head Pointer Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> a2qen{}; 
        namespace A2qenValC{
        }
    }
    namespace LcdcBasechdr{    ///<Base Layer Channel Disable Register
        using Addr = Register::Address<0xf8038044,0xfffffefe,0,unsigned>;
        ///Channel Disable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chdis{}; 
        namespace ChdisValC{
        }
        ///Channel Reset Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chrst{}; 
        namespace ChrstValC{
        }
    }
    namespace LcdcBasechsr{    ///<Base Layer Channel Status Register
        using Addr = Register::Address<0xf8038048,0xfffffff8,0,unsigned>;
        ///Channel Status Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chsr{}; 
        namespace ChsrValC{
        }
        ///Update Overlay Attributes In Progress
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> updatesr{}; 
        namespace UpdatesrValC{
        }
        ///Add To Queue Pending Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> a2qsr{}; 
        namespace A2qsrValC{
        }
    }
    namespace LcdcBaseier{    ///<Base Layer Interrupt Enable Register
        using Addr = Register::Address<0xf803804c,0xffffff83,0,unsigned>;
        ///End of DMA Transfer Interrupt Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dma{}; 
        namespace DmaValC{
        }
        ///Descriptor Loaded Interrupt Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
        ///Head Descriptor Loaded Interrupt Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> add{}; 
        namespace AddValC{
        }
        ///End of List Interrupt Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
        ///Overflow Interrupt Enable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
        namespace OvrValC{
        }
    }
    namespace LcdcBaseidr{    ///<Base Layer Interrupt Disabled Register
        using Addr = Register::Address<0xf8038050,0xffffff83,0,unsigned>;
        ///End of DMA Transfer Interrupt Disable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dma{}; 
        namespace DmaValC{
        }
        ///Descriptor Loaded Interrupt Disable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
        ///Head Descriptor Loaded Interrupt Disable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> add{}; 
        namespace AddValC{
        }
        ///End of List Interrupt Disable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
        ///Overflow Interrupt Disable Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
        namespace OvrValC{
        }
    }
    namespace LcdcBaseimr{    ///<Base Layer Interrupt Mask Register
        using Addr = Register::Address<0xf8038054,0xffffff83,0,unsigned>;
        ///End of DMA Transfer Interrupt Mask Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dma{}; 
        namespace DmaValC{
        }
        ///Descriptor Loaded Interrupt Mask Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
        ///Head Descriptor Loaded Interrupt Mask Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> add{}; 
        namespace AddValC{
        }
        ///End of List Interrupt Mask Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
        ///Overflow Interrupt Mask Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
        namespace OvrValC{
        }
    }
    namespace LcdcBaseisr{    ///<Base Layer Interrupt status Register
        using Addr = Register::Address<0xf8038058,0xffffff83,0,unsigned>;
        ///End of DMA Transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dma{}; 
        namespace DmaValC{
        }
        ///DMA Descriptor Loaded
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
        ///Head Descriptor Loaded
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> add{}; 
        namespace AddValC{
        }
        ///End of List Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
        ///Overflow Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
        namespace OvrValC{
        }
    }
    namespace LcdcBasehead{    ///<Base Layer DMA Head Register
        using Addr = Register::Address<0xf803805c,0x00000003,0,unsigned>;
        ///DMA Head Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> head{}; 
        namespace HeadValC{
        }
    }
    namespace LcdcBaseaddr{    ///<Base Layer DMA Address Register
        using Addr = Register::Address<0xf8038060,0x00000000,0,unsigned>;
        ///DMA Transfer Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace LcdcBasectrl{    ///<Base Layer DMA Control Register
        using Addr = Register::Address<0xf8038064,0xffffffc0,0,unsigned>;
        ///Transfer Descriptor Fetch Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dfetch{}; 
        namespace DfetchValC{
        }
        ///Lookup Table Fetch Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lfetch{}; 
        namespace LfetchValC{
        }
        ///End of DMA Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmaien{}; 
        namespace DmaienValC{
        }
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dscrien{}; 
        namespace DscrienValC{
        }
        ///Add Head Descriptor to Queue Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> addien{}; 
        namespace AddienValC{
        }
        ///End of List Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> doneien{}; 
        namespace DoneienValC{
        }
    }
    namespace LcdcBasenext{    ///<Base Layer DMA Next Register
        using Addr = Register::Address<0xf8038068,0x00000000,0,unsigned>;
        ///DMA Descriptor Next Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> next{}; 
        namespace NextValC{
        }
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
            constexpr Register::FieldValue<decltype(blen),BlenVal::ahbSingle> ahbSingle{};
            constexpr Register::FieldValue<decltype(blen),BlenVal::ahbIncr4> ahbIncr4{};
            constexpr Register::FieldValue<decltype(blen),BlenVal::ahbIncr8> ahbIncr8{};
            constexpr Register::FieldValue<decltype(blen),BlenVal::ahbIncr16> ahbIncr16{};
        }
        ///Defined Length Burst Only For Channel Bus Transaction.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dlbo{}; 
        namespace DlboValC{
        }
    }
    namespace LcdcBasecfg1{    ///<Base Layer Configuration Register 1
        using Addr = Register::Address<0xf8038070,0xfffffc0e,0,unsigned>;
        ///Color Lookup Table Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cluten{}; 
        namespace ClutenValC{
        }
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
            constexpr Register::FieldValue<decltype(rgbmode),RgbmodeVal::v12bppRgb444> v12bppRgb444{};
            constexpr Register::FieldValue<decltype(rgbmode),RgbmodeVal::v16bppArgb4444> v16bppArgb4444{};
            constexpr Register::FieldValue<decltype(rgbmode),RgbmodeVal::v16bppRgba4444> v16bppRgba4444{};
            constexpr Register::FieldValue<decltype(rgbmode),RgbmodeVal::v16bppRgb565> v16bppRgb565{};
            constexpr Register::FieldValue<decltype(rgbmode),RgbmodeVal::v16bppTrgb1555> v16bppTrgb1555{};
            constexpr Register::FieldValue<decltype(rgbmode),RgbmodeVal::v18bppRgb666> v18bppRgb666{};
            constexpr Register::FieldValue<decltype(rgbmode),RgbmodeVal::v18bppRgb666Packed> v18bppRgb666Packed{};
            constexpr Register::FieldValue<decltype(rgbmode),RgbmodeVal::v19bppTrgb1666> v19bppTrgb1666{};
            constexpr Register::FieldValue<decltype(rgbmode),RgbmodeVal::v19bppTrgbPacked> v19bppTrgbPacked{};
            constexpr Register::FieldValue<decltype(rgbmode),RgbmodeVal::v24bppRgb888> v24bppRgb888{};
            constexpr Register::FieldValue<decltype(rgbmode),RgbmodeVal::v24bppRgb888Packed> v24bppRgb888Packed{};
            constexpr Register::FieldValue<decltype(rgbmode),RgbmodeVal::v25bppTrgb1888> v25bppTrgb1888{};
            constexpr Register::FieldValue<decltype(rgbmode),RgbmodeVal::v32bppArgb8888> v32bppArgb8888{};
            constexpr Register::FieldValue<decltype(rgbmode),RgbmodeVal::v32bppRgba8888> v32bppRgba8888{};
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
            constexpr Register::FieldValue<decltype(clutmode),ClutmodeVal::v1bpp> v1bpp{};
            constexpr Register::FieldValue<decltype(clutmode),ClutmodeVal::v2bpp> v2bpp{};
            constexpr Register::FieldValue<decltype(clutmode),ClutmodeVal::v4bpp> v4bpp{};
            constexpr Register::FieldValue<decltype(clutmode),ClutmodeVal::v8bpp> v8bpp{};
        }
    }
    namespace LcdcBasecfg2{    ///<Base Layer Configuration Register 2
        using Addr = Register::Address<0xf8038074,0x00000000,0,unsigned>;
        ///Horizontal Stride
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> xstride{}; 
        namespace XstrideValC{
        }
    }
    namespace LcdcBasecfg3{    ///<Base Layer Configuration Register 3
        using Addr = Register::Address<0xf8038078,0xff000000,0,unsigned>;
        ///Blue Default
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bdef{}; 
        namespace BdefValC{
        }
        ///Green Default
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gdef{}; 
        namespace GdefValC{
        }
        ///Red Default
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rdef{}; 
        namespace RdefValC{
        }
    }
    namespace LcdcBasecfg4{    ///<Base Layer Configuration Register 4
        using Addr = Register::Address<0xf803807c,0xfffffcff,0,unsigned>;
        ///Use DMA Data Path
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dma{}; 
        namespace DmaValC{
        }
        ///Use Replication logic to expand RGB color to 24 bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rep{}; 
        namespace RepValC{
        }
    }
    namespace LcdcBaseclut0{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038400,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut1{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038404,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut2{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038408,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut3{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803840c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut4{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038410,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut5{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038414,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut6{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038418,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut7{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803841c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut8{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038420,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut9{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038424,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut10{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038428,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut11{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803842c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut12{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038430,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut13{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038434,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut14{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038438,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut15{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803843c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut16{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038440,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut17{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038444,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut18{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038448,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut19{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803844c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut20{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038450,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut21{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038454,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut22{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038458,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut23{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803845c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut24{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038460,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut25{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038464,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut26{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038468,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut27{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803846c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut28{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038470,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut29{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038474,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut30{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038478,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut31{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803847c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut32{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038480,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut33{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038484,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut34{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038488,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut35{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803848c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut36{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038490,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut37{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038494,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut38{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038498,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut39{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803849c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut40{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384a0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut41{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384a4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut42{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384a8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut43{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384ac,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut44{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384b0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut45{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384b4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut46{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384b8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut47{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384bc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut48{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384c0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut49{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384c4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut50{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384c8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut51{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384cc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut52{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384d0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut53{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384d4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut54{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384d8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut55{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384dc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut56{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384e0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut57{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384e4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut58{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384e8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut59{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384ec,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut60{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384f0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut61{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384f4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut62{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384f8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut63{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80384fc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut64{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038500,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut65{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038504,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut66{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038508,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut67{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803850c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut68{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038510,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut69{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038514,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut70{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038518,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut71{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803851c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut72{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038520,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut73{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038524,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut74{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038528,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut75{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803852c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut76{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038530,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut77{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038534,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut78{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038538,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut79{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803853c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut80{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038540,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut81{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038544,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut82{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038548,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut83{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803854c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut84{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038550,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut85{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038554,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut86{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038558,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut87{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803855c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut88{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038560,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut89{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038564,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut90{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038568,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut91{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803856c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut92{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038570,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut93{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038574,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut94{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038578,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut95{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803857c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut96{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038580,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut97{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038584,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut98{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038588,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut99{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803858c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut100{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038590,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut101{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038594,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut102{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038598,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut103{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803859c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut104{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385a0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut105{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385a4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut106{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385a8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut107{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385ac,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut108{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385b0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut109{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385b4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut110{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385b8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut111{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385bc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut112{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385c0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut113{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385c4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut114{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385c8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut115{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385cc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut116{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385d0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut117{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385d4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut118{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385d8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut119{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385dc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut120{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385e0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut121{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385e4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut122{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385e8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut123{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385ec,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut124{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385f0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut125{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385f4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut126{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385f8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut127{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80385fc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut128{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038600,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut129{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038604,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut130{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038608,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut131{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803860c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut132{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038610,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut133{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038614,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut134{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038618,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut135{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803861c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut136{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038620,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut137{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038624,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut138{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038628,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut139{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803862c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut140{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038630,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut141{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038634,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut142{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038638,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut143{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803863c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut144{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038640,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut145{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038644,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut146{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038648,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut147{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803864c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut148{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038650,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut149{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038654,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut150{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038658,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut151{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803865c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut152{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038660,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut153{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038664,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut154{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038668,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut155{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803866c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut156{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038670,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut157{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038674,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut158{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038678,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut159{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803867c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut160{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038680,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut161{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038684,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut162{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038688,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut163{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803868c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut164{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038690,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut165{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038694,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut166{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038698,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut167{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803869c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut168{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386a0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut169{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386a4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut170{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386a8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut171{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386ac,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut172{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386b0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut173{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386b4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut174{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386b8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut175{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386bc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut176{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386c0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut177{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386c4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut178{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386c8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut179{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386cc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut180{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386d0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut181{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386d4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut182{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386d8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut183{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386dc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut184{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386e0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut185{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386e4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut186{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386e8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut187{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386ec,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut188{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386f0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut189{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386f4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut190{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386f8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut191{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80386fc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut192{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038700,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut193{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038704,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut194{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038708,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut195{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803870c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut196{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038710,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut197{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038714,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut198{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038718,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut199{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803871c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut200{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038720,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut201{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038724,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut202{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038728,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut203{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803872c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut204{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038730,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut205{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038734,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut206{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038738,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut207{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803873c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut208{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038740,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut209{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038744,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut210{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038748,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut211{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803874c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut212{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038750,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut213{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038754,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut214{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038758,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut215{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803875c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut216{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038760,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut217{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038764,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut218{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038768,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut219{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803876c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut220{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038770,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut221{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038774,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut222{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038778,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut223{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803877c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut224{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038780,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut225{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038784,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut226{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038788,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut227{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803878c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut228{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038790,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut229{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038794,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut230{    ///<Base CLUT Register
        using Addr = Register::Address<0xf8038798,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut231{    ///<Base CLUT Register
        using Addr = Register::Address<0xf803879c,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut232{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387a0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut233{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387a4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut234{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387a8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut235{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387ac,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut236{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387b0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut237{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387b4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut238{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387b8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut239{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387bc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut240{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387c0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut241{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387c4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut242{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387c8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut243{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387cc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut244{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387d0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut245{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387d4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut246{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387d8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut247{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387dc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut248{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387e0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut249{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387e4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut250{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387e8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut251{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387ec,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut252{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387f0,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut253{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387f4,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut254{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387f8,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
    }
    namespace LcdcBaseclut255{    ///<Base CLUT Register
        using Addr = Register::Address<0xf80387fc,0xff000000,0,unsigned>;
        ///Blue Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bclut{}; 
        namespace BclutValC{
        }
        ///Green Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> gclut{}; 
        namespace GclutValC{
        }
        ///Red Color entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rclut{}; 
        namespace RclutValC{
        }
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
