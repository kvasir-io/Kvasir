#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//16-bit Deita sigma AD converter
    namespace Dsad0Clk{    ///<DSAD Conversion Clock Setting Register
        using Addr = Register::Address<0x44067000,0xfffffff8,0x00000000,unsigned>;
        ///ADCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> adclk{}; 
    }
    namespace Dsad0Cr0{    ///<DSAD Control Register 0
        using Addr = Register::Address<0x44067004,0xfffffffc,0x00000000,unsigned>;
        ///ADRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrst{}; 
    }
    namespace Dsad0Cr1{    ///<DSAD Control Register 1
        using Addr = Register::Address<0x44067008,0xfffffffc,0x00000000,unsigned>;
        ///MODEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> moden{}; 
        ///BIASEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> biasen{}; 
    }
    namespace Dsad0Cr2{    ///<DSAD Control Register 2
        using Addr = Register::Address<0x4406700c,0xfffffffe,0x00000000,unsigned>;
        ///ADS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ads{}; 
    }
    namespace Dsad0Cr3{    ///<DSAD Control Register 3
        using Addr = Register::Address<0x44067010,0xfffffefe,0x00000000,unsigned>;
        ///REPEAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> repeat{}; 
        ///ADSYNC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> adsync{}; 
    }
    namespace Dsad0Cr4{    ///<DSAD Control Register 4
        using Addr = Register::Address<0x44067014,0xfffffff8,0x00000000,unsigned>;
        ///DSGAIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dsgain{}; 
    }
    namespace Dsad0Adj{    ///<DSAD Adjust Register
        using Addr = Register::Address<0x44067018,0x0000fffe,0x00000000,unsigned>;
        ///ADJ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adj{}; 
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace Dsad0St{    ///<DSAD Status Register
        using Addr = Register::Address<0x4406701c,0xfffffffc,0x00000000,unsigned>;
        ///ADBF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adbf{}; 
        ///EOCF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eocf{}; 
    }
    namespace Dsad0Res{    ///<DSAD Result Register
        using Addr = Register::Address<0x44067020,0x000000fc,0x00000000,unsigned>;
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrf{}; 
        ///ADOVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovr{}; 
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr{}; 
    }
}
