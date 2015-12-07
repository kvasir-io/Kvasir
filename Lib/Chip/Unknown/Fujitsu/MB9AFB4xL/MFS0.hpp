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
        using Addr = Register::Address<0x40038000,0xffffff02,0,unsigned char>;
        ///Operation mode set bit
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
        using Addr = Register::Address<0x40038008,0xffffffff,0,unsigned>;
    }
    namespace NoneuartTdr{    ///<Transmit Data Register
        using Addr = Register::Address<0x40038008,0xffffffff,0,unsigned>;
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
        using Addr = Register::Address<0x40038000,0xffffff00,0,unsigned char>;
        ///Operation mode set bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        namespace MdValC{
        }
        ///Wake-up control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wucr{}; 
        namespace WucrValC{
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
        using Addr = Register::Address<0x40038005,0xffffff70,0,unsigned char>;
        ///Received error flag clear bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rec{}; 
        namespace RecValC{
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
        using Addr = Register::Address<0x40038004,0xffffff60,0,unsigned char>;
        ///Serial output pin set bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sop{}; 
        namespace SopValC{
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
        using Addr = Register::Address<0x40038008,0xffffffff,0,unsigned>;
    }
    namespace NonecsioTdr{    ///<Transmit Data Register
        using Addr = Register::Address<0x40038008,0xffffffff,0,unsigned>;
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
        using Addr = Register::Address<0x40038000,0xffffff03,0,unsigned char>;
        ///operation mode set bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        namespace MdValC{
        }
        ///Wake-up control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wucr{}; 
        namespace WucrValC{
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
        using Addr = Register::Address<0x40038008,0xffffffff,0,unsigned>;
    }
    namespace Nonei2cTdr{    ///<Transmit Data Register
        using Addr = Register::Address<0x40038008,0xffffffff,0,unsigned>;
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
