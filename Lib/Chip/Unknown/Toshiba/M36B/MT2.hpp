#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//16-bit Multi-Purpose Timer (MPT-TMR_IGBT)
    namespace Mt2En{    ///<MPT Enable Register
        using Addr = Register::Address<0x400c7200,0xffffff3e,0x00000000,unsigned>;
        ///MTMODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mtmode{}; 
        ///MTHALT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mthalt{}; 
        ///MTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mten{}; 
    }
    namespace Mt2Run{    ///<MPT RUN Register
        using Addr = Register::Address<0x400c7204,0xfffffffa,0x00000000,unsigned>;
        ///MTRUN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mtrun{}; 
        ///MTPRUN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mtprun{}; 
    }
    namespace Mt2Tbcr{    ///<MPT Control Register
        using Addr = Register::Address<0x400c7208,0xffffff74,0x00000000,unsigned>;
        ///MTTBCSSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mttbcssel{}; 
        ///MTTBTRGSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mttbtrgsel{}; 
        ///MTI2TB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mti2tb{}; 
        ///MTTBWBF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mttbwbf{}; 
    }
    namespace Mt2Tbmod{    ///<MPT Mode Register
        using Addr = Register::Address<0x400c720c,0xffffff80,0x00000000,unsigned>;
        ///MTTBCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mttbclk{}; 
        ///MTTBCLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mttbcle{}; 
        ///MTTBCPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> mttbcpm{}; 
        ///MTTBCP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mttbcp{}; 
        ///MTTBRSWR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mttbrswr{}; 
    }
    namespace Mt2Tbffcr{    ///<MPT Flip-Flop Control Register
        using Addr = Register::Address<0x400c7210,0xffffffc0,0x00000000,unsigned>;
        ///MTTBFF0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mttbff0c{}; 
        ///MTTBE0T1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mttbe0t1{}; 
        ///MTTBE1T1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mttbe1t1{}; 
        ///MTTBC0T1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mttbc0t1{}; 
        ///MTTBC1T1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mttbc1t1{}; 
    }
    namespace Mt2Tbst{    ///<MPT Status Register
        using Addr = Register::Address<0x400c7214,0xfffffff8,0x00000000,unsigned>;
        ///MTTBINTTB0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mttbinttb0{}; 
        ///MTTBINTTB1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mttbinttb1{}; 
        ///MTTBINTTBOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mttbinttbof{}; 
    }
    namespace Mt2Tbim{    ///<MPT Interrupt Mask Register
        using Addr = Register::Address<0x400c7218,0xfffffff8,0x00000000,unsigned>;
        ///MTTBIM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mttbim0{}; 
        ///MTTBIM1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mttbim1{}; 
        ///MTTBIMOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mttbimof{}; 
    }
    namespace Mt2Tbuc{    ///<MPT Read Capture Register
        using Addr = Register::Address<0x400c721c,0xffff0000,0x00000000,unsigned>;
        ///MTUC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mtuc{}; 
    }
    namespace Mt2Rg0{    ///<MPT RG0 Timer Register
        using Addr = Register::Address<0x400c7220,0xffff0000,0x00000000,unsigned>;
        ///MTRG0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtrg0{}; 
    }
    namespace Mt2Rg1{    ///<MPT RG1 Timer Register
        using Addr = Register::Address<0x400c7224,0xffff0000,0x00000000,unsigned>;
        ///MTRG1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtrg1{}; 
    }
    namespace Mt2Cp0{    ///<MPT CP0 Capture Register
        using Addr = Register::Address<0x400c7228,0xffff0000,0x00000000,unsigned>;
        ///MTCP0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mtcp0{}; 
    }
    namespace Mt2Cp1{    ///<MPT CP1 Capture Register
        using Addr = Register::Address<0x400c722c,0xffff0000,0x00000000,unsigned>;
        ///MTCP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mtcp1{}; 
    }
    namespace Mt2Igcr{    ///<IGBT Control Register
        using Addr = Register::Address<0x400c7230,0xfffff800,0x00000000,unsigned>;
        ///IGCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> igclk{}; 
        ///IGSTA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> igsta{}; 
        ///IGSTP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> igstp{}; 
        ///IGSNGL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> igsngl{}; 
        ///IGCLSYNC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> igclsync{}; 
        ///IGPRD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> igprd{}; 
        ///IGIDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> igidis{}; 
    }
    namespace Mt2Igresta{    ///<IGBT Timer Restart Register
        using Addr = Register::Address<0x400c7234,0xfffffffe,0x00000000,unsigned>;
        ///IGRESTA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> igresta{}; 
    }
    namespace Mt2Igst{    ///<IGBT Timer Status Register
        using Addr = Register::Address<0x400c7238,0xfffffffe,0x00000000,unsigned>;
        ///IGST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> igst{}; 
    }
    namespace Mt2Igicr{    ///<IGBT Input Control Register
        using Addr = Register::Address<0x400c723c,0xffffff30,0x00000000,unsigned>;
        ///IGNCSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> igncsel{}; 
        ///IGTRGSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> igtrgsel{}; 
        ///IGTRGM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> igtrgm{}; 
    }
    namespace Mt2Igocr{    ///<IGBT Output Control Register
        using Addr = Register::Address<0x400c7240,0xffffffcc,0x00000000,unsigned>;
        ///IGOEN0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> igoen0{}; 
        ///IGOEN1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> igoen1{}; 
        ///IGPOL0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> igpol0{}; 
        ///IGPOL1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> igpol1{}; 
    }
    namespace Mt2Igrg2{    ///<IGBT RG2 Timer Register
        using Addr = Register::Address<0x400c7244,0xffff0000,0x00000000,unsigned>;
        ///IGRG2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> igrg2{}; 
    }
    namespace Mt2Igrg3{    ///<IGBT RG3 Timer Register
        using Addr = Register::Address<0x400c7248,0xffff0000,0x00000000,unsigned>;
        ///IGRG3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> igrg3{}; 
    }
    namespace Mt2Igrg4{    ///<IGBT RG4 Timer Register
        using Addr = Register::Address<0x400c724c,0xffff0000,0x00000000,unsigned>;
        ///IGRG4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> igrg4{}; 
    }
    namespace Mt2Igemgcr{    ///<IGBT EMG Control Register
        using Addr = Register::Address<0x400c7250,0xffffff08,0x00000000,unsigned>;
        ///IGEMGEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> igemgen{}; 
        ///IGEMGOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> igemgoc{}; 
        ///IGEMGRS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> igemgrs{}; 
        ///IGEMGCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> igemgcnt{}; 
    }
    namespace Mt2Igemgst{    ///<IGBT EMG Status Register
        using Addr = Register::Address<0x400c7254,0xfffffffc,0x00000000,unsigned>;
        ///IGEMGST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> igemgst{}; 
        ///IGEMGIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> igemgin{}; 
    }
    namespace Mt2Igtrg{    ///<IGBT Trigger Register
        using Addr = Register::Address<0x400c7258,0xffff0000,0x00000000,unsigned>;
        ///IGTRG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> igtrg{}; 
    }
}
