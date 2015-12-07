#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial controller 1 (Universal Asynchronous
      Receiver/Transmitter)
    namespace Nonesc1Uartsr{    ///<Serial controller UART status
          register
        using Addr = Register::Address<0x4000c848,0xffffff80,0,unsigned>;
        ///IDLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> idle{}; 
        namespace IdleValC{
        }
        ///PE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
        ///FE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fe{}; 
        namespace FeValC{
        }
        ///OVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovr{}; 
        namespace OvrValC{
        }
        ///TXE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txe{}; 
        namespace TxeValC{
        }
        ///RXNE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxne{}; 
        namespace RxneValC{
        }
        ///CTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cts{}; 
        namespace CtsValC{
        }
    }
    namespace Nonesc1Uartcr{    ///<Serial controller UART control
          register
        using Addr = Register::Address<0x4000c85c,0xffffff80,0,unsigned>;
        ///AHFCE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ahfce{}; 
        namespace AhfceValC{
        }
        ///HFCE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hfce{}; 
        namespace HfceValC{
        }
        ///PS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ps{}; 
        namespace PsValC{
        }
        ///PCE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pce{}; 
        namespace PceValC{
        }
        ///STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> stop{}; 
        namespace StopValC{
        }
        ///M
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> m{}; 
        namespace MValC{
        }
        ///nRTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nrts{}; 
        namespace NrtsValC{
        }
    }
    namespace Nonesc1Uartbrr1{    ///<Serial controller UART baud rate register
          1
        using Addr = Register::Address<0x4000c868,0xffff0000,0,unsigned>;
        ///N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> n{}; 
        namespace NValC{
        }
    }
    namespace Nonesc1Uartbrr2{    ///<Serial controller UART baud rate register
          2
        using Addr = Register::Address<0x4000c86c,0xfffffffe,0,unsigned>;
        ///F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> f{}; 
        namespace FValC{
        }
    }
}
