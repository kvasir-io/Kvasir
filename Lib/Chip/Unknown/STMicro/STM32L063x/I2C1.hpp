#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Inter-integrated circuit
    namespace Nonecr1{    ///<Control register 1
        using Addr = Register::Address<0x40005400,0xff002000,0,unsigned>;
        ///Peripheral enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
        ///TX Interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txie{}; 
        namespace TxieValC{
        }
        ///RX Interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxie{}; 
        namespace RxieValC{
        }
        ///Address match interrupt enable (slave
              only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> addrie{}; 
        namespace AddrieValC{
        }
        ///Not acknowledge received interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nackie{}; 
        namespace NackieValC{
        }
        ///STOP detection Interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stopie{}; 
        namespace StopieValC{
        }
        ///Transfer Complete interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tcie{}; 
        namespace TcieValC{
        }
        ///Error interrupts enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> errie{}; 
        namespace ErrieValC{
        }
        ///Digital noise filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> dnf{}; 
        namespace DnfValC{
        }
        ///Analog noise filter OFF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> anfoff{}; 
        namespace AnfoffValC{
        }
        ///DMA transmission requests
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txdmaen{}; 
        namespace TxdmaenValC{
        }
        ///DMA reception requests
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxdmaen{}; 
        namespace RxdmaenValC{
        }
        ///Slave byte control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sbc{}; 
        namespace SbcValC{
        }
        ///Clock stretching disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nostretch{}; 
        namespace NostretchValC{
        }
        ///Wakeup from STOP enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> wupen{}; 
        namespace WupenValC{
        }
        ///General call enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> gcen{}; 
        namespace GcenValC{
        }
        ///SMBus Host address enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> smbhen{}; 
        namespace SmbhenValC{
        }
        ///SMBus Device Default address
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> smbden{}; 
        namespace SmbdenValC{
        }
        ///SMBUS alert enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> alerten{}; 
        namespace AlertenValC{
        }
        ///PEC enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pecen{}; 
        namespace PecenValC{
        }
    }
    namespace Nonecr2{    ///<Control register 2
        using Addr = Register::Address<0x40005404,0xf8000000,0,unsigned>;
        ///Packet error checking byte
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pecbyte{}; 
        namespace PecbyteValC{
        }
        ///Automatic end mode (master
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> autoend{}; 
        namespace AutoendValC{
        }
        ///NBYTES reload mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> reload{}; 
        namespace ReloadValC{
        }
        ///Number of bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> nbytes{}; 
        namespace NbytesValC{
        }
        ///NACK generation (slave
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nack{}; 
        namespace NackValC{
        }
        ///Stop generation (master
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> stop{}; 
        namespace StopValC{
        }
        ///Start generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> start{}; 
        namespace StartValC{
        }
        ///10-bit address header only read
              direction (master receiver mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> head10r{}; 
        namespace Head10rValC{
        }
        ///10-bit addressing mode (master
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> add10{}; 
        namespace Add10ValC{
        }
        ///Transfer direction (master
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rdWrn{}; 
        namespace RdwrnValC{
        }
        ///Slave address bit (master
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> sadd{}; 
        namespace SaddValC{
        }
    }
    namespace Noneoar1{    ///<Own address register 1
        using Addr = Register::Address<0x40005408,0xffff7800,0,unsigned>;
        ///Interface address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> oa1{}; 
        namespace Oa1ValC{
        }
        ///Own Address 1 10-bit mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oa1mode{}; 
        namespace Oa1modeValC{
        }
        ///Own Address 1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> oa1en{}; 
        namespace Oa1enValC{
        }
    }
    namespace Noneoar2{    ///<Own address register 2
        using Addr = Register::Address<0x4000540c,0xffff7801,0,unsigned>;
        ///Interface address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> oa2{}; 
        namespace Oa2ValC{
        }
        ///Own Address 2 masks
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> oa2msk{}; 
        namespace Oa2mskValC{
        }
        ///Own Address 2 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> oa2en{}; 
        namespace Oa2enValC{
        }
    }
    namespace Nonetimingr{    ///<Timing register
        using Addr = Register::Address<0x40005410,0x0f000000,0,unsigned>;
        ///SCL low period (master
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scll{}; 
        namespace ScllValC{
        }
        ///SCL high period (master
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> sclh{}; 
        namespace SclhValC{
        }
        ///Data hold time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> sdadel{}; 
        namespace SdadelValC{
        }
        ///Data setup time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> scldel{}; 
        namespace ScldelValC{
        }
        ///Timing prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> presc{}; 
        namespace PrescValC{
        }
    }
    namespace Nonetimeoutr{    ///<Status register 1
        using Addr = Register::Address<0x40005414,0x70006000,0,unsigned>;
        ///Bus timeout A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> timeouta{}; 
        namespace TimeoutaValC{
        }
        ///Idle clock timeout
              detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tidle{}; 
        namespace TidleValC{
        }
        ///Clock timeout enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> timouten{}; 
        namespace TimoutenValC{
        }
        ///Bus timeout B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> timeoutb{}; 
        namespace TimeoutbValC{
        }
        ///Extended clock timeout
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> texten{}; 
        namespace TextenValC{
        }
    }
    namespace Noneisr{    ///<Interrupt and Status register
        using Addr = Register::Address<0x40005418,0xff004000,0,unsigned>;
        ///Address match code (Slave
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,17),Register::ReadWriteAccess,unsigned> addcode{}; 
        namespace AddcodeValC{
        }
        ///Transfer direction (Slave
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Bus busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> busy{}; 
        namespace BusyValC{
        }
        ///SMBus alert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> alert{}; 
        namespace AlertValC{
        }
        ///Timeout or t_low detection
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> timeout{}; 
        namespace TimeoutValC{
        }
        ///PEC Error in reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pecerr{}; 
        namespace PecerrValC{
        }
        ///Overrun/Underrun (slave
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ovr{}; 
        namespace OvrValC{
        }
        ///Arbitration lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> arlo{}; 
        namespace ArloValC{
        }
        ///Bus error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> berr{}; 
        namespace BerrValC{
        }
        ///Transfer Complete Reload
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcr{}; 
        namespace TcrValC{
        }
        ///Transfer Complete (master
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tc{}; 
        namespace TcValC{
        }
        ///Stop detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stopf{}; 
        namespace StopfValC{
        }
        ///Not acknowledge received
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nackf{}; 
        namespace NackfValC{
        }
        ///Address matched (slave
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
        ///Receive data register not empty
              (receivers)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxne{}; 
        namespace RxneValC{
        }
        ///Transmit interrupt status
              (transmitters)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txis{}; 
        namespace TxisValC{
        }
        ///Transmit data register empty
              (transmitters)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txe{}; 
        namespace TxeValC{
        }
    }
    namespace Noneicr{    ///<Interrupt clear register
        using Addr = Register::Address<0x4000541c,0xffffc0c7,0,unsigned>;
        ///Alert flag clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> alertcf{}; 
        namespace AlertcfValC{
        }
        ///Timeout detection flag
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> timoutcf{}; 
        namespace TimoutcfValC{
        }
        ///PEC Error flag clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> peccf{}; 
        namespace PeccfValC{
        }
        ///Overrun/Underrun flag
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ovrcf{}; 
        namespace OvrcfValC{
        }
        ///Arbitration lost flag
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> arlocf{}; 
        namespace ArlocfValC{
        }
        ///Bus error flag clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> berrcf{}; 
        namespace BerrcfValC{
        }
        ///Stop detection flag clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stopcf{}; 
        namespace StopcfValC{
        }
        ///Not Acknowledge flag clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nackcf{}; 
        namespace NackcfValC{
        }
        ///Address Matched flag clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> addrcf{}; 
        namespace AddrcfValC{
        }
    }
    namespace Nonepecr{    ///<PEC register
        using Addr = Register::Address<0x40005420,0xffffff00,0,unsigned>;
        ///Packet error checking
              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pec{}; 
        namespace PecValC{
        }
    }
    namespace Nonerxdr{    ///<Receive data register
        using Addr = Register::Address<0x40005424,0xffffff00,0,unsigned>;
        ///8-bit receive data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxdata{}; 
        namespace RxdataValC{
        }
    }
    namespace Nonetxdr{    ///<Transmit data register
        using Addr = Register::Address<0x40005428,0xffffff00,0,unsigned>;
        ///8-bit transmit data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txdata{}; 
        namespace TxdataValC{
        }
    }
}
