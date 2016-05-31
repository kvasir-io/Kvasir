#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Backup registers
    namespace BkpDr1{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c04,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d1{}; 
    }
    namespace BkpDr2{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c08,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d2{}; 
    }
    namespace BkpDr3{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c0c,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d3{}; 
    }
    namespace BkpDr4{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c10,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d4{}; 
    }
    namespace BkpDr5{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c14,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d5{}; 
    }
    namespace BkpDr6{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c18,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d6{}; 
    }
    namespace BkpDr7{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c1c,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d7{}; 
    }
    namespace BkpDr8{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c20,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d8{}; 
    }
    namespace BkpDr9{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c24,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d9{}; 
    }
    namespace BkpDr10{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c28,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d10{}; 
    }
    namespace BkpDr11{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c40,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dr11{}; 
    }
    namespace BkpDr12{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c44,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dr12{}; 
    }
    namespace BkpDr13{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c48,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dr13{}; 
    }
    namespace BkpDr14{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c4c,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d14{}; 
    }
    namespace BkpDr15{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c50,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d15{}; 
    }
    namespace BkpDr16{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c54,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d16{}; 
    }
    namespace BkpDr17{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c58,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d17{}; 
    }
    namespace BkpDr18{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c5c,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d18{}; 
    }
    namespace BkpDr19{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c60,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d19{}; 
    }
    namespace BkpDr20{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c64,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d20{}; 
    }
    namespace BkpDr21{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c68,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d21{}; 
    }
    namespace BkpDr22{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c6c,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d22{}; 
    }
    namespace BkpDr23{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c70,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d23{}; 
    }
    namespace BkpDr24{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c74,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d24{}; 
    }
    namespace BkpDr25{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c78,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d25{}; 
    }
    namespace BkpDr26{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c7c,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d26{}; 
    }
    namespace BkpDr27{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c80,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d27{}; 
    }
    namespace BkpDr28{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c84,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d28{}; 
    }
    namespace BkpDr29{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c88,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d29{}; 
    }
    namespace BkpDr30{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c8c,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d30{}; 
    }
    namespace BkpDr31{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c90,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d31{}; 
    }
    namespace BkpDr32{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c94,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d32{}; 
    }
    namespace BkpDr33{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c98,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d33{}; 
    }
    namespace BkpDr34{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006c9c,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d34{}; 
    }
    namespace BkpDr35{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006ca0,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d35{}; 
    }
    namespace BkpDr36{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006ca4,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d36{}; 
    }
    namespace BkpDr37{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006ca8,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d37{}; 
    }
    namespace BkpDr38{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006cac,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d38{}; 
    }
    namespace BkpDr39{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006cb0,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d39{}; 
    }
    namespace BkpDr40{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006cb4,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d40{}; 
    }
    namespace BkpDr41{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006cb8,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d41{}; 
    }
    namespace BkpDr42{    ///<Backup data register (BKP_DR)
        using Addr = Register::Address<0x40006cbc,0xffff0000,0x00000000,unsigned>;
        ///Backup data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d42{}; 
    }
    namespace BkpRtccr{    ///<RTC clock calibration register          (BKP_RTCCR)
        using Addr = Register::Address<0x40006c2c,0xfffffc00,0x00000000,unsigned>;
        ///Calibration value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> cal{}; 
        ///Calibration Clock Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cco{}; 
        ///Alarm or second output              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> asoe{}; 
        ///Alarm or second output              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> asos{}; 
    }
    namespace BkpCr{    ///<Backup control register          (BKP_CR)
        using Addr = Register::Address<0x40006c30,0xfffffffc,0x00000000,unsigned>;
        ///Tamper pin enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tpe{}; 
        ///Tamper pin active level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tpal{}; 
    }
    namespace BkpCsr{    ///<BKP_CSR control/status register          (BKP_CSR)
        using Addr = Register::Address<0x40006c34,0xfffffcf8,0x00000000,unsigned>;
        ///Clear Tamper event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cte{}; 
        ///Clear Tamper Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cti{}; 
        ///Tamper Pin interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tpie{}; 
        ///Tamper Event Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tef{}; 
        ///Tamper Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tif{}; 
    }
}
