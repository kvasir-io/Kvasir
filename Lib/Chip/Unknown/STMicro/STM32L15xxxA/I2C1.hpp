#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Inter-integrated circuit
    namespace Nonecr1{    ///<CR1
        using Addr = Register::Address<0x40005400,0xffff4004,0,unsigned>;
        ///Software reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> swrst{}; 
        namespace SwrstValC{
        }
        ///SMBus alert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> alert{}; 
        namespace AlertValC{
        }
        ///Packet error checking
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pec{}; 
        namespace PecValC{
        }
        ///Acknowledge/PEC Position (for data               reception)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pos{}; 
        namespace PosValC{
        }
        ///Acknowledge enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ack{}; 
        namespace AckValC{
        }
        ///Stop generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stop{}; 
        namespace StopValC{
        }
        ///Start generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> start{}; 
        namespace StartValC{
        }
        ///Clock stretching disable (Slave               mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> nostretch{}; 
        namespace NostretchValC{
        }
        ///General call enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> engc{}; 
        namespace EngcValC{
        }
        ///PEC enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> enpec{}; 
        namespace EnpecValC{
        }
        ///ARP enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> enarp{}; 
        namespace EnarpValC{
        }
        ///SMBus type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> smbtype{}; 
        namespace SmbtypeValC{
        }
        ///SMBus mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> smbus{}; 
        namespace SmbusValC{
        }
        ///Peripheral enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
    }
    namespace Nonecr2{    ///<CR2
        using Addr = Register::Address<0x40005404,0xffffe0c0,0,unsigned>;
        ///DMA last transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> last{}; 
        namespace LastValC{
        }
        ///DMA requests enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dmaen{}; 
        namespace DmaenValC{
        }
        ///Buffer interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> itbufen{}; 
        namespace ItbufenValC{
        }
        ///Event interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> itevten{}; 
        namespace ItevtenValC{
        }
        ///Error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> iterren{}; 
        namespace IterrenValC{
        }
        ///Peripheral clock frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> freq{}; 
        namespace FreqValC{
        }
    }
    namespace Noneoar1{    ///<OAR1
        using Addr = Register::Address<0x40005408,0xffff7c00,0,unsigned>;
        ///ADDMODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> addmode{}; 
        namespace AddmodeValC{
        }
        ///Interface address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> add89{}; 
        namespace Add89ValC{
        }
        ///Interface address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> add17{}; 
        namespace Add17ValC{
        }
        ///Interface address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> add0{}; 
        namespace Add0ValC{
        }
    }
    namespace Noneoar2{    ///<OAR2
        using Addr = Register::Address<0x4000540c,0xffffff00,0,unsigned>;
        ///Interface address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> add2{}; 
        namespace Add2ValC{
        }
        ///Dual addressing mode               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> endual{}; 
        namespace EndualValC{
        }
    }
    namespace Nonedr{    ///<DR
        using Addr = Register::Address<0x40005410,0xffffff00,0,unsigned>;
        ///-bit data register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dr{}; 
        namespace DrValC{
        }
    }
    namespace Nonesr1{    ///<SR1
        using Addr = Register::Address<0x40005414,0xffff2020,0,unsigned>;
        ///SMBus alert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> smbalert{}; 
        namespace SmbalertValC{
        }
        ///Timeout or Tlow error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> timeout{}; 
        namespace TimeoutValC{
        }
        ///PEC Error in reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pecerr{}; 
        namespace PecerrValC{
        }
        ///Overrun/Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ovr{}; 
        namespace OvrValC{
        }
        ///Acknowledge failure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> af{}; 
        namespace AfValC{
        }
        ///Arbitration lost (master               mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> arlo{}; 
        namespace ArloValC{
        }
        ///Bus error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> berr{}; 
        namespace BerrValC{
        }
        ///Data register empty               (transmitters)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txe{}; 
        namespace TxeValC{
        }
        ///Data register not empty               (receivers)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxne{}; 
        namespace RxneValC{
        }
        ///Stop detection (slave               mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> stopf{}; 
        namespace StopfValC{
        }
        ///10-bit header sent (Master               mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> add10{}; 
        namespace Add10ValC{
        }
        ///Byte transfer finished
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btf{}; 
        namespace BtfValC{
        }
        ///Address sent (master mode)/matched               (slave mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
        ///Start bit (Master mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sb{}; 
        namespace SbValC{
        }
    }
    namespace Nonesr2{    ///<SR2
        using Addr = Register::Address<0x40005418,0xffff0008,0,unsigned>;
        ///acket error checking               register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pec{}; 
        namespace PecValC{
        }
        ///Dual flag (Slave mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dualf{}; 
        namespace DualfValC{
        }
        ///SMBus host header (Slave               mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> smbhost{}; 
        namespace SmbhostValC{
        }
        ///SMBus device default address (Slave               mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> smbdefault{}; 
        namespace SmbdefaultValC{
        }
        ///General call address (Slave               mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gencall{}; 
        namespace GencallValC{
        }
        ///Transmitter/receiver
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tra{}; 
        namespace TraValC{
        }
        ///Bus busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> busy{}; 
        namespace BusyValC{
        }
        ///Master/slave
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msl{}; 
        namespace MslValC{
        }
    }
    namespace Noneccr{    ///<CCR
        using Addr = Register::Address<0x4000541c,0xffff3000,0,unsigned>;
        ///I2C master mode selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fS{}; 
        namespace FsValC{
        }
        ///Fast mode duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> duty{}; 
        namespace DutyValC{
        }
        ///Clock control register in Fast/Standard               mode (Master mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ccr{}; 
        namespace CcrValC{
        }
    }
    namespace Nonetrise{    ///<TRISE
        using Addr = Register::Address<0x40005420,0xffffffc0,0,unsigned>;
        ///Maximum rise time in Fast/Standard mode               (Master mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> trise{}; 
        namespace TriseValC{
        }
    }
}
