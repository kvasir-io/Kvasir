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
        ///PE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe{}; 
        ///FE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fe{}; 
        ///OVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///TXE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txe{}; 
        ///RXNE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxne{}; 
        ///CTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cts{}; 
    }
    namespace Nonesc1Uartcr{    ///<Serial controller UART control
          register
        using Addr = Register::Address<0x4000c85c,0xffffff80,0,unsigned>;
        ///AHFCE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ahfce{}; 
        ///HFCE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hfce{}; 
        ///PS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ps{}; 
        ///PCE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pce{}; 
        ///STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> stop{}; 
        ///M
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> m{}; 
        ///nRTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nrts{}; 
    }
    namespace Nonesc1Uartbrr1{    ///<Serial controller UART baud rate register
          1
        using Addr = Register::Address<0x4000c868,0xffff0000,0,unsigned>;
        ///N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> n{}; 
    }
    namespace Nonesc1Uartbrr2{    ///<Serial controller UART baud rate register
          2
        using Addr = Register::Address<0x4000c86c,0xfffffffe,0,unsigned>;
        ///F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> f{}; 
    }
}
