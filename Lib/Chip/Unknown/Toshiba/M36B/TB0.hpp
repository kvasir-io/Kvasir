#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//16-bit Timer_Event Counter (TB)
    namespace Noneen{    ///<TB Enable Register
        using Addr = Register::Address<0x400c4000,0xffffff3f,0,unsigned>;
        ///TBHALT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tbhalt{}; 
        ///TBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tben{}; 
    }
    namespace Nonerun{    ///<TB RUN Register
        using Addr = Register::Address<0x400c4004,0xfffffffa,0,unsigned>;
        ///TBRUN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tbrun{}; 
        ///TBPRUN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbprun{}; 
    }
    namespace Nonecr{    ///<TB Control Register
        using Addr = Register::Address<0x400c4008,0xffffff50,0,unsigned>;
        ///CSSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cssel{}; 
        ///TRGSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trgsel{}; 
        ///TBINSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbinsel{}; 
        ///I2TB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> i2tb{}; 
        ///TBSYNC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tbsync{}; 
        ///TBWBF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tbwbf{}; 
    }
    namespace Nonemod{    ///<TB Mode Register
        using Addr = Register::Address<0x400c400c,0xffffff80,0,unsigned>;
        ///TBCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> tbclk{}; 
        ///TBCLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tbcle{}; 
        ///TBCPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tbcpm{}; 
        ///TBCP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tbcp{}; 
    }
    namespace Noneffcr{    ///<TB Flip-Flop Control Register
        using Addr = Register::Address<0x400c4010,0xffffffc0,0,unsigned>;
        ///TBFF0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> tbff0c{}; 
        ///TBE0T1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbe0t1{}; 
        ///TBE1T1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tbe1t1{}; 
        ///TBC0T1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tbc0t1{}; 
        ///TBC1T1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tbc1t1{}; 
    }
    namespace Nonest{    ///<TB Status Register
        using Addr = Register::Address<0x400c4014,0xfffffff8,0,unsigned>;
        ///INTTB0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inttb0{}; 
        ///INTTB1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inttb1{}; 
        ///INTTBOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> inttbof{}; 
    }
    namespace Noneim{    ///<TB Interrupt Mask Register
        using Addr = Register::Address<0x400c4018,0xfffffff8,0,unsigned>;
        ///TBIM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tbim0{}; 
        ///TBIM1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tbim1{}; 
        ///TBIMOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbimof{}; 
    }
    namespace Noneuc{    ///<TB Read Capture Register
        using Addr = Register::Address<0x400c401c,0xffff0000,0,unsigned>;
        ///UC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> uc{}; 
    }
    namespace Nonerg0{    ///<TB RG0 Timer Register
        using Addr = Register::Address<0x400c4020,0xffff0000,0,unsigned>;
        ///TBRG0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tbrg0{}; 
    }
    namespace Nonerg1{    ///<TB RG1 Timer Register
        using Addr = Register::Address<0x400c4024,0xffff0000,0,unsigned>;
        ///TBRG1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tbrg1{}; 
    }
    namespace Nonecp0{    ///<TB CP0 Capture Register
        using Addr = Register::Address<0x400c4028,0xffff0000,0,unsigned>;
        ///TBCP0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tbcp0{}; 
    }
    namespace Nonecp1{    ///<TB CP1 Capture Register
        using Addr = Register::Address<0x400c402c,0xffff0000,0,unsigned>;
        ///TBCP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tbcp1{}; 
    }
}
