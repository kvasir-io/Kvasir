#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Backup registers
    namespace Nonedr1{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c04,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d1{}; 
        namespace D1ValC{
        }
    }
    namespace Nonedr2{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c08,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d2{}; 
        namespace D2ValC{
        }
    }
    namespace Nonedr3{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c0c,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d3{}; 
        namespace D3ValC{
        }
    }
    namespace Nonedr4{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c10,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d4{}; 
        namespace D4ValC{
        }
    }
    namespace Nonedr5{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c14,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d5{}; 
        namespace D5ValC{
        }
    }
    namespace Nonedr6{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c18,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d6{}; 
        namespace D6ValC{
        }
    }
    namespace Nonedr7{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c1c,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d7{}; 
        namespace D7ValC{
        }
    }
    namespace Nonedr8{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c20,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d8{}; 
        namespace D8ValC{
        }
    }
    namespace Nonedr9{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c24,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d9{}; 
        namespace D9ValC{
        }
    }
    namespace Nonedr10{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c28,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d10{}; 
        namespace D10ValC{
        }
    }
    namespace Nonedr11{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c40,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dr11{}; 
        namespace Dr11ValC{
        }
    }
    namespace Nonedr12{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c44,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dr12{}; 
        namespace Dr12ValC{
        }
    }
    namespace Nonedr13{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c48,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dr13{}; 
        namespace Dr13ValC{
        }
    }
    namespace Nonedr14{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c4c,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d14{}; 
        namespace D14ValC{
        }
    }
    namespace Nonedr15{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c50,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d15{}; 
        namespace D15ValC{
        }
    }
    namespace Nonedr16{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c54,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d16{}; 
        namespace D16ValC{
        }
    }
    namespace Nonedr17{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c58,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d17{}; 
        namespace D17ValC{
        }
    }
    namespace Nonedr18{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c5c,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d18{}; 
        namespace D18ValC{
        }
    }
    namespace Nonedr19{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c60,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d19{}; 
        namespace D19ValC{
        }
    }
    namespace Nonedr20{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c64,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d20{}; 
        namespace D20ValC{
        }
    }
    namespace Nonedr21{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c68,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d21{}; 
        namespace D21ValC{
        }
    }
    namespace Nonedr22{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c6c,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d22{}; 
        namespace D22ValC{
        }
    }
    namespace Nonedr23{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c70,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d23{}; 
        namespace D23ValC{
        }
    }
    namespace Nonedr24{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c74,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d24{}; 
        namespace D24ValC{
        }
    }
    namespace Nonedr25{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c78,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d25{}; 
        namespace D25ValC{
        }
    }
    namespace Nonedr26{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c7c,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d26{}; 
        namespace D26ValC{
        }
    }
    namespace Nonedr27{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c80,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d27{}; 
        namespace D27ValC{
        }
    }
    namespace Nonedr28{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c84,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d28{}; 
        namespace D28ValC{
        }
    }
    namespace Nonedr29{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c88,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d29{}; 
        namespace D29ValC{
        }
    }
    namespace Nonedr30{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c8c,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d30{}; 
        namespace D30ValC{
        }
    }
    namespace Nonedr31{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c90,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d31{}; 
        namespace D31ValC{
        }
    }
    namespace Nonedr32{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c94,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d32{}; 
        namespace D32ValC{
        }
    }
    namespace Nonedr33{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c98,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d33{}; 
        namespace D33ValC{
        }
    }
    namespace Nonedr34{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c9c,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d34{}; 
        namespace D34ValC{
        }
    }
    namespace Nonedr35{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006ca0,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d35{}; 
        namespace D35ValC{
        }
    }
    namespace Nonedr36{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006ca4,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d36{}; 
        namespace D36ValC{
        }
    }
    namespace Nonedr37{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006ca8,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d37{}; 
        namespace D37ValC{
        }
    }
    namespace Nonedr38{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006cac,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d38{}; 
        namespace D38ValC{
        }
    }
    namespace Nonedr39{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006cb0,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d39{}; 
        namespace D39ValC{
        }
    }
    namespace Nonedr40{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006cb4,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d40{}; 
        namespace D40ValC{
        }
    }
    namespace Nonedr41{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006cb8,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d41{}; 
        namespace D41ValC{
        }
    }
    namespace Nonedr42{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006cbc,0xffff0000,0,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d42{}; 
        namespace D42ValC{
        }
    }
    namespace Nonertccr{    ///<RTC clock calibration register
          (BKP_RTCCR)
        using Addr = Register::Address<0x40006c2c,0xfffffc00,0,unsigned>;
        ///Calibration value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> cal{}; 
        namespace CalValC{
        }
        ///Calibration Clock Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cco{}; 
        namespace CcoValC{
        }
        ///Alarm or second output
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> asoe{}; 
        namespace AsoeValC{
        }
        ///Alarm or second output
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> asos{}; 
        namespace AsosValC{
        }
    }
    namespace Nonecr{    ///<Backup control register
          (BKP_CR)
        using Addr = Register::Address<0x40006c30,0xfffffffc,0,unsigned>;
        ///Tamper pin enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tpe{}; 
        namespace TpeValC{
        }
        ///Tamper pin active level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tpal{}; 
        namespace TpalValC{
        }
    }
    namespace Nonecsr{    ///<BKP_CSR control/status register
          (BKP_CSR)
        using Addr = Register::Address<0x40006c34,0xfffffcf8,0,unsigned>;
        ///Clear Tamper event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cte{}; 
        namespace CteValC{
        }
        ///Clear Tamper Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cti{}; 
        namespace CtiValC{
        }
        ///Tamper Pin interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tpie{}; 
        namespace TpieValC{
        }
        ///Tamper Event Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tef{}; 
        namespace TefValC{
        }
        ///Tamper Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tif{}; 
        namespace TifValC{
        }
    }
}
