#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral MFT0 
    namespace NonefrtTccp0{    ///< register FRT_TCCP0 
        using Addr = Register::Address<0x40020142,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcdt0{    ///< register FRT_TCDT0 
        using Addr = Register::Address<0x40020146,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcsa0{    ///< register FRT_TCSA0 
        using Addr = Register::Address<0x40020148,0xffff1c00,0,unsigned>;
        /// bitfield CLK 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> clk{}; 
        /// bitfield SCLR 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sclr{}; 
        /// bitfield MODE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mode{}; 
        /// bitfield STOP 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stop{}; 
        /// bitfield BFE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bfe{}; 
        /// bitfield ICRE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> icre{}; 
        /// bitfield ICLR 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> iclr{}; 
        /// bitfield IRQZE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> irqze{}; 
        /// bitfield IRQZF 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> irqzf{}; 
        /// bitfield ECKE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ecke{}; 
    }
    namespace NonefrtTcsc0{    ///< register FRT_TCSC0 
        using Addr = Register::Address<0x4002014b,0xffff0000,0,unsigned>;
        /// bitfield MSPC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> mspc{}; 
        /// bitfield MSZC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mszc{}; 
        /// bitfield MSPI 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> mspi{}; 
        /// bitfield MSZI 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mszi{}; 
    }
    namespace NonefrtTccp1{    ///< register FRT_TCCP1 
        using Addr = Register::Address<0x4002014e,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcdt1{    ///< register FRT_TCDT1 
        using Addr = Register::Address<0x40020152,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcsa1{    ///< register FRT_TCSA1 
        using Addr = Register::Address<0x40020154,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcsc1{    ///< register FRT_TCSC1 
        using Addr = Register::Address<0x40020156,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTccp2{    ///< register FRT_TCCP2 
        using Addr = Register::Address<0x4002015a,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcdt2{    ///< register FRT_TCDT2 
        using Addr = Register::Address<0x4002015e,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcsa2{    ///< register FRT_TCSA2 
        using Addr = Register::Address<0x40020160,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcsc2{    ///< register FRT_TCSC2 
        using Addr = Register::Address<0x40020162,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcal{    ///< register FRT_TCAL 
        using Addr = Register::Address<0x40020164,0xfe00fe00,0,unsigned>;
        /// bitfield SCLR22 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> sclr22{}; 
        /// bitfield SCLR21 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> sclr21{}; 
        /// bitfield SCLR20 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sclr20{}; 
        /// bitfield SCLR12 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> sclr12{}; 
        /// bitfield SCLR11 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sclr11{}; 
        /// bitfield SCLR10 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> sclr10{}; 
        /// bitfield SCLR02 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> sclr02{}; 
        /// bitfield SCLR01 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> sclr01{}; 
        /// bitfield SCLR00 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sclr00{}; 
        /// bitfield STOP22 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> stop22{}; 
        /// bitfield STOP21 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> stop21{}; 
        /// bitfield STOP20 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stop20{}; 
        /// bitfield STOP12 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stop12{}; 
        /// bitfield STOP11 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> stop11{}; 
        /// bitfield STOP10 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stop10{}; 
        /// bitfield STOP02 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> stop02{}; 
        /// bitfield STOP01 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> stop01{}; 
        /// bitfield STOP00 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> stop00{}; 
    }
    namespace NoneocuOccp0{    ///< register OCU_OCCP0 
        using Addr = Register::Address<0x40020102,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOccp1{    ///< register OCU_OCCP1 
        using Addr = Register::Address<0x40020106,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOccp2{    ///< register OCU_OCCP2 
        using Addr = Register::Address<0x4002010a,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOccp3{    ///< register OCU_OCCP3 
        using Addr = Register::Address<0x4002010e,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOccp4{    ///< register OCU_OCCP4 
        using Addr = Register::Address<0x40020112,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOccp5{    ///< register OCU_OCCP5 
        using Addr = Register::Address<0x40020116,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcsa10{    ///< register OCU_OCSA10 
        using Addr = Register::Address<0x40020118,0xffffff0c,0,unsigned char>;
        /// bitfield IOP1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iop1{}; 
        /// bitfield IOP0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> iop0{}; 
        /// bitfield IOE1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ioe1{}; 
        /// bitfield IOE0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ioe0{}; 
        /// bitfield CST1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cst1{}; 
        /// bitfield CST0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cst0{}; 
    }
    namespace NoneocuOcsb10{    ///< register OCU_OCSB10 
        using Addr = Register::Address<0x40020119,0xffffff6c,0,unsigned char>;
        /// bitfield FM4 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fm4{}; 
        /// bitfield CMOD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cmod{}; 
        /// bitfield OTD1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> otd1{}; 
        /// bitfield OTD0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otd0{}; 
    }
    namespace NoneocuOcsd10{    ///< register OCU_OCSD10 
        using Addr = Register::Address<0x4002011a,0xffffff00,0,unsigned char>;
        /// bitfield OCSE1BUFE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> ocse1bufe{}; 
        /// bitfield OCSE0BUFE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ocse0bufe{}; 
        /// bitfield OCCP1BUFE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> occp1bufe{}; 
        /// bitfield OCCP0BUFE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> occp0bufe{}; 
    }
    namespace NoneocuOcsa32{    ///< register OCU_OCSA32 
        using Addr = Register::Address<0x4002011c,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcsb32{    ///< register OCU_OCSB32 
        using Addr = Register::Address<0x4002011d,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcsd32{    ///< register OCU_OCSD32 
        using Addr = Register::Address<0x4002011e,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcsa54{    ///< register OCU_OCSA54 
        using Addr = Register::Address<0x40020120,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcsb54{    ///< register OCU_OCSB54 
        using Addr = Register::Address<0x40020121,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcsd54{    ///< register OCU_OCSD54 
        using Addr = Register::Address<0x40020122,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcsc{    ///< register OCU_OCSC 
        using Addr = Register::Address<0x40020124,0xffffc0ff,0,unsigned>;
        /// bitfield MOD5 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mod5{}; 
        /// bitfield MOD4 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mod4{}; 
        /// bitfield MOD3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mod3{}; 
        /// bitfield MOD2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mod2{}; 
        /// bitfield MOD1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mod1{}; 
        /// bitfield MOD0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mod0{}; 
    }
    namespace NoneocuOcse0{    ///< register OCU_OCSE0 
        using Addr = Register::Address<0x40020128,0xffffff00,0,unsigned char>;
        /// bitfield OCSE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ocse{}; 
    }
    namespace NoneocuOcse1{    ///< register OCU_OCSE1 
        using Addr = Register::Address<0x4002012c,0xffff0000,0,unsigned>;
        /// bitfield OCSE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ocse{}; 
    }
    namespace NoneocuOcse2{    ///< register OCU_OCSE2 
        using Addr = Register::Address<0x40020130,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcse3{    ///< register OCU_OCSE3 
        using Addr = Register::Address<0x40020134,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcse4{    ///< register OCU_OCSE4 
        using Addr = Register::Address<0x40020138,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcse5{    ///< register OCU_OCSE5 
        using Addr = Register::Address<0x4002013c,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcfs10{    ///< register OCU_OCFS10 
        using Addr = Register::Address<0x40020168,0xffffff00,0,unsigned char>;
        /// bitfield FSO1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> fso1{}; 
        /// bitfield FSO0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fso0{}; 
    }
    namespace NoneocuOcfs32{    ///< register OCU_OCFS32 
        using Addr = Register::Address<0x40020169,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcfs54{    ///< register OCU_OCFS54 
        using Addr = Register::Address<0x4002016a,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWftf10{    ///< register WFG_WFTF10 
        using Addr = Register::Address<0x4002018e,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWfta10{    ///< register WFG_WFTA10 
        using Addr = Register::Address<0x40020190,0xffffffff,0,unsigned char>;
    }
    namespace NonewfgWftb10{    ///< register WFG_WFTB10 
        using Addr = Register::Address<0x40020192,0xffffffff,0,unsigned char>;
    }
    namespace NonewfgWftf32{    ///< register WFG_WFTF32 
        using Addr = Register::Address<0x40020196,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWfta32{    ///< register WFG_WFTA32 
        using Addr = Register::Address<0x40020198,0xffffffff,0,unsigned char>;
    }
    namespace NonewfgWftb32{    ///< register WFG_WFTB32 
        using Addr = Register::Address<0x4002019a,0xffffffff,0,unsigned char>;
    }
    namespace NonewfgWftf54{    ///< register WFG_WFTF54 
        using Addr = Register::Address<0x4002019e,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWfta54{    ///< register WFG_WFTA54 
        using Addr = Register::Address<0x400201a0,0xffffffff,0,unsigned char>;
    }
    namespace NonewfgWftb54{    ///< register WFG_WFTB54 
        using Addr = Register::Address<0x400201a2,0xffffffff,0,unsigned char>;
    }
    namespace NonewfgWfsa10{    ///< register WFG_WFSA10 
        using Addr = Register::Address<0x400201a4,0xffffc000,0,unsigned>;
        /// bitfield DMOD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> dmod{}; 
        /// bitfield PGEN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pgen{}; 
        /// bitfield PSEL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psel{}; 
        /// bitfield GTEN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> gten{}; 
        /// bitfield TMD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> tmd{}; 
        /// bitfield DCK 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dck{}; 
    }
    namespace NonewfgWfsa32{    ///< register WFG_WFSA32 
        using Addr = Register::Address<0x400201a8,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWfsa54{    ///< register WFG_WFSA54 
        using Addr = Register::Address<0x400201ac,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWfir{    ///< register WFG_WFIR 
        using Addr = Register::Address<0x400201b0,0xffff0000,0,unsigned>;
        /// bitfield TMIS54 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tmis54{}; 
        /// bitfield TMIE54 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tmie54{}; 
        /// bitfield TMIC54 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tmic54{}; 
        /// bitfield TMIF54 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tmif54{}; 
        /// bitfield TMIS32 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tmis32{}; 
        /// bitfield TMIE32 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tmie32{}; 
        /// bitfield TMIC32 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tmic32{}; 
        /// bitfield TMIF32 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tmif32{}; 
        /// bitfield TMIS10 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tmis10{}; 
        /// bitfield TMIE10 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tmie10{}; 
        /// bitfield TMIC10 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tmic10{}; 
        /// bitfield TMIF10 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tmif10{}; 
        /// bitfield DTICB 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dticb{}; 
        /// bitfield DTIFB 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dtifb{}; 
        /// bitfield DTICA 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dtica{}; 
        /// bitfield DTIFA 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtifa{}; 
    }
    namespace NonewfgNzcl{    ///< register WFG_NZCL 
        using Addr = Register::Address<0x400201b4,0xffff8cc0,0,unsigned>;
        /// bitfield WIM54 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wim54{}; 
        /// bitfield WIM32 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wim32{}; 
        /// bitfield WIM10 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wim10{}; 
        /// bitfield DIMB 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dimb{}; 
        /// bitfield DIMA 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dima{}; 
        /// bitfield DTIEB 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dtieb{}; 
        /// bitfield SDTI 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sdti{}; 
        /// bitfield NWS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> nws{}; 
        /// bitfield DTIEA 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtiea{}; 
    }
    namespace NoneicuIcfs10{    ///< register ICU_ICFS10 
        using Addr = Register::Address<0x4002016c,0xffffff00,0,unsigned char>;
        /// bitfield FSI0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fsi0{}; 
        /// bitfield FSI1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> fsi1{}; 
    }
    namespace NoneicuIcfs32{    ///< register ICU_ICFS32 
        using Addr = Register::Address<0x4002016d,0xffffffff,0,unsigned>;
    }
    namespace NoneicuIccp0{    ///< register ICU_ICCP0 
        using Addr = Register::Address<0x40020176,0xffffffff,0,unsigned>;
    }
    namespace NoneicuIccp1{    ///< register ICU_ICCP1 
        using Addr = Register::Address<0x4002017a,0xffffffff,0,unsigned>;
    }
    namespace NoneicuIccp2{    ///< register ICU_ICCP2 
        using Addr = Register::Address<0x4002017e,0xffffffff,0,unsigned>;
    }
    namespace NoneicuIccp3{    ///< register ICU_ICCP3 
        using Addr = Register::Address<0x40020182,0xffffffff,0,unsigned>;
    }
    namespace NoneicuIcsa10{    ///< register ICU_ICSA10 
        using Addr = Register::Address<0x40020184,0xffffff00,0,unsigned char>;
        /// bitfield EG0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eg0{}; 
        /// bitfield EG1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eg1{}; 
        /// bitfield ICE0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ice0{}; 
        /// bitfield ICE1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ice1{}; 
        /// bitfield ICP0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> icp0{}; 
        /// bitfield ICP1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> icp1{}; 
    }
    namespace NoneicuIcsb10{    ///< register ICU_ICSB10 
        using Addr = Register::Address<0x40020185,0xfffffffc,0,unsigned char>;
        /// bitfield IEI0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> iei0{}; 
        /// bitfield IEI1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iei1{}; 
    }
    namespace NoneicuIcsa32{    ///< register ICU_ICSA32 
        using Addr = Register::Address<0x40020188,0xffffffff,0,unsigned>;
    }
    namespace NoneicuIcsb32{    ///< register ICU_ICSB32 
        using Addr = Register::Address<0x40020189,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcfs10{    ///< register ADCMP_ACFS10 
        using Addr = Register::Address<0x40020170,0xffffff00,0,unsigned char>;
        /// bitfield FSA1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> fsa1{}; 
        /// bitfield FSA0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fsa0{}; 
    }
    namespace NoneadcmpAcfs32{    ///< register ADCMP_ACFS32 
        using Addr = Register::Address<0x40020171,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcfs54{    ///< register ADCMP_ACFS54 
        using Addr = Register::Address<0x40020172,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcmp0{    ///< register ADCMP_ACMP0 
        using Addr = Register::Address<0x400201ba,0xffff0000,0,unsigned>;
        /// bitfield ACMP 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> acmp{}; 
    }
    namespace NoneadcmpAcmp1{    ///< register ADCMP_ACMP1 
        using Addr = Register::Address<0x400201be,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcmp2{    ///< register ADCMP_ACMP2 
        using Addr = Register::Address<0x400201c2,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcmp3{    ///< register ADCMP_ACMP3 
        using Addr = Register::Address<0x400201c6,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcmp4{    ///< register ADCMP_ACMP4 
        using Addr = Register::Address<0x400201ca,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcmp5{    ///< register ADCMP_ACMP5 
        using Addr = Register::Address<0x400201ce,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcsa{    ///< register ADCMP_ACSA 
        using Addr = Register::Address<0x400201d0,0xffffc0c0,0,unsigned>;
        /// bitfield SEL54 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sel54{}; 
        /// bitfield SEL32 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sel32{}; 
        /// bitfield SEL10 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sel10{}; 
        /// bitfield CE54 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ce54{}; 
        /// bitfield CE32 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ce32{}; 
        /// bitfield CE10 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ce10{}; 
    }
    namespace NoneadcmpAcsc0{    ///< register ADCMP_ACSC0 
        using Addr = Register::Address<0x400201d4,0xffffffe0,0,unsigned char>;
        /// bitfield ADSEL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> adsel{}; 
        /// bitfield BUFE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> bufe{}; 
    }
    namespace NoneadcmpAcsd0{    ///< register ADCMP_ACSD0 
        using Addr = Register::Address<0x400201d5,0xffffff0c,0,unsigned char>;
        /// bitfield ZE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ze{}; 
        /// bitfield UE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ue{}; 
        /// bitfield PE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe{}; 
        /// bitfield DE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> de{}; 
        /// bitfield OCUS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ocus{}; 
        /// bitfield AMOD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> amod{}; 
    }
    namespace NoneadcmpAcsc1{    ///< register ADCMP_ACSC1 
        using Addr = Register::Address<0x400201d8,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcsd1{    ///< register ADCMP_ACSD1 
        using Addr = Register::Address<0x400201d9,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcsc2{    ///< register ADCMP_ACSC2 
        using Addr = Register::Address<0x400201dc,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcsd2{    ///< register ADCMP_ACSD2 
        using Addr = Register::Address<0x400201dd,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcsc3{    ///< register ADCMP_ACSC3 
        using Addr = Register::Address<0x400201e0,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcsd3{    ///< register ADCMP_ACSD3 
        using Addr = Register::Address<0x400201e1,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcsc4{    ///< register ADCMP_ACSC4 
        using Addr = Register::Address<0x400201e4,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcsd4{    ///< register ADCMP_ACSD4 
        using Addr = Register::Address<0x400201e5,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcsc5{    ///< register ADCMP_ACSC5 
        using Addr = Register::Address<0x400201e8,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcsd5{    ///< register ADCMP_ACSD5 
        using Addr = Register::Address<0x400201e9,0xffffffff,0,unsigned>;
    }
}
