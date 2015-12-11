#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PM)
    namespace Nonedata{    ///<PM Data Register
        using Addr = Register::Address<0x400c0c00,0xfffffff0,0,unsigned>;
        ///PM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pm0{}; 
        ///PM1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pm1{}; 
        ///PM2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pm2{}; 
        ///PM3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pm3{}; 
    }
    namespace Nonecr{    ///<PM Control Register
        using Addr = Register::Address<0x400c0c04,0xfffffff0,0,unsigned>;
        ///PM0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pm0c{}; 
        ///PM1C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pm1c{}; 
        ///PM2C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pm2c{}; 
        ///PM3C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pm3c{}; 
    }
    namespace Nonefr1{    ///<PM Function Register 1
        using Addr = Register::Address<0x400c0c08,0xfffffff8,0,unsigned>;
        ///PM0F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pm0f1{}; 
        ///PM1F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pm1f1{}; 
        ///PM2F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pm2f1{}; 
    }
    namespace Nonefr2{    ///<PM Function Register 2
        using Addr = Register::Address<0x400c0c0c,0xfffffff0,0,unsigned>;
        ///PM0F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pm0f1{}; 
        ///PM1F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pm1f1{}; 
        ///PM2F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pm2f1{}; 
        ///PM3F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pm3f1{}; 
    }
    namespace Noneod{    ///<PM Open Drain Control Register
        using Addr = Register::Address<0x400c0c28,0xfffffff0,0,unsigned>;
        ///PM0OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pm0od{}; 
        ///PM1OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pm1od{}; 
        ///PM2OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pm2od{}; 
        ///PM3OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pm3od{}; 
    }
    namespace Nonepup{    ///<PM Pull-Up Control Register
        using Addr = Register::Address<0x400c0c2c,0xfffffff0,0,unsigned>;
        ///PM0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pm0up{}; 
        ///PM1UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pm1up{}; 
        ///PM2UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pm2up{}; 
        ///PM3UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pm3up{}; 
    }
    namespace Nonepdn{    ///<PM Pull-Down Control Register
        using Addr = Register::Address<0x400c0c30,0xfffffff0,0,unsigned>;
        ///PI0DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pi0dn{}; 
        ///PI1DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pi1dn{}; 
        ///PI2DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pi2dn{}; 
        ///PI3DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pi3dn{}; 
    }
    namespace Noneie{    ///<PM Input Enable Control Register
        using Addr = Register::Address<0x400c0c38,0xfffffff0,0,unsigned>;
        ///PM0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pm0ie{}; 
        ///PM1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pm1ie{}; 
        ///PM2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pm2ie{}; 
        ///PM3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pm3ie{}; 
    }
}
