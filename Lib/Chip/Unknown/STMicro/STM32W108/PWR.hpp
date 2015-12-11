#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Power control
    namespace NonepwrDsleepcr1{    ///<PWR_DSLEEPCR1
        using Addr = Register::Address<0x40000004,0xfffffffd,0,unsigned>;
        ///PWR_CSYSPWRUPACKCR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pwrCsyspwrupackcr{}; 
    }
    namespace NonepwrDsleepcr2{    ///<PWR_DSLEEPCR2
        using Addr = Register::Address<0x40000014,0xfffffffe,0,unsigned>;
        ///MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mode{}; 
    }
    namespace NonepwrVregcr{    ///<Voltage regulator Control
          register
        using Addr = Register::Address<0x40000018,0xffff7468,0,unsigned>;
        ///1V2 regulator trim value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> pwrVregcr1v2trim{}; 
        ///1V2 direct controle of regulator
              on/off
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pwrVregcr1v2en{}; 
        ///1V8 regulator trim value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,7),Register::ReadWriteAccess,unsigned> pwrVregcr1v8trim{}; 
        ///1V8 direct controle of regulator
              on/off
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pwrVregcr1v8en{}; 
        ///VREF on/off
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pwrVregcrVrefen{}; 
    }
    namespace NonepwrWakecr1{    ///<PWR_WAKECR1
        using Addr = Register::Address<0x40000020,0xfffffc00,0,unsigned>;
        ///WAKEEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wakeen{}; 
        ///SC1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sc1{}; 
        ///SC2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sc2{}; 
        ///IRQD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> irqd{}; 
        ///COMPA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> compa{}; 
        ///COMPB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> compb{}; 
        ///WRAP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wrap{}; 
        ///CORE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> core{}; 
        ///CPWRRUPREQ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cpwrrupreq{}; 
        ///CSYSPWRUPREQ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> csyspwrupreq{}; 
    }
    namespace NonepwrWakecr2{    ///<PWR_WAKECR2
        using Addr = Register::Address<0x40000024,0xffffffdf,0,unsigned>;
        ///COREWAKE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> corewake{}; 
    }
    namespace NonepwrWakesr{    ///<PWR_WAKESR
        using Addr = Register::Address<0x40000028,0xfffffc00,0,unsigned>;
        ///GPIOPIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpiopin{}; 
        ///SC1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sc1{}; 
        ///SC2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sc2{}; 
        ///IRQD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> irqd{}; 
        ///COMPA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> compa{}; 
        ///COMPB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> compb{}; 
        ///WRAP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wrap{}; 
        ///CORE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> core{}; 
        ///CPWRRUPREQ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cpwrrupreq{}; 
        ///CSYSPWRUPREQ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> csyspwrupreq{}; 
    }
    namespace NonepwrCpwrupreqsr{    ///<PWR_CPWRUPREQSR
        using Addr = Register::Address<0x40000034,0xfffffffe,0,unsigned>;
        ///REQ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> req{}; 
    }
    namespace NonepwrCsyspwrupreqsr{    ///<PWR_CSYSPWRUPREQSR
        using Addr = Register::Address<0x40000038,0xfffffffe,0,unsigned>;
        ///REQ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> req{}; 
    }
    namespace NonepwrCsyspwrupacksr{    ///<PWR_CSYSPWRUPACKSR
        using Addr = Register::Address<0x4000003c,0xfffffffe,0,unsigned>;
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ack{}; 
    }
    namespace NonepwrCsyspwrupackcr{    ///<PWR_CSYSPWRUPACKCR
        using Addr = Register::Address<0x40000040,0xfffffffe,0,unsigned>;
        ///INHIBIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inhibit{}; 
    }
    namespace NonepwrWakepar{    ///<Wake GPIO Port A register
        using Addr = Register::Address<0x4000bc08,0xffffff00,0,unsigned>;
        ///PA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pa0{}; 
        ///PA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pa1{}; 
        ///PA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pa2{}; 
        ///PA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pa3{}; 
        ///PA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pa4{}; 
        ///PA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pa5{}; 
        ///PA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pa6{}; 
        ///PA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pa7{}; 
    }
    namespace NonepwrWakepbr{    ///<Wake GPIO Port B register
        using Addr = Register::Address<0x4000bc0c,0xffffff00,0,unsigned>;
        ///PB0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pb0{}; 
        ///PB1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pb1{}; 
        ///PB2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pb2{}; 
        ///PB3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pb3{}; 
        ///PB4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pb4{}; 
        ///PB5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pb5{}; 
        ///PB6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pb6{}; 
        ///PB7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pb7{}; 
    }
    namespace NonepwrWakepcr{    ///<Wake GPIO Port C register
        using Addr = Register::Address<0x4000bc10,0xffffff00,0,unsigned>;
        ///PC0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pc0{}; 
        ///PC1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pc1{}; 
        ///PC2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pc2{}; 
        ///PC3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pc3{}; 
        ///PC4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pc4{}; 
        ///PC5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pc5{}; 
        ///PC6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pc6{}; 
        ///PC7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pc7{}; 
    }
    namespace NonepwrWakefiltr{    ///<Wake filter register
        using Addr = Register::Address<0x4000bc1c,0xfffffff0,0,unsigned>;
        ///Enable filter on GPIO wakeup sources
              enabled by the PWR_WAKEPxR registers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpio{}; 
        ///Enable filter on GPIO wakeup source SC1
              (PB2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sc1{}; 
        ///Enable filter on GPIO wakeup source SC2
              (PA2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sc2{}; 
        ///Enable filter on GPIO wakeup source EXTI
              D
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> irqd{}; 
    }
}
