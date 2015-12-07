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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> clk{}; 
        namespace ClkValC{
        }
        /// bitfield SCLR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sclr{}; 
        namespace SclrValC{
        }
        /// bitfield MODE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mode{}; 
        namespace ModeValC{
        }
        /// bitfield STOP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stop{}; 
        namespace StopValC{
        }
        /// bitfield BFE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bfe{}; 
        namespace BfeValC{
        }
        /// bitfield ICRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> icre{}; 
        namespace IcreValC{
        }
        /// bitfield ICLR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> iclr{}; 
        namespace IclrValC{
        }
        /// bitfield IRQZE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> irqze{}; 
        namespace IrqzeValC{
        }
        /// bitfield IRQZF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> irqzf{}; 
        namespace IrqzfValC{
        }
        /// bitfield ECKE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ecke{}; 
        namespace EckeValC{
        }
    }
    namespace NonefrtTcsc0{    ///< register FRT_TCSC0 
        using Addr = Register::Address<0x4002014b,0xffff0000,0,unsigned>;
        /// bitfield MSPC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> mspc{}; 
        namespace MspcValC{
        }
        /// bitfield MSZC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mszc{}; 
        namespace MszcValC{
        }
        /// bitfield MSPI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> mspi{}; 
        namespace MspiValC{
        }
        /// bitfield MSZI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mszi{}; 
        namespace MsziValC{
        }
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> sclr22{}; 
        namespace Sclr22ValC{
        }
        /// bitfield SCLR21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> sclr21{}; 
        namespace Sclr21ValC{
        }
        /// bitfield SCLR20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sclr20{}; 
        namespace Sclr20ValC{
        }
        /// bitfield SCLR12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> sclr12{}; 
        namespace Sclr12ValC{
        }
        /// bitfield SCLR11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sclr11{}; 
        namespace Sclr11ValC{
        }
        /// bitfield SCLR10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> sclr10{}; 
        namespace Sclr10ValC{
        }
        /// bitfield SCLR02 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> sclr02{}; 
        namespace Sclr02ValC{
        }
        /// bitfield SCLR01 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> sclr01{}; 
        namespace Sclr01ValC{
        }
        /// bitfield SCLR00 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sclr00{}; 
        namespace Sclr00ValC{
        }
        /// bitfield STOP22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> stop22{}; 
        namespace Stop22ValC{
        }
        /// bitfield STOP21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> stop21{}; 
        namespace Stop21ValC{
        }
        /// bitfield STOP20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stop20{}; 
        namespace Stop20ValC{
        }
        /// bitfield STOP12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stop12{}; 
        namespace Stop12ValC{
        }
        /// bitfield STOP11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> stop11{}; 
        namespace Stop11ValC{
        }
        /// bitfield STOP10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stop10{}; 
        namespace Stop10ValC{
        }
        /// bitfield STOP02 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> stop02{}; 
        namespace Stop02ValC{
        }
        /// bitfield STOP01 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> stop01{}; 
        namespace Stop01ValC{
        }
        /// bitfield STOP00 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> stop00{}; 
        namespace Stop00ValC{
        }
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iop1{}; 
        namespace Iop1ValC{
        }
        /// bitfield IOP0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> iop0{}; 
        namespace Iop0ValC{
        }
        /// bitfield IOE1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ioe1{}; 
        namespace Ioe1ValC{
        }
        /// bitfield IOE0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ioe0{}; 
        namespace Ioe0ValC{
        }
        /// bitfield CST1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cst1{}; 
        namespace Cst1ValC{
        }
        /// bitfield CST0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cst0{}; 
        namespace Cst0ValC{
        }
    }
    namespace NoneocuOcsb10{    ///< register OCU_OCSB10 
        using Addr = Register::Address<0x40020119,0xffffff6c,0,unsigned char>;
        /// bitfield FM4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fm4{}; 
        namespace Fm4ValC{
        }
        /// bitfield CMOD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cmod{}; 
        namespace CmodValC{
        }
        /// bitfield OTD1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> otd1{}; 
        namespace Otd1ValC{
        }
        /// bitfield OTD0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otd0{}; 
        namespace Otd0ValC{
        }
    }
    namespace NoneocuOcsd10{    ///< register OCU_OCSD10 
        using Addr = Register::Address<0x4002011a,0xffffff00,0,unsigned char>;
        /// bitfield OCSE1BUFE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> ocse1bufe{}; 
        namespace Ocse1bufeValC{
        }
        /// bitfield OCSE0BUFE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ocse0bufe{}; 
        namespace Ocse0bufeValC{
        }
        /// bitfield OCCP1BUFE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> occp1bufe{}; 
        namespace Occp1bufeValC{
        }
        /// bitfield OCCP0BUFE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> occp0bufe{}; 
        namespace Occp0bufeValC{
        }
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mod5{}; 
        namespace Mod5ValC{
        }
        /// bitfield MOD4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mod4{}; 
        namespace Mod4ValC{
        }
        /// bitfield MOD3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mod3{}; 
        namespace Mod3ValC{
        }
        /// bitfield MOD2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mod2{}; 
        namespace Mod2ValC{
        }
        /// bitfield MOD1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mod1{}; 
        namespace Mod1ValC{
        }
        /// bitfield MOD0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mod0{}; 
        namespace Mod0ValC{
        }
    }
    namespace NoneocuOcse0{    ///< register OCU_OCSE0 
        using Addr = Register::Address<0x40020128,0xffffff00,0,unsigned char>;
        /// bitfield OCSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ocse{}; 
        namespace OcseValC{
        }
    }
    namespace NoneocuOcse1{    ///< register OCU_OCSE1 
        using Addr = Register::Address<0x4002012c,0xffff0000,0,unsigned>;
        /// bitfield OCSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ocse{}; 
        namespace OcseValC{
        }
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> fso1{}; 
        namespace Fso1ValC{
        }
        /// bitfield FSO0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fso0{}; 
        namespace Fso0ValC{
        }
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> dmod{}; 
        namespace DmodValC{
        }
        /// bitfield PGEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pgen{}; 
        namespace PgenValC{
        }
        /// bitfield PSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psel{}; 
        namespace PselValC{
        }
        /// bitfield GTEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> gten{}; 
        namespace GtenValC{
        }
        /// bitfield TMD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> tmd{}; 
        namespace TmdValC{
        }
        /// bitfield DCK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dck{}; 
        namespace DckValC{
        }
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tmis54{}; 
        namespace Tmis54ValC{
        }
        /// bitfield TMIE54 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tmie54{}; 
        namespace Tmie54ValC{
        }
        /// bitfield TMIC54 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tmic54{}; 
        namespace Tmic54ValC{
        }
        /// bitfield TMIF54 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tmif54{}; 
        namespace Tmif54ValC{
        }
        /// bitfield TMIS32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tmis32{}; 
        namespace Tmis32ValC{
        }
        /// bitfield TMIE32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tmie32{}; 
        namespace Tmie32ValC{
        }
        /// bitfield TMIC32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tmic32{}; 
        namespace Tmic32ValC{
        }
        /// bitfield TMIF32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tmif32{}; 
        namespace Tmif32ValC{
        }
        /// bitfield TMIS10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tmis10{}; 
        namespace Tmis10ValC{
        }
        /// bitfield TMIE10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tmie10{}; 
        namespace Tmie10ValC{
        }
        /// bitfield TMIC10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tmic10{}; 
        namespace Tmic10ValC{
        }
        /// bitfield TMIF10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tmif10{}; 
        namespace Tmif10ValC{
        }
        /// bitfield DTICB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dticb{}; 
        namespace DticbValC{
        }
        /// bitfield DTIFB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dtifb{}; 
        namespace DtifbValC{
        }
        /// bitfield DTICA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dtica{}; 
        namespace DticaValC{
        }
        /// bitfield DTIFA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtifa{}; 
        namespace DtifaValC{
        }
    }
    namespace NonewfgNzcl{    ///< register WFG_NZCL 
        using Addr = Register::Address<0x400201b4,0xffff8cc0,0,unsigned>;
        /// bitfield WIM54 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wim54{}; 
        namespace Wim54ValC{
        }
        /// bitfield WIM32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wim32{}; 
        namespace Wim32ValC{
        }
        /// bitfield WIM10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wim10{}; 
        namespace Wim10ValC{
        }
        /// bitfield DIMB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dimb{}; 
        namespace DimbValC{
        }
        /// bitfield DIMA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dima{}; 
        namespace DimaValC{
        }
        /// bitfield DTIEB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dtieb{}; 
        namespace DtiebValC{
        }
        /// bitfield SDTI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sdti{}; 
        namespace SdtiValC{
        }
        /// bitfield NWS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> nws{}; 
        namespace NwsValC{
        }
        /// bitfield DTIEA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtiea{}; 
        namespace DtieaValC{
        }
    }
    namespace NoneicuIcfs10{    ///< register ICU_ICFS10 
        using Addr = Register::Address<0x4002016c,0xffffff00,0,unsigned char>;
        /// bitfield FSI0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fsi0{}; 
        namespace Fsi0ValC{
        }
        /// bitfield FSI1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> fsi1{}; 
        namespace Fsi1ValC{
        }
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eg0{}; 
        namespace Eg0ValC{
        }
        /// bitfield EG1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eg1{}; 
        namespace Eg1ValC{
        }
        /// bitfield ICE0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ice0{}; 
        namespace Ice0ValC{
        }
        /// bitfield ICE1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ice1{}; 
        namespace Ice1ValC{
        }
        /// bitfield ICP0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> icp0{}; 
        namespace Icp0ValC{
        }
        /// bitfield ICP1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> icp1{}; 
        namespace Icp1ValC{
        }
    }
    namespace NoneicuIcsb10{    ///< register ICU_ICSB10 
        using Addr = Register::Address<0x40020185,0xfffffffc,0,unsigned char>;
        /// bitfield IEI0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> iei0{}; 
        namespace Iei0ValC{
        }
        /// bitfield IEI1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iei1{}; 
        namespace Iei1ValC{
        }
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> fsa1{}; 
        namespace Fsa1ValC{
        }
        /// bitfield FSA0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fsa0{}; 
        namespace Fsa0ValC{
        }
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> acmp{}; 
        namespace AcmpValC{
        }
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sel54{}; 
        namespace Sel54ValC{
        }
        /// bitfield SEL32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sel32{}; 
        namespace Sel32ValC{
        }
        /// bitfield SEL10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sel10{}; 
        namespace Sel10ValC{
        }
        /// bitfield CE54 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ce54{}; 
        namespace Ce54ValC{
        }
        /// bitfield CE32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ce32{}; 
        namespace Ce32ValC{
        }
        /// bitfield CE10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ce10{}; 
        namespace Ce10ValC{
        }
    }
    namespace NoneadcmpAcsc0{    ///< register ADCMP_ACSC0 
        using Addr = Register::Address<0x400201d4,0xffffffe0,0,unsigned char>;
        /// bitfield ADSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> adsel{}; 
        namespace AdselValC{
        }
        /// bitfield BUFE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> bufe{}; 
        namespace BufeValC{
        }
    }
    namespace NoneadcmpAcsd0{    ///< register ADCMP_ACSD0 
        using Addr = Register::Address<0x400201d5,0xffffff0c,0,unsigned char>;
        /// bitfield ZE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ze{}; 
        namespace ZeValC{
        }
        /// bitfield UE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ue{}; 
        namespace UeValC{
        }
        /// bitfield PE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
        /// bitfield DE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> de{}; 
        namespace DeValC{
        }
        /// bitfield OCUS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ocus{}; 
        namespace OcusValC{
        }
        /// bitfield AMOD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> amod{}; 
        namespace AmodValC{
        }
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
