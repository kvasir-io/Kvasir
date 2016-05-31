#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//16-bit Timer_Event Counter (TB)
    namespace Tb1En{    ///<TB Enable Register
        using Addr = Register::Address<0x400c4100,0xffffff3f,0x00000000,unsigned>;
        ///TBHALT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tbhalt{}; 
        ///TBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tben{}; 
    }
    namespace Tb1Run{    ///<TB RUN Register
        using Addr = Register::Address<0x400c4104,0xfffffffa,0x00000000,unsigned>;
        ///TBRUN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tbrun{}; 
        ///TBPRUN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbprun{}; 
    }
    namespace Tb1Cr{    ///<TB Control Register
        using Addr = Register::Address<0x400c4108,0xffffff50,0x00000000,unsigned>;
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
    namespace Tb1Mod{    ///<TB Mode Register
        using Addr = Register::Address<0x400c410c,0xffffff80,0x00000000,unsigned>;
        ///TBCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> tbclk{}; 
        ///TBCLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tbcle{}; 
        ///TBCPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tbcpm{}; 
        ///TBCP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tbcp{}; 
    }
    namespace Tb1Ffcr{    ///<TB Flip-Flop Control Register
        using Addr = Register::Address<0x400c4110,0xffffffc0,0x00000000,unsigned>;
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
    namespace Tb1St{    ///<TB Status Register
        using Addr = Register::Address<0x400c4114,0xfffffff8,0x00000000,unsigned>;
        ///INTTB0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> inttb0{}; 
        ///INTTB1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> inttb1{}; 
        ///INTTBOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> inttbof{}; 
    }
    namespace Tb1Im{    ///<TB Interrupt Mask Register
        using Addr = Register::Address<0x400c4118,0xfffffff8,0x00000000,unsigned>;
        ///TBIM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tbim0{}; 
        ///TBIM1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tbim1{}; 
        ///TBIMOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbimof{}; 
    }
    namespace Tb1Uc{    ///<TB Read Capture Register
        using Addr = Register::Address<0x400c411c,0xffff0000,0x00000000,unsigned>;
        ///TBUC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tbuc{}; 
    }
    namespace Tb1Rg0{    ///<TB RG0 Timer Register
        using Addr = Register::Address<0x400c4120,0xffff0000,0x00000000,unsigned>;
        ///TBRG0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tbrg0{}; 
    }
    namespace Tb1Rg1{    ///<TB RG1 Timer Register
        using Addr = Register::Address<0x400c4124,0xffff0000,0x00000000,unsigned>;
        ///TBRG1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tbrg1{}; 
    }
    namespace Tb1Cp0{    ///<TB CP0 Capture Register
        using Addr = Register::Address<0x400c4128,0xffff0000,0x00000000,unsigned>;
        ///TBCP0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tbcp0{}; 
    }
    namespace Tb1Cp1{    ///<TB CP1 Capture Register
        using Addr = Register::Address<0x400c412c,0xffff0000,0x00000000,unsigned>;
        ///TBCP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tbcp1{}; 
    }
    namespace Tb1Dma{    ///<TB DMA Enable Register
        using Addr = Register::Address<0x400c4130,0xfffffff8,0x00000000,unsigned>;
        ///DMAEN0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaen0{}; 
        ///DMAEN1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmaen1{}; 
        ///DMAEN2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmaen2{}; 
    }
}
