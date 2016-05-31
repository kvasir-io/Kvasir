#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//16-bit TimerA
    namespace T16a5En{    ///<Enable Register
        using Addr = Register::Address<0x44092000,0xfffffffc,0x00000000,unsigned>;
        ///I2T16A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> i2t16a{}; 
        ///HALT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> halt{}; 
    }
    namespace T16a5Run{    ///<RUN Register
        using Addr = Register::Address<0x44092004,0xfffffffe,0x00000000,unsigned>;
        ///RUN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run{}; 
    }
    namespace T16a5Cr{    ///<Control Register
        using Addr = Register::Address<0x44092008,0xffffff4e,0x00000000,unsigned>;
        ///CLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clk{}; 
        ///FFCR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ffcr{}; 
        ///FFEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ffen{}; 
    }
    namespace T16a5Rg{    ///<Timer Register
        using Addr = Register::Address<0x4409200c,0xffff0000,0x00000000,unsigned>;
        ///RG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rg{}; 
    }
    namespace T16a5Cp{    ///<Capture Register
        using Addr = Register::Address<0x44092010,0xffff0000,0x00000000,unsigned>;
        ///CP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cp{}; 
    }
}
