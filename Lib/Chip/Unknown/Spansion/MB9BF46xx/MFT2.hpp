#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral MFT0 
    namespace Mft2FrtTccp0{    ///< register FRT_TCCP0 
        using Addr = Register::Address<0x40022142,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2FrtTcdt0{    ///< register FRT_TCDT0 
        using Addr = Register::Address<0x40022146,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2FrtTcsa0{    ///< register FRT_TCSA0 
        using Addr = Register::Address<0x40022148,0xffff1c00,0x00000000,unsigned>;
        /// bitfield CLK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> clk{}; 
        /// bitfield SCLR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sclr{}; 
        /// bitfield MODE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mode{}; 
        /// bitfield STOP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stop{}; 
        /// bitfield BFE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bfe{}; 
        /// bitfield ICRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> icre{}; 
        /// bitfield ICLR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> iclr{}; 
        /// bitfield IRQZE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> irqze{}; 
        /// bitfield IRQZF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> irqzf{}; 
        /// bitfield ECKE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ecke{}; 
    }
    namespace Mft2FrtTcsc0{    ///< register FRT_TCSC0 
        using Addr = Register::Address<0x4002214b,0xffff0000,0x00000000,unsigned>;
        /// bitfield MSPC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mspc{}; 
        /// bitfield MSZC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mszc{}; 
        /// bitfield MSPI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> mspi{}; 
        /// bitfield MSZI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mszi{}; 
    }
    namespace Mft2FrtTccp1{    ///< register FRT_TCCP1 
        using Addr = Register::Address<0x4002214e,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2FrtTcdt1{    ///< register FRT_TCDT1 
        using Addr = Register::Address<0x40022152,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2FrtTcsa1{    ///< register FRT_TCSA1 
        using Addr = Register::Address<0x40022154,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2FrtTcsc1{    ///< register FRT_TCSC1 
        using Addr = Register::Address<0x40022156,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2FrtTccp2{    ///< register FRT_TCCP2 
        using Addr = Register::Address<0x4002215a,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2FrtTcdt2{    ///< register FRT_TCDT2 
        using Addr = Register::Address<0x4002215e,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2FrtTcsa2{    ///< register FRT_TCSA2 
        using Addr = Register::Address<0x40022160,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2FrtTcsc2{    ///< register FRT_TCSC2 
        using Addr = Register::Address<0x40022162,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2FrtTcal{    ///< register FRT_TCAL 
        using Addr = Register::Address<0x40022164,0xfe00fe00,0x00000000,unsigned>;
        /// bitfield SCLR22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sclr22{}; 
        /// bitfield SCLR21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sclr21{}; 
        /// bitfield SCLR20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sclr20{}; 
        /// bitfield SCLR12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sclr12{}; 
        /// bitfield SCLR11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sclr11{}; 
        /// bitfield SCLR10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sclr10{}; 
        /// bitfield SCLR02 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sclr02{}; 
        /// bitfield SCLR01 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sclr01{}; 
        /// bitfield SCLR00 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sclr00{}; 
        /// bitfield STOP22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> stop22{}; 
        /// bitfield STOP21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> stop21{}; 
        /// bitfield STOP20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stop20{}; 
        /// bitfield STOP12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stop12{}; 
        /// bitfield STOP11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> stop11{}; 
        /// bitfield STOP10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stop10{}; 
        /// bitfield STOP02 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> stop02{}; 
        /// bitfield STOP01 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> stop01{}; 
        /// bitfield STOP00 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> stop00{}; 
    }
    namespace Mft2OcuOccp0{    ///< register OCU_OCCP0 
        using Addr = Register::Address<0x40022102,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2OcuOccp1{    ///< register OCU_OCCP1 
        using Addr = Register::Address<0x40022106,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2OcuOccp2{    ///< register OCU_OCCP2 
        using Addr = Register::Address<0x4002210a,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2OcuOccp3{    ///< register OCU_OCCP3 
        using Addr = Register::Address<0x4002210e,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2OcuOccp4{    ///< register OCU_OCCP4 
        using Addr = Register::Address<0x40022112,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2OcuOccp5{    ///< register OCU_OCCP5 
        using Addr = Register::Address<0x40022116,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2OcuOcsa10{    ///< register OCU_OCSA10 
        using Addr = Register::Address<0x40022118,0xffffff0c,0x00000000,unsigned char>;
        /// bitfield IOP1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iop1{}; 
        /// bitfield IOP0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> iop0{}; 
        /// bitfield IOE1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ioe1{}; 
        /// bitfield IOE0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ioe0{}; 
        /// bitfield CST1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cst1{}; 
        /// bitfield CST0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cst0{}; 
    }
    namespace Mft2OcuOcsb10{    ///< register OCU_OCSB10 
        using Addr = Register::Address<0x40022119,0xffffff6c,0x00000000,unsigned char>;
        /// bitfield FM4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fm4{}; 
        /// bitfield CMOD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cmod{}; 
        /// bitfield OTD1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> otd1{}; 
        /// bitfield OTD0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otd0{}; 
    }
    namespace Mft2OcuOcsd10{    ///< register OCU_OCSD10 
        using Addr = Register::Address<0x4002211a,0xffffff00,0x00000000,unsigned char>;
        /// bitfield OCSE1BUFE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> ocse1bufe{}; 
        /// bitfield OCSE0BUFE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ocse0bufe{}; 
        /// bitfield OCCP1BUFE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> occp1bufe{}; 
        /// bitfield OCCP0BUFE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> occp0bufe{}; 
    }
    namespace Mft2OcuOcsa32{    ///< register OCU_OCSA32 
        using Addr = Register::Address<0x4002211c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2OcuOcsb32{    ///< register OCU_OCSB32 
        using Addr = Register::Address<0x4002211d,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2OcuOcsd32{    ///< register OCU_OCSD32 
        using Addr = Register::Address<0x4002211e,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2OcuOcsa54{    ///< register OCU_OCSA54 
        using Addr = Register::Address<0x40022120,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2OcuOcsb54{    ///< register OCU_OCSB54 
        using Addr = Register::Address<0x40022121,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2OcuOcsd54{    ///< register OCU_OCSD54 
        using Addr = Register::Address<0x40022122,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2OcuOcsc{    ///< register OCU_OCSC 
        using Addr = Register::Address<0x40022124,0xffffc0ff,0x00000000,unsigned>;
        /// bitfield MOD5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mod5{}; 
        /// bitfield MOD4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mod4{}; 
        /// bitfield MOD3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mod3{}; 
        /// bitfield MOD2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mod2{}; 
        /// bitfield MOD1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mod1{}; 
        /// bitfield MOD0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mod0{}; 
    }
    namespace Mft2OcuOcse0{    ///< register OCU_OCSE0 
        using Addr = Register::Address<0x40022128,0xffffff00,0x00000000,unsigned char>;
        /// bitfield OCSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ocse{}; 
    }
    namespace Mft2OcuOcse1{    ///< register OCU_OCSE1 
        using Addr = Register::Address<0x4002212c,0xffff0000,0x00000000,unsigned>;
        /// bitfield OCSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ocse{}; 
    }
    namespace Mft2OcuOcse2{    ///< register OCU_OCSE2 
        using Addr = Register::Address<0x40022130,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2OcuOcse3{    ///< register OCU_OCSE3 
        using Addr = Register::Address<0x40022134,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2OcuOcse4{    ///< register OCU_OCSE4 
        using Addr = Register::Address<0x40022138,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2OcuOcse5{    ///< register OCU_OCSE5 
        using Addr = Register::Address<0x4002213c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2OcuOcfs10{    ///< register OCU_OCFS10 
        using Addr = Register::Address<0x40022168,0xffffff00,0x00000000,unsigned char>;
        /// bitfield FSO1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> fso1{}; 
        /// bitfield FSO0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fso0{}; 
    }
    namespace Mft2OcuOcfs32{    ///< register OCU_OCFS32 
        using Addr = Register::Address<0x40022169,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2OcuOcfs54{    ///< register OCU_OCFS54 
        using Addr = Register::Address<0x4002216a,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2WfgWftf10{    ///< register WFG_WFTF10 
        using Addr = Register::Address<0x4002218e,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2WfgWfta10{    ///< register WFG_WFTA10 
        using Addr = Register::Address<0x40022190,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mft2WfgWftb10{    ///< register WFG_WFTB10 
        using Addr = Register::Address<0x40022192,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mft2WfgWftf32{    ///< register WFG_WFTF32 
        using Addr = Register::Address<0x40022196,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2WfgWfta32{    ///< register WFG_WFTA32 
        using Addr = Register::Address<0x40022198,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mft2WfgWftb32{    ///< register WFG_WFTB32 
        using Addr = Register::Address<0x4002219a,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mft2WfgWftf54{    ///< register WFG_WFTF54 
        using Addr = Register::Address<0x4002219e,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2WfgWfta54{    ///< register WFG_WFTA54 
        using Addr = Register::Address<0x400221a0,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mft2WfgWftb54{    ///< register WFG_WFTB54 
        using Addr = Register::Address<0x400221a2,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mft2WfgWfsa10{    ///< register WFG_WFSA10 
        using Addr = Register::Address<0x400221a4,0xffffc000,0x00000000,unsigned>;
        /// bitfield DMOD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> dmod{}; 
        /// bitfield PGEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pgen{}; 
        /// bitfield PSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psel{}; 
        /// bitfield GTEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> gten{}; 
        /// bitfield TMD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> tmd{}; 
        /// bitfield DCK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dck{}; 
    }
    namespace Mft2WfgWfsa32{    ///< register WFG_WFSA32 
        using Addr = Register::Address<0x400221a8,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2WfgWfsa54{    ///< register WFG_WFSA54 
        using Addr = Register::Address<0x400221ac,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2WfgWfir{    ///< register WFG_WFIR 
        using Addr = Register::Address<0x400221b0,0xffff0000,0x00000000,unsigned>;
        /// bitfield TMIS54 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tmis54{}; 
        /// bitfield TMIE54 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tmie54{}; 
        /// bitfield TMIC54 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tmic54{}; 
        /// bitfield TMIF54 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tmif54{}; 
        /// bitfield TMIS32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tmis32{}; 
        /// bitfield TMIE32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tmie32{}; 
        /// bitfield TMIC32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tmic32{}; 
        /// bitfield TMIF32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tmif32{}; 
        /// bitfield TMIS10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tmis10{}; 
        /// bitfield TMIE10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tmie10{}; 
        /// bitfield TMIC10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tmic10{}; 
        /// bitfield TMIF10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tmif10{}; 
        /// bitfield DTICB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dticb{}; 
        /// bitfield DTIFB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtifb{}; 
        /// bitfield DTICA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtica{}; 
        /// bitfield DTIFA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtifa{}; 
    }
    namespace Mft2WfgNzcl{    ///< register WFG_NZCL 
        using Addr = Register::Address<0x400221b4,0xffff8cc0,0x00000000,unsigned>;
        /// bitfield WIM54 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wim54{}; 
        /// bitfield WIM32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wim32{}; 
        /// bitfield WIM10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wim10{}; 
        /// bitfield DIMB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dimb{}; 
        /// bitfield DIMA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dima{}; 
        /// bitfield DTIEB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dtieb{}; 
        /// bitfield SDTI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdti{}; 
        /// bitfield NWS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> nws{}; 
        /// bitfield DTIEA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtiea{}; 
    }
    namespace Mft2IcuIcfs10{    ///< register ICU_ICFS10 
        using Addr = Register::Address<0x4002216c,0xffffff00,0x00000000,unsigned char>;
        /// bitfield FSI0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fsi0{}; 
        /// bitfield FSI1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> fsi1{}; 
    }
    namespace Mft2IcuIcfs32{    ///< register ICU_ICFS32 
        using Addr = Register::Address<0x4002216d,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2IcuIccp0{    ///< register ICU_ICCP0 
        using Addr = Register::Address<0x40022176,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2IcuIccp1{    ///< register ICU_ICCP1 
        using Addr = Register::Address<0x4002217a,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2IcuIccp2{    ///< register ICU_ICCP2 
        using Addr = Register::Address<0x4002217e,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2IcuIccp3{    ///< register ICU_ICCP3 
        using Addr = Register::Address<0x40022182,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2IcuIcsa10{    ///< register ICU_ICSA10 
        using Addr = Register::Address<0x40022184,0xffffff00,0x00000000,unsigned char>;
        /// bitfield EG0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eg0{}; 
        /// bitfield EG1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eg1{}; 
        /// bitfield ICE0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ice0{}; 
        /// bitfield ICE1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ice1{}; 
        /// bitfield ICP0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> icp0{}; 
        /// bitfield ICP1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> icp1{}; 
    }
    namespace Mft2IcuIcsb10{    ///< register ICU_ICSB10 
        using Addr = Register::Address<0x40022185,0xfffffffc,0x00000000,unsigned char>;
        /// bitfield IEI0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> iei0{}; 
        /// bitfield IEI1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> iei1{}; 
    }
    namespace Mft2IcuIcsa32{    ///< register ICU_ICSA32 
        using Addr = Register::Address<0x40022188,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2IcuIcsb32{    ///< register ICU_ICSB32 
        using Addr = Register::Address<0x40022189,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2AdcmpAcfs10{    ///< register ADCMP_ACFS10 
        using Addr = Register::Address<0x40022170,0xffffff00,0x00000000,unsigned char>;
        /// bitfield FSA1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> fsa1{}; 
        /// bitfield FSA0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fsa0{}; 
    }
    namespace Mft2AdcmpAcfs32{    ///< register ADCMP_ACFS32 
        using Addr = Register::Address<0x40022171,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2AdcmpAcfs54{    ///< register ADCMP_ACFS54 
        using Addr = Register::Address<0x40022172,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2AdcmpAcmp0{    ///< register ADCMP_ACMP0 
        using Addr = Register::Address<0x400221ba,0xffff0000,0x00000000,unsigned>;
        /// bitfield ACMP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> acmp{}; 
    }
    namespace Mft2AdcmpAcmp1{    ///< register ADCMP_ACMP1 
        using Addr = Register::Address<0x400221be,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2AdcmpAcmp2{    ///< register ADCMP_ACMP2 
        using Addr = Register::Address<0x400221c2,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2AdcmpAcmp3{    ///< register ADCMP_ACMP3 
        using Addr = Register::Address<0x400221c6,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2AdcmpAcmp4{    ///< register ADCMP_ACMP4 
        using Addr = Register::Address<0x400221ca,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2AdcmpAcmp5{    ///< register ADCMP_ACMP5 
        using Addr = Register::Address<0x400221ce,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2AdcmpAcsa{    ///< register ADCMP_ACSA 
        using Addr = Register::Address<0x400221d0,0xffffc0c0,0x00000000,unsigned>;
        /// bitfield SEL54 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sel54{}; 
        /// bitfield SEL32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sel32{}; 
        /// bitfield SEL10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sel10{}; 
        /// bitfield CE54 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ce54{}; 
        /// bitfield CE32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ce32{}; 
        /// bitfield CE10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ce10{}; 
    }
    namespace Mft2AdcmpAcsc0{    ///< register ADCMP_ACSC0 
        using Addr = Register::Address<0x400221d4,0xffffffe0,0x00000000,unsigned char>;
        /// bitfield ADSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> adsel{}; 
        /// bitfield BUFE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> bufe{}; 
    }
    namespace Mft2AdcmpAcsd0{    ///< register ADCMP_ACSD0 
        using Addr = Register::Address<0x400221d5,0xffffff0c,0x00000000,unsigned char>;
        /// bitfield ZE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ze{}; 
        /// bitfield UE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ue{}; 
        /// bitfield PE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe{}; 
        /// bitfield DE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> de{}; 
        /// bitfield OCUS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ocus{}; 
        /// bitfield AMOD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> amod{}; 
    }
    namespace Mft2AdcmpAcsc1{    ///< register ADCMP_ACSC1 
        using Addr = Register::Address<0x400221d8,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2AdcmpAcsd1{    ///< register ADCMP_ACSD1 
        using Addr = Register::Address<0x400221d9,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2AdcmpAcsc2{    ///< register ADCMP_ACSC2 
        using Addr = Register::Address<0x400221dc,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2AdcmpAcsd2{    ///< register ADCMP_ACSD2 
        using Addr = Register::Address<0x400221dd,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2AdcmpAcsc3{    ///< register ADCMP_ACSC3 
        using Addr = Register::Address<0x400221e0,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2AdcmpAcsd3{    ///< register ADCMP_ACSD3 
        using Addr = Register::Address<0x400221e1,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2AdcmpAcsc4{    ///< register ADCMP_ACSC4 
        using Addr = Register::Address<0x400221e4,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2AdcmpAcsd4{    ///< register ADCMP_ACSD4 
        using Addr = Register::Address<0x400221e5,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2AdcmpAcsc5{    ///< register ADCMP_ACSC5 
        using Addr = Register::Address<0x400221e8,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft2AdcmpAcsd5{    ///< register ADCMP_ACSD5 
        using Addr = Register::Address<0x400221e9,0xffffffff,0x00000000,unsigned>;
    }
}
