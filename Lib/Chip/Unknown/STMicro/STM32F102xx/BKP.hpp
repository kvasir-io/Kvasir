#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Backup registers
    namespace Nonedr1{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c04,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d1{}; 
    }
    namespace Nonedr2{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c08,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d2{}; 
    }
    namespace Nonedr3{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c0c,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d3{}; 
    }
    namespace Nonedr4{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c10,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d4{}; 
    }
    namespace Nonedr5{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c14,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d5{}; 
    }
    namespace Nonedr6{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c18,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d6{}; 
    }
    namespace Nonedr7{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c1c,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d7{}; 
    }
    namespace Nonedr8{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c20,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d8{}; 
    }
    namespace Nonedr9{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c24,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d9{}; 
    }
    namespace Nonedr10{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c28,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d10{}; 
    }
    namespace Nonedr11{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c40,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dr11{}; 
    }
    namespace Nonedr12{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c44,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dr12{}; 
    }
    namespace Nonedr13{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c48,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dr13{}; 
    }
    namespace Nonedr14{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c4c,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d14{}; 
    }
    namespace Nonedr15{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c50,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d15{}; 
    }
    namespace Nonedr16{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c54,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d16{}; 
    }
    namespace Nonedr17{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c58,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d17{}; 
    }
    namespace Nonedr18{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c5c,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d18{}; 
    }
    namespace Nonedr19{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c60,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d19{}; 
    }
    namespace Nonedr20{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c64,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d20{}; 
    }
    namespace Nonedr21{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c68,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d21{}; 
    }
    namespace Nonedr22{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c6c,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d22{}; 
    }
    namespace Nonedr23{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c70,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d23{}; 
    }
    namespace Nonedr24{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c74,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d24{}; 
    }
    namespace Nonedr25{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c78,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d25{}; 
    }
    namespace Nonedr26{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c7c,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d26{}; 
    }
    namespace Nonedr27{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c80,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d27{}; 
    }
    namespace Nonedr28{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c84,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d28{}; 
    }
    namespace Nonedr29{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c88,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d29{}; 
    }
    namespace Nonedr30{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c8c,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d30{}; 
    }
    namespace Nonedr31{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c90,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d31{}; 
    }
    namespace Nonedr32{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c94,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d32{}; 
    }
    namespace Nonedr33{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c98,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d33{}; 
    }
    namespace Nonedr34{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c9c,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d34{}; 
    }
    namespace Nonedr35{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006ca0,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d35{}; 
    }
    namespace Nonedr36{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006ca4,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d36{}; 
    }
    namespace Nonedr37{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006ca8,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d37{}; 
    }
    namespace Nonedr38{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006cac,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d38{}; 
    }
    namespace Nonedr39{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006cb0,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d39{}; 
    }
    namespace Nonedr40{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006cb4,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d40{}; 
    }
    namespace Nonedr41{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006cb8,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d41{}; 
    }
    namespace Nonedr42{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006cbc,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d42{}; 
    }
    namespace Nonertccr{    ///<RTC clock calibration register
          (BKP_RTCCR)
        using Addr = Register::Address<0x40006c2c,0xfffffc00,0,unsigned>;
        ///Calibration value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> cal{}; 
        ///Calibration Clock Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cco{}; 
        ///Alarm or second output
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> asoe{}; 
        ///Alarm or second output
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> asos{}; 
    }
    namespace Nonecr{    ///<Backup control register
          (BKP_CR)
        using Addr = Register::Address<0x40006c30,0xfffffffc,0,unsigned>;
        ///Tamper pin enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tpe{}; 
        ///Tamper pin active level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tpal{}; 
    }
    namespace Nonecsr{    ///<BKP_CSR control/status register
          (BKP_CSR)
        using Addr = Register::Address<0x40006c34,0xfffffcf8,0,unsigned>;
        ///Clear Tamper event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cte{}; 
        ///Clear Tamper Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cti{}; 
        ///Tamper Pin interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tpie{}; 
        ///Tamper Event Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tef{}; 
        ///Tamper Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tif{}; 
    }
}
