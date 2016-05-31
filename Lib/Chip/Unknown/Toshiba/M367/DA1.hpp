#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Digital-to-Analog Converter (DA)
    namespace Da1Cnt{    ///<DAC Control Register1
        using Addr = Register::Address<0x40055000,0xfffffffc,0x00000000,unsigned>;
        ///OP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> op{}; 
        ///REFON
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> refon{}; 
    }
    namespace Da1Reg{    ///<DAC Data Register
        using Addr = Register::Address<0x40055004,0xffff003f,0x00000000,unsigned>;
        ///DAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> dac{}; 
    }
    namespace Da1Dctl{    ///<DAC Output Register
        using Addr = Register::Address<0x40055008,0xffe0f07c,0x00000000,unsigned>;
        ///WAVE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> wave{}; 
        ///DMAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///TRGEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> trgen{}; 
        ///TRGSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> trgsel{}; 
        ///AMPSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ampsel{}; 
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace Da1Tctl{    ///<DAC Trigger Register
        using Addr = Register::Address<0x4005500c,0xffff7ffe,0x00000000,unsigned>;
        ///SWTRG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swtrg{}; 
        ///DACCLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dacclr{}; 
    }
    namespace Da1Vctl{    ///<DAC Control Register2
        using Addr = Register::Address<0x40055010,0xffffff00,0x00000000,unsigned>;
        ///VHOLDCTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> vholdctf{}; 
        ///VHOLDCTB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> vholdctb{}; 
    }
}
