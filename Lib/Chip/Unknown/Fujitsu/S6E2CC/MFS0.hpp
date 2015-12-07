#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Multi-function Serial Interface 0
    namespace NoneuartScr{    ///<Serial Control Register
        using Addr = Register::Address<0x40038001,0xffffff60,0,unsigned char>;
        ///Programmable Clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> upcl{}; 
        namespace UpclValC{
        }
        ///Received interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rie{}; 
        namespace RieValC{
        }
        ///Transmit interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tie{}; 
        namespace TieValC{
        }
        ///Transmit bus idle interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbie{}; 
        namespace TbieValC{
        }
        ///Received operation enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxe{}; 
        namespace RxeValC{
        }
        ///Transmission operation enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txe{}; 
        namespace TxeValC{
        }
    }
    namespace NoneuartSmr{    ///<Serial Mode Register
        using Addr = Register::Address<0x40038000,0xffffff12,0,unsigned char>;
        ///Operation mode set bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        namespace MdValC{
        }
        ///Stop bit length select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sbl{}; 
        namespace SblValC{
        }
        ///Transfer direction select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bds{}; 
        namespace BdsValC{
        }
        ///Serial data output enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> soe{}; 
        namespace SoeValC{
        }
    }
    namespace NoneuartSsr{    ///<Serial Status Register
        using Addr = Register::Address<0x40038005,0xffffff40,0,unsigned char>;
        ///Received error flag clear bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rec{}; 
        namespace RecValC{
        }
        ///Parity error flag bit (only functions in operation mode 0) 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
        ///Framing error flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fre{}; 
        namespace FreValC{
        }
        ///Overrun error flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ore{}; 
        namespace OreValC{
        }
        ///Received data full flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rdrf{}; 
        namespace RdrfValC{
        }
        ///Transmit data empty flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tdre{}; 
        namespace TdreValC{
        }
        ///Transmit bus idle flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tbi{}; 
        namespace TbiValC{
        }
    }
    namespace NoneuartEscr{    ///<Extended Communication Control Register
        using Addr = Register::Address<0x40038004,0xffffff00,0,unsigned char>;
        ///Flow control enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> flwen{}; 
        namespace FlwenValC{
        }
        ///Extension stop bit length select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> esbl{}; 
        namespace EsblValC{
        }
        ///Inverted serial data format bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> inv{}; 
        namespace InvValC{
        }
        ///Parity enable bit (only functions in operation mode 0) 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pen{}; 
        namespace PenValC{
        }
        ///Parity select bit (only functions in operation mode 0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p{}; 
        namespace PValC{
        }
        ///Data length select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> l{}; 
        namespace LValC{
        }
    }
    namespace NoneuartRdr{    ///<Received Data Register
        using Addr = Register::Address<0x40038008,0xfffffe00,0,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> d{}; 
        namespace DValC{
        }
    }
    namespace NoneuartTdr{    ///<Transmit Data Register
        using Addr = Register::Address<0x40038008,0xfffffe00,0,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> d{}; 
        namespace DValC{
        }
    }
    namespace NoneuartBgr{    ///<Baud Rate Generator Registers
        using Addr = Register::Address<0x4003800c,0xffff0000,0,unsigned>;
        ///External clock select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ext{}; 
        namespace ExtValC{
        }
        ///Baud Rate Generator Registers 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        namespace Bgr1ValC{
        }
        ///Baud Rate Generator Registers 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
        namespace Bgr0ValC{
        }
    }
    namespace NoneuartFcr1{    ///<FIFO Control Register 1
        using Addr = Register::Address<0x40038015,0xffffffe0,0,unsigned char>;
        ///Re-transmission data lost detect enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flste{}; 
        namespace FlsteValC{
        }
        ///Received FIFO idle detection enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> friie{}; 
        namespace FriieValC{
        }
        ///Transmit FIFO data request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fdrq{}; 
        namespace FdrqValC{
        }
        ///Transmit FIFO interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ftie{}; 
        namespace FtieValC{
        }
        ///FIFO select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fsel{}; 
        namespace FselValC{
        }
    }
    namespace NoneuartFcr0{    ///<FIFO Control Register 0
        using Addr = Register::Address<0x40038014,0xffffff80,0,unsigned char>;
        ///FIFO re-transmit data lost flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> flst{}; 
        namespace FlstValC{
        }
        ///FIFO pointer reload bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fld{}; 
        namespace FldValC{
        }
        ///FIFO pointer save bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fset{}; 
        namespace FsetValC{
        }
        ///FIFO2 reset bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fcl2{}; 
        namespace Fcl2ValC{
        }
        ///FIFO1 reset bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fcl1{}; 
        namespace Fcl1ValC{
        }
        ///FIFO2 operation enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fe2{}; 
        namespace Fe2ValC{
        }
        ///FIFO1 operation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fe1{}; 
        namespace Fe1ValC{
        }
    }
    namespace NoneuartFbyte1{    ///<FIFO Byte Register 1
        using Addr = Register::Address<0x40038018,0xffffffff,0,unsigned char>;
    }
    namespace NoneuartFbyte2{    ///<FIFO Byte Register 2
        using Addr = Register::Address<0x40038019,0xffffffff,0,unsigned char>;
    }
    namespace NonecsioScr{    ///<Serial Control Register
        using Addr = Register::Address<0x40038001,0xffffff00,0,unsigned char>;
        ///Programmable clear bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> upcl{}; 
        namespace UpclValC{
        }
        ///Master/Slave function select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ms{}; 
        namespace MsValC{
        }
        ///SPI corresponding bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> spi{}; 
        namespace SpiValC{
        }
        ///Received interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rie{}; 
        namespace RieValC{
        }
        ///Transmit interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tie{}; 
        namespace TieValC{
        }
        ///Transmit bus idle interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbie{}; 
        namespace TbieValC{
        }
        ///Data received enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxe{}; 
        namespace RxeValC{
        }
        ///Data transmission enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txe{}; 
        namespace TxeValC{
        }
    }
    namespace NonecsioSmr{    ///<Serial Mode Register
        using Addr = Register::Address<0x40038000,0xffffff10,0,unsigned char>;
        ///Operation mode set bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        namespace MdValC{
        }
        ///Serial clock invert bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> scinv{}; 
        namespace ScinvValC{
        }
        ///Transfer direction select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bds{}; 
        namespace BdsValC{
        }
        ///Master mode serial clock output enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scke{}; 
        namespace SckeValC{
        }
        ///Serial data output enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> soe{}; 
        namespace SoeValC{
        }
    }
    namespace NonecsioSsr{    ///<Serial Status Register
        using Addr = Register::Address<0x40038005,0xffffff60,0,unsigned char>;
        ///Received error flag clear bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rec{}; 
        namespace RecValC{
        }
        ///Access Width Control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awc{}; 
        namespace AwcValC{
        }
        ///Overrun error flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ore{}; 
        namespace OreValC{
        }
        ///Received data full flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rdrf{}; 
        namespace RdrfValC{
        }
        ///Transmit data empty flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tdre{}; 
        namespace TdreValC{
        }
        ///Transmit bus idle flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tbi{}; 
        namespace TbiValC{
        }
    }
    namespace NonecsioEscr{    ///<Extended Communication Control Register
        using Addr = Register::Address<0x40038004,0xffffff00,0,unsigned char>;
        ///Serial output pin set bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sop{}; 
        namespace SopValC{
        }
        ///Bit3 of Data length select bits 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> l3{}; 
        namespace L3ValC{
        }
        ///Serial Chip Select Format enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> csfe{}; 
        namespace CsfeValC{
        }
        ///Data transmit/received wait select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> wt{}; 
        namespace WtValC{
        }
        ///Data length select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> l{}; 
        namespace LValC{
        }
    }
    namespace NonecsioRdr{    ///<Received Data Register
        using Addr = Register::Address<0x40038008,0xffff0000,0,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d{}; 
        namespace DValC{
        }
    }
    namespace NonecsioTdr{    ///<Transmit Data Register
        using Addr = Register::Address<0x40038008,0xffff0000,0,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d{}; 
        namespace DValC{
        }
    }
    namespace NonecsioBgr{    ///<Baud Rate Generator Registers
        using Addr = Register::Address<0x4003800c,0xffff8000,0,unsigned>;
        ///Baud Rate Generator Registers 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        namespace Bgr1ValC{
        }
        ///Baud Rate Generator Registers 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
        namespace Bgr0ValC{
        }
    }
    namespace NonecsioFcr1{    ///<FIFO Control Register 1
        using Addr = Register::Address<0x40038015,0xffffffe0,0,unsigned char>;
        ///Re-transmission data lost detect enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flste{}; 
        namespace FlsteValC{
        }
        ///Received FIFO idle detection enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> friie{}; 
        namespace FriieValC{
        }
        ///Transmit FIFO data request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fdrq{}; 
        namespace FdrqValC{
        }
        ///Transmit FIFO interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ftie{}; 
        namespace FtieValC{
        }
        ///FIFO select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fsel{}; 
        namespace FselValC{
        }
    }
    namespace NonecsioFcr0{    ///<FIFO Control Register 0
        using Addr = Register::Address<0x40038014,0xffffff80,0,unsigned char>;
        ///FIFO re-transmit data lost flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> flst{}; 
        namespace FlstValC{
        }
        ///FIFO pointer reload bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fld{}; 
        namespace FldValC{
        }
        ///FIFO pointer save bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fset{}; 
        namespace FsetValC{
        }
        ///FIFO2 reset bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fcl2{}; 
        namespace Fcl2ValC{
        }
        ///FIFO1 reset bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fcl1{}; 
        namespace Fcl1ValC{
        }
        ///FIFO2 operation enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fe2{}; 
        namespace Fe2ValC{
        }
        ///FIFO1 operation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fe1{}; 
        namespace Fe1ValC{
        }
    }
    namespace NonecsioFbyte1{    ///<FIFO Byte Register 1
        using Addr = Register::Address<0x40038018,0xffffffff,0,unsigned char>;
    }
    namespace NonecsioFbyte2{    ///<FIFO Byte Register 2
        using Addr = Register::Address<0x40038019,0xffffffff,0,unsigned char>;
    }
    namespace NonecsioScstr0{    ///<Serial Chip Select Timing Register 0
        using Addr = Register::Address<0x4003801c,0xffffff00,0,unsigned char>;
        ///Serial Chip Select Hold Delay bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cshd{}; 
        namespace CshdValC{
        }
    }
    namespace NonecsioScstr1{    ///<Serial Chip Select Timing Register 1
        using Addr = Register::Address<0x4003801d,0xffffff00,0,unsigned char>;
        ///Serial Chip Select Setup Delay bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cssu{}; 
        namespace CssuValC{
        }
    }
    namespace NonecsioScstr2{    ///<Serial Chip Select Timing Registers 2/3
        using Addr = Register::Address<0x40038020,0xffff0000,0,unsigned>;
        ///Serial Chip Deselect bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> csds{}; 
        namespace CsdsValC{
        }
    }
    namespace NonecsioScstr3{    ///<Serial Chip Select Timing Registers 3
        using Addr = Register::Address<0x40038021,0xffffffff,0,unsigned char>;
    }
    namespace NonecsioSacsr{    ///<Serial Support Control Register
        using Addr = Register::Address<0x40038024,0xffffc620,0,unsigned>;
        ///Transfer Byte Error Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tbeen{}; 
        namespace TbeenValC{
        }
        ///Chip Select Error Interupt Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cseie{}; 
        namespace CseieValC{
        }
        ///Chip Select Error Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cse{}; 
        namespace CseValC{
        }
        ///Timer Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tint{}; 
        namespace TintValC{
        }
        ///Timer Interrupt Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tinte{}; 
        namespace TinteValC{
        }
        ///Synchronous Transmission Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tsyne{}; 
        namespace TsyneValC{
        }
        ///Timer Operation Clock Division bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> tdiv{}; 
        namespace TdivValC{
        }
        ///Serial Timer Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tmre{}; 
        namespace TmreValC{
        }
    }
    namespace NonecsioStmr{    ///<Serial Timer Register
        using Addr = Register::Address<0x40038028,0xffff0000,0,unsigned>;
        ///Timer Data bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tm{}; 
        namespace TmValC{
        }
    }
    namespace NonecsioStmcr{    ///<Serial Timer Comparison Register
        using Addr = Register::Address<0x4003802c,0xffff0000,0,unsigned>;
        ///Compare bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tc{}; 
        namespace TcValC{
        }
    }
    namespace NonecsioScscr{    ///<Serial Chip Select Control Status Register
        using Addr = Register::Address<0x40038030,0xffff0000,0,unsigned>;
        ///Serial Chip Select Active Start bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sst{}; 
        namespace SstValC{
        }
        ///Serial Chip Select Active End bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sed{}; 
        namespace SedValC{
        }
        ///Serial Chip Select Active Display bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> scd{}; 
        namespace ScdValC{
        }
        ///Serial Chip Select Active Hold bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> scam{}; 
        namespace ScamValC{
        }
        ///Serial Chip Select Timing Operation Clock Division bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> cdiv{}; 
        namespace CdivValC{
        }
        ///Serial Chip Select Level Setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cslvl{}; 
        namespace CslvlValC{
        }
        ///Serial Chip Select Enable bit with SCS3 pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> csen3{}; 
        namespace Csen3ValC{
        }
        ///Serial Chip Select Enable bit with SCS2 pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> csen2{}; 
        namespace Csen2ValC{
        }
        ///Serial Chip Select Enable bit with SCS1 pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> csen1{}; 
        namespace Csen1ValC{
        }
        ///Serial Chip Select Enable bit with SCS0 pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> csen0{}; 
        namespace Csen0ValC{
        }
        ///Serial Chip Select Output Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> csoe{}; 
        namespace CsoeValC{
        }
    }
    namespace NonecsioScsfr0{    ///<Serial Chip Select Format Register 0
        using Addr = Register::Address<0x40038034,0xffffff00,0,unsigned char>;
        ///Serial Chip Select 1 Level Setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cs1cslvl{}; 
        namespace Cs1cslvlValC{
        }
        ///Serial Clock Invert bit of Serial Chip Select 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cs1scinv{}; 
        namespace Cs1scinvValC{
        }
        ///SPI corresponding bit of Serial Chip Select 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cs1spi{}; 
        namespace Cs1spiValC{
        }
        ///Transfer direction select bit of Serial Chip Select 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> cs1l{}; 
        namespace Cs1lValC{
        }
    }
    namespace NonecsioScsfr1{    ///<Serial Chip Select Format Register 1
        using Addr = Register::Address<0x40038035,0xffffff00,0,unsigned char>;
        ///Serial Chip Select 2 Level Setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cs2cslvl{}; 
        namespace Cs2cslvlValC{
        }
        ///Serial Clock Invert bit of Serial Chip Select 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cs2scinv{}; 
        namespace Cs2scinvValC{
        }
        ///SPI corresponding bit of Serial Chip Select 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cs2spi{}; 
        namespace Cs2spiValC{
        }
        ///Transfer direction select bit of Serial Chip Select 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> cs2l{}; 
        namespace Cs2lValC{
        }
    }
    namespace NonecsioScsfr2{    ///<Serial Chip Select Format Register 2
        using Addr = Register::Address<0x40038038,0xffffff00,0,unsigned char>;
        ///Serial Chip Select 3 Level Setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cs3cslvl{}; 
        namespace Cs3cslvlValC{
        }
        ///Serial Clock Invert bit of Serial Chip Select 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cs3scinv{}; 
        namespace Cs3scinvValC{
        }
        ///SPI corresponding bit of Serial Chip Select 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cs3spi{}; 
        namespace Cs3spiValC{
        }
        ///Transfer direction select bit of Serial Chip Select 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> cs3l{}; 
        namespace Cs3lValC{
        }
    }
    namespace NonecsioTbyte0{    ///<Transfer Byte Register 0
        using Addr = Register::Address<0x4003803c,0xffffffff,0,unsigned char>;
    }
    namespace NonecsioTbyte1{    ///<Transfer Byte Register 1
        using Addr = Register::Address<0x4003803d,0xffffffff,0,unsigned char>;
    }
    namespace NonecsioTbyte2{    ///<Transfer Byte Register 2
        using Addr = Register::Address<0x40038040,0xffffffff,0,unsigned char>;
    }
    namespace NonecsioTbyte3{    ///<Transfer Byte Register 3
        using Addr = Register::Address<0x40038041,0xffffffff,0,unsigned char>;
    }
    namespace NonelinScr{    ///<Serial Control Register
        using Addr = Register::Address<0x40038001,0xffffff00,0,unsigned char>;
        ///Programmable clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> upcl{}; 
        namespace UpclValC{
        }
        ///Master/Slave function select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ms{}; 
        namespace MsValC{
        }
        ///LIN Break Field setting bit (valid in master mode only) 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lbr{}; 
        namespace LbrValC{
        }
        ///Received interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rie{}; 
        namespace RieValC{
        }
        ///Transmit interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tie{}; 
        namespace TieValC{
        }
        ///Transmit bus idle interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbie{}; 
        namespace TbieValC{
        }
        ///Data reception enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxe{}; 
        namespace RxeValC{
        }
        ///Data transmission enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txe{}; 
        namespace TxeValC{
        }
    }
    namespace NonelinSmr{    ///<Serial Mode Register
        using Addr = Register::Address<0x40038000,0xffffff06,0,unsigned char>;
        ///Operation mode setting bits 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        namespace MdValC{
        }
        ///Wake-up control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wucr{}; 
        namespace WucrValC{
        }
        ///Stop bit length select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sbl{}; 
        namespace SblValC{
        }
        ///Serial data output enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> soe{}; 
        namespace SoeValC{
        }
    }
    namespace NonelinSsr{    ///<Serial Status Register
        using Addr = Register::Address<0x40038005,0xffffff40,0,unsigned char>;
        ///Received Error flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rec{}; 
        namespace RecValC{
        }
        ///LIN Break field detection flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lbd{}; 
        namespace LbdValC{
        }
        ///Framing error flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fre{}; 
        namespace FreValC{
        }
        ///Overrun error flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ore{}; 
        namespace OreValC{
        }
        ///Received data full flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rdrf{}; 
        namespace RdrfValC{
        }
        ///Transmit data empty flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tdre{}; 
        namespace TdreValC{
        }
        ///Transmit bus idle flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tbi{}; 
        namespace TbiValC{
        }
    }
    namespace NonelinEscr{    ///<Extended Communication Control Register
        using Addr = Register::Address<0x40038004,0xffffffa0,0,unsigned char>;
        ///Extended stop bit length select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> esbl{}; 
        namespace EsblValC{
        }
        ///LIN Break field detect interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lbie{}; 
        namespace LbieValC{
        }
        ///LIN Break field length select bits (valid in master mode only) 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> lbl{}; 
        namespace LblValC{
        }
        ///LIN Break delimiter length select bits (valid in master mode only) 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> del{}; 
        namespace DelValC{
        }
    }
    namespace NonelinRdr{    ///<Received Data Register
        using Addr = Register::Address<0x40038008,0xffffff00,0,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> d{}; 
        namespace DValC{
        }
    }
    namespace NonelinTdr{    ///<Transmit Data Register
        using Addr = Register::Address<0x40038008,0xffffff00,0,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> d{}; 
        namespace DValC{
        }
    }
    namespace NonelinBgr{    ///<Baud Rate Generator Registers
        using Addr = Register::Address<0x4003800c,0xffff0000,0,unsigned>;
        ///External clock select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ext{}; 
        namespace ExtValC{
        }
        ///Baud Rate Generator Registers 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        namespace Bgr1ValC{
        }
        ///Baud Rate Generator Registers 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
        namespace Bgr0ValC{
        }
    }
    namespace NonelinFcr1{    ///<FIFO Control Register 1
        using Addr = Register::Address<0x40038015,0xffffffe0,0,unsigned char>;
        ///Re-transmission data lost detect enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flste{}; 
        namespace FlsteValC{
        }
        ///Received FIFO idle detection enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> friie{}; 
        namespace FriieValC{
        }
        ///Transmit FIFO data request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fdrq{}; 
        namespace FdrqValC{
        }
        ///Transmit FIFO interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ftie{}; 
        namespace FtieValC{
        }
        ///FIFO select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fsel{}; 
        namespace FselValC{
        }
    }
    namespace NonelinFcr0{    ///<FIFO Control Register 0
        using Addr = Register::Address<0x40038014,0xffffff80,0,unsigned char>;
        ///FIFO re-transmit data lost flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> flst{}; 
        namespace FlstValC{
        }
        ///FIFO pointer reload bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fld{}; 
        namespace FldValC{
        }
        ///FIFO pointer save bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fset{}; 
        namespace FsetValC{
        }
        ///FIFO2 reset bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fcl2{}; 
        namespace Fcl2ValC{
        }
        ///FIFO1 reset bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fcl1{}; 
        namespace Fcl1ValC{
        }
        ///FIFO2 operation enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fe2{}; 
        namespace Fe2ValC{
        }
        ///FIFO1 operation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fe1{}; 
        namespace Fe1ValC{
        }
    }
    namespace NonelinFbyte1{    ///<FIFO Byte Register 1
        using Addr = Register::Address<0x40038018,0xffffffff,0,unsigned char>;
    }
    namespace NonelinFbyte2{    ///<FIFO Byte Register 2
        using Addr = Register::Address<0x40038019,0xffffffff,0,unsigned char>;
    }
    namespace Nonei2cIbcr{    ///<I2C Bus Control Register
        using Addr = Register::Address<0x40038001,0xffffff00,0,unsigned char>;
        ///Master/slave select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mss{}; 
        namespace MssValC{
        }
        ///Operation flag/iteration start condition generation bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> actScc{}; 
        namespace ActsccValC{
        }
        ///Data byte acknowledge enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> acke{}; 
        namespace AckeValC{
        }
        ///Wait selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wsel{}; 
        namespace WselValC{
        }
        ///Condition detection interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cnde{}; 
        namespace CndeValC{
        }
        ///Interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> inte{}; 
        namespace InteValC{
        }
        ///Bus error flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ber{}; 
        namespace BerValC{
        }
        ///interrupt flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> int_{}; 
        namespace Int_ValC{
        }
    }
    namespace Nonei2cSmr{    ///<Serial Mode Register
        using Addr = Register::Address<0x40038000,0xffffff13,0,unsigned char>;
        ///operation mode set bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        namespace MdValC{
        }
        ///Received interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rie{}; 
        namespace RieValC{
        }
        ///Transmit interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tie{}; 
        namespace TieValC{
        }
    }
    namespace Nonei2cIbsr{    ///<I2C Bus Status Register
        using Addr = Register::Address<0x40038004,0xffffff00,0,unsigned char>;
        ///First byte bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fbt{}; 
        namespace FbtValC{
        }
        ///Acknowledge flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rack{}; 
        namespace RackValC{
        }
        ///Reserved address detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rsa{}; 
        namespace RsaValC{
        }
        ///Data direction bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> trx{}; 
        namespace TrxValC{
        }
        ///Arbitration lost bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> al{}; 
        namespace AlValC{
        }
        ///Iteration start condition check bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rsc{}; 
        namespace RscValC{
        }
        ///Stop condition check bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> spc{}; 
        namespace SpcValC{
        }
        ///Bus state bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bb{}; 
        namespace BbValC{
        }
    }
    namespace Nonei2cSsr{    ///<Serial Status Register 
        using Addr = Register::Address<0x40038005,0xffffff00,0,unsigned char>;
        ///Received error flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rec{}; 
        namespace RecValC{
        }
        ///Transmit empty flag set bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tset{}; 
        namespace TsetValC{
        }
        ///DMA mode enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dma{}; 
        namespace DmaValC{
        }
        ///Transmit bus idle interrupt enable bit (Effective only when DMA mode is enabled) 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tbie{}; 
        namespace TbieValC{
        }
        ///Overrun error flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ore{}; 
        namespace OreValC{
        }
        ///Received data full flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rdrf{}; 
        namespace RdrfValC{
        }
        ///Transmit data empty flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tdre{}; 
        namespace TdreValC{
        }
        ///Transmit bus idle flag bit (Effective only when DMA mode is enabled) 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tbi{}; 
        namespace TbiValC{
        }
    }
    namespace Nonei2cRdr{    ///<Received Data Register
        using Addr = Register::Address<0x40038008,0xffffff00,0,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> d{}; 
        namespace DValC{
        }
    }
    namespace Nonei2cTdr{    ///<Transmit Data Register
        using Addr = Register::Address<0x40038008,0xffffff00,0,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> d{}; 
        namespace DValC{
        }
    }
    namespace Nonei2cBgr{    ///<Baud Rate Generator Registers
        using Addr = Register::Address<0x4003800c,0xffff8000,0,unsigned>;
        ///Baud Rate Generator Registers 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        namespace Bgr1ValC{
        }
        ///Baud Rate Generator Registers 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
        namespace Bgr0ValC{
        }
    }
    namespace Nonei2cIsmk{    ///<7-bit Slave Address Mask Register
        using Addr = Register::Address<0x40038011,0xffffff00,0,unsigned char>;
        ///I2C interface operation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
        ///Slave address mask bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> sm{}; 
        namespace SmValC{
        }
    }
    namespace Nonei2cIsba{    ///<7-bit Slave Address Register
        using Addr = Register::Address<0x40038010,0xffffff00,0,unsigned char>;
        ///Slave address enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> saen{}; 
        namespace SaenValC{
        }
        ///7-bit slave address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> sa{}; 
        namespace SaValC{
        }
    }
    namespace Nonei2cFcr1{    ///<FIFO Control Register 1
        using Addr = Register::Address<0x40038015,0xffffffe0,0,unsigned char>;
        ///Re-transmission data lost detect enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flste{}; 
        namespace FlsteValC{
        }
        ///Received FIFO idle detection enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> friie{}; 
        namespace FriieValC{
        }
        ///Transmit FIFO data request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fdrq{}; 
        namespace FdrqValC{
        }
        ///Transmit FIFO interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ftie{}; 
        namespace FtieValC{
        }
        ///FIFO select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fsel{}; 
        namespace FselValC{
        }
    }
    namespace Nonei2cFcr0{    ///<FIFO Control Register 0
        using Addr = Register::Address<0x40038014,0xffffff80,0,unsigned char>;
        ///FIFO re-transmit data lost flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> flst{}; 
        namespace FlstValC{
        }
        ///FIFO pointer reload bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fld{}; 
        namespace FldValC{
        }
        ///FIFO pointer save bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fset{}; 
        namespace FsetValC{
        }
        ///FIFO2 reset bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fcl2{}; 
        namespace Fcl2ValC{
        }
        ///FIFO1 reset bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fcl1{}; 
        namespace Fcl1ValC{
        }
        ///FIFO2 operation enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fe2{}; 
        namespace Fe2ValC{
        }
        ///FIFO1 operation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fe1{}; 
        namespace Fe1ValC{
        }
    }
    namespace Nonei2cFbyte1{    ///<FIFO Byte Register 1
        using Addr = Register::Address<0x40038018,0xffffffff,0,unsigned char>;
    }
    namespace Nonei2cFbyte2{    ///<FIFO Byte Register 2
        using Addr = Register::Address<0x40038019,0xffffffff,0,unsigned char>;
    }
    namespace Nonei2cNfcr{    ///<Noise Filter Control Register
        using Addr = Register::Address<0x4003801c,0xffffffe0,0,unsigned char>;
        ///Noise Filter Time Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> nft{}; 
        namespace NftValC{
        }
    }
    namespace Nonei2cEibcr{    ///<Extension I2C Bus Control Register
        using Addr = Register::Address<0x4003801d,0xffffffc0,0,unsigned char>;
        ///SDA status bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sdas{}; 
        namespace SdasValC{
        }
        ///SCL status bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> scls{}; 
        namespace SclsValC{
        }
        ///SDA output control bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sdac{}; 
        namespace SdacValC{
        }
        ///SCL output control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sclc{}; 
        namespace SclcValC{
        }
        ///Serial output enabled bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> soce{}; 
        namespace SoceValC{
        }
        ///Bus error control bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bec{}; 
        namespace BecValC{
        }
    }
}
