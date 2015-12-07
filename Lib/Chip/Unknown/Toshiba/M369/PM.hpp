#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PM)
    namespace Nonedata{    ///<PM Data Register
        using Addr = Register::Address<0x400c0c00,0xfffffff0,0,unsigned>;
        ///PM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pm0{}; 
        namespace Pm0ValC{
        }
        ///PM1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pm1{}; 
        namespace Pm1ValC{
        }
        ///PM2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pm2{}; 
        namespace Pm2ValC{
        }
        ///PM3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pm3{}; 
        namespace Pm3ValC{
        }
    }
    namespace Nonecr{    ///<PM Control Register
        using Addr = Register::Address<0x400c0c04,0xfffffff0,0,unsigned>;
        ///PM0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pm0c{}; 
        namespace Pm0cValC{
        }
        ///PM1C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pm1c{}; 
        namespace Pm1cValC{
        }
        ///PM2C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pm2c{}; 
        namespace Pm2cValC{
        }
        ///PM3C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pm3c{}; 
        namespace Pm3cValC{
        }
    }
    namespace Nonefr1{    ///<PM Function Register 1
        using Addr = Register::Address<0x400c0c08,0xfffffff8,0,unsigned>;
        ///PM0F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pm0f1{}; 
        namespace Pm0f1ValC{
        }
        ///PM1F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pm1f1{}; 
        namespace Pm1f1ValC{
        }
        ///PM2F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pm2f1{}; 
        namespace Pm2f1ValC{
        }
    }
    namespace Nonefr2{    ///<PM Function Register 2
        using Addr = Register::Address<0x400c0c0c,0xfffffff0,0,unsigned>;
        ///PM0F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pm0f1{}; 
        namespace Pm0f1ValC{
        }
        ///PM1F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pm1f1{}; 
        namespace Pm1f1ValC{
        }
        ///PM2F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pm2f1{}; 
        namespace Pm2f1ValC{
        }
        ///PM3F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pm3f1{}; 
        namespace Pm3f1ValC{
        }
    }
    namespace Noneod{    ///<PM Open Drain Control Register
        using Addr = Register::Address<0x400c0c28,0xfffffff0,0,unsigned>;
        ///PM0OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pm0od{}; 
        namespace Pm0odValC{
        }
        ///PM1OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pm1od{}; 
        namespace Pm1odValC{
        }
        ///PM2OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pm2od{}; 
        namespace Pm2odValC{
        }
        ///PM3OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pm3od{}; 
        namespace Pm3odValC{
        }
    }
    namespace Nonepup{    ///<PM Pull-Up Control Register
        using Addr = Register::Address<0x400c0c2c,0xfffffff0,0,unsigned>;
        ///PM0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pm0up{}; 
        namespace Pm0upValC{
        }
        ///PM1UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pm1up{}; 
        namespace Pm1upValC{
        }
        ///PM2UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pm2up{}; 
        namespace Pm2upValC{
        }
        ///PM3UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pm3up{}; 
        namespace Pm3upValC{
        }
    }
    namespace Nonepdn{    ///<PM Pull-Down Control Register
        using Addr = Register::Address<0x400c0c30,0xfffffff0,0,unsigned>;
        ///PI0DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pi0dn{}; 
        namespace Pi0dnValC{
        }
        ///PI1DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pi1dn{}; 
        namespace Pi1dnValC{
        }
        ///PI2DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pi2dn{}; 
        namespace Pi2dnValC{
        }
        ///PI3DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pi3dn{}; 
        namespace Pi3dnValC{
        }
    }
    namespace Noneie{    ///<PM Input Enable Control Register
        using Addr = Register::Address<0x400c0c38,0xfffffff0,0,unsigned>;
        ///PM0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pm0ie{}; 
        namespace Pm0ieValC{
        }
        ///PM1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pm1ie{}; 
        namespace Pm1ieValC{
        }
        ///PM2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pm2ie{}; 
        namespace Pm2ieValC{
        }
        ///PM3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pm3ie{}; 
        namespace Pm3ieValC{
        }
    }
}
