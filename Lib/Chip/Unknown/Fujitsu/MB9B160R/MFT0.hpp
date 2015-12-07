#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Multifunction Timer 0
    namespace NonefrtTccp0{    ///<FRT-ch.0 Cycle Setting Register
        using Addr = Register::Address<0x40020142,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcdt0{    ///<FRT-ch.0 Count Value Register
        using Addr = Register::Address<0x40020146,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcsa0{    ///<FRT-ch.0 Control Register A
        using Addr = Register::Address<0x40020148,0xffff1c00,0,unsigned>;
        ///Uses an external input clock (FRCK) as FRT's count clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ecke{}; 
        namespace EckeValC{
        }
        ///zero interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> irqzf{}; 
        namespace IrqzfValC{
        }
        ///"Generates interrupt@ when ""1"" is set to TCSA.IRQZF"
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> irqze{}; 
        namespace IrqzeValC{
        }
        ///interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> iclr{}; 
        namespace IclrValC{
        }
        ///"Generates interrupt when ""1"" is set to TCSA.ICLR"
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> icre{}; 
        namespace IcreValC{
        }
        ///Enables TCCP's buffer function
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bfe{}; 
        namespace BfeValC{
        }
        ///Puts FRT in stopping state
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stop{}; 
        namespace StopValC{
        }
        ///FRT's count mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mode{}; 
        namespace ModeValC{
        }
        ///FRT operation state initialization request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sclr{}; 
        namespace SclrValC{
        }
        ///FRT clock cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> clk{}; 
        namespace ClkValC{
        }
    }
    namespace NonefrtTcsc0{    ///<FRT-ch.0 Control Register C
        using Addr = Register::Address<0x4002014a,0xffff0000,0,unsigned>;
        ///Current counter value of a Peak value detection mask counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> mspc{}; 
        namespace MspcValC{
        }
        ///Current counter value of a Zero value detection mask counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mszc{}; 
        namespace MszcValC{
        }
        ///Masked Peak value detection number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> mspi{}; 
        namespace MspiValC{
        }
        ///Masked Zero value detection number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mszi{}; 
        namespace MsziValC{
        }
    }
    namespace NonefrtTccp1{    ///<FRT-ch.1 Cycle Setting Register
        using Addr = Register::Address<0x4002014e,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcdt1{    ///<FRT-ch.1 Count Value Register
        using Addr = Register::Address<0x40020152,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcsa1{    ///<FRT-ch.1 Control Register A
        using Addr = Register::Address<0x40020154,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcsc1{    ///<FRT-ch.1 Control Register C
        using Addr = Register::Address<0x40020156,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTccp2{    ///<FRT-ch.2 Cycle Setting Register
        using Addr = Register::Address<0x4002015a,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcdt2{    ///<FRT-ch.2 Count Value Register
        using Addr = Register::Address<0x4002015e,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcsa2{    ///<FRT-ch.2 Control Register A
        using Addr = Register::Address<0x40020160,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcsc2{    ///<FRT-ch.2 Control Register C
        using Addr = Register::Address<0x40020162,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcal{    ///<FRT Simultaneous Start Control Register
        using Addr = Register::Address<0x40020164,0xfe00fe00,0,unsigned>;
        ///Mirror register of the SCLR bit located in TCSA2 register of MFT-unit2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> sclr22{}; 
        namespace Sclr22ValC{
        }
        ///Mirror register of the SCLR bit located in TCSA1 register of MFT-unit2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> sclr21{}; 
        namespace Sclr21ValC{
        }
        ///Mirror register of the SCLR bit located in TCSA0 register of MFT-unit2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sclr20{}; 
        namespace Sclr20ValC{
        }
        ///Mirror register of the SCLR bit located in TCSA2 register of MFT-unit1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> sclr12{}; 
        namespace Sclr12ValC{
        }
        ///Mirror register of the SCLR bit located in TCSA1 register of MFT-unit1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sclr11{}; 
        namespace Sclr11ValC{
        }
        ///Mirror register of the SCLR bit located in TCSA0 register of MFT-unit1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> sclr10{}; 
        namespace Sclr10ValC{
        }
        ///Mirror register of the SCLR bit located in TCSA2 register of MFT-unit0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> sclr02{}; 
        namespace Sclr02ValC{
        }
        ///Mirror register of the SCLR bit located in TCSA1 register of MFT-unit0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> sclr01{}; 
        namespace Sclr01ValC{
        }
        ///Mirror register of the SCLR bit located in TCSA0 register of MFT-unit0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sclr00{}; 
        namespace Sclr00ValC{
        }
        ///Mirror register of the STOP bit located in TCSA2 register of MFT-unit2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> stop22{}; 
        namespace Stop22ValC{
        }
        ///Mirror register of the STOP bit located in TCSA1 register of MFT-unit2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> stop21{}; 
        namespace Stop21ValC{
        }
        ///Mirror register of the STOP bit located in TCSA0 register of MFT-unit2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stop20{}; 
        namespace Stop20ValC{
        }
        ///Mirror register of the STOP bit located in TCSA2 register of MFT-unit1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stop12{}; 
        namespace Stop12ValC{
        }
        ///Mirror register of the STOP bit located in TCSA1 register of MFT-unit1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> stop11{}; 
        namespace Stop11ValC{
        }
        ///Mirror register of the STOP bit located in TCSA0 register of MFT-unit1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stop10{}; 
        namespace Stop10ValC{
        }
        ///Mirror register of the STOP bit located in TCSA2 register of MFT-unit0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> stop02{}; 
        namespace Stop02ValC{
        }
        ///Mirror register of the STOP bit located in TCSA1 register of MFT-unit0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> stop01{}; 
        namespace Stop01ValC{
        }
        ///Mirror register of the STOP bit located in TCSA0 register of MFT-unit0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> stop00{}; 
        namespace Stop00ValC{
        }
    }
    namespace NoneocuOccp0{    ///<OCU ch.0 Compare Value Store Register
        using Addr = Register::Address<0x40020102,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOccp1{    ///<OCU ch.1 Compare Value Store Register
        using Addr = Register::Address<0x40020106,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOccp2{    ///<OCU ch.2 Compare Value Store Register
        using Addr = Register::Address<0x4002010a,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOccp3{    ///<OCU ch.3 Compare Value Store Register
        using Addr = Register::Address<0x4002010e,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOccp4{    ///<OCU ch.4 Compare Value Store Register
        using Addr = Register::Address<0x40020112,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOccp5{    ///<OCU ch.5 Compare Value Store Register
        using Addr = Register::Address<0x40020116,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcsa10{    ///<OCU ch.0/1 Control Register A
        using Addr = Register::Address<0x40020118,0xffffff0c,0,unsigned char>;
        ///Indicates that a match has already been detected between FRT's count value and OCCP(1) value at OCU ch.(1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iop1{}; 
        namespace Iop1ValC{
        }
        ///Indicates that a match has already been detected between FRT's count value and OCCP(0) value at OCU ch.(0). 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> iop0{}; 
        namespace Iop0ValC{
        }
        ///"Generates interrupt@ when ""1"" is set to OCSA.IOP1"
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ioe1{}; 
        namespace Ioe1ValC{
        }
        ///"Generates interrupt@ when ""1"" is set to OCSA.IOP0"
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ioe0{}; 
        namespace Ioe0ValC{
        }
        ///Enables the operation of OCU ch.(1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cst1{}; 
        namespace Cst1ValC{
        }
        ///Enables the operation of OCU ch.(0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cst0{}; 
        namespace Cst0ValC{
        }
    }
    namespace NoneocuOcsb10{    ///<OCU ch.0/1 Control Register B
        using Addr = Register::Address<0x40020119,0xffffff6c,0,unsigned char>;
        ///selects FM4 mode for operating mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fm4{}; 
        namespace Fm4ValC{
        }
        ///selects OCU's operation mode in combination with OCSC.MOD0 to MOD5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cmod{}; 
        namespace CmodValC{
        }
        ///Indicates that the RT(1) output pin is in the High-level output state.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> otd1{}; 
        namespace Otd1ValC{
        }
        ///Indicates that the RT(0) output pin is in the High-level output state.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otd0{}; 
        namespace Otd0ValC{
        }
    }
    namespace NoneocuOcsd10{    ///<OCU ch.0/1 Control Register D
        using Addr = Register::Address<0x4002011a,0xffffff00,0,unsigned char>;
        ///Enable buffer register function of OCSE(1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> ocse1bufe{}; 
        namespace Ocse1bufeValC{
        }
        ///Enable buffer register function of OCSE(0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ocse0bufe{}; 
        namespace Ocse0bufeValC{
        }
        ///Enable buffer register function of OCCP(1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> occp1bufe{}; 
        namespace Occp1bufeValC{
        }
        ///Enable buffer register function of OCCP(0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> occp0bufe{}; 
        namespace Occp0bufeValC{
        }
    }
    namespace NoneocuOcsa32{    ///<OCU ch.2/3 Control Register A
        using Addr = Register::Address<0x4002011c,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcsb32{    ///<OCU ch.2/3 Control Register B
        using Addr = Register::Address<0x4002011d,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcsd32{    ///<OCU ch.2/3 Control Register D
        using Addr = Register::Address<0x4002011e,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcsa54{    ///<OCU ch.4/5 Control Register A
        using Addr = Register::Address<0x40020120,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcsb54{    ///<OCU ch.4/5 Control Register B
        using Addr = Register::Address<0x40020121,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcsd54{    ///<OCU ch.4/5 Control Register D
        using Addr = Register::Address<0x40020122,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcsc{    ///<OCU Control Register C
        using Addr = Register::Address<0x40020124,0xffffc0ff,0,unsigned>;
        ///OCSC.MOD4 and OCSC.MOD5 determine the operation mode of OCU ch.4/ch.5 in combination with OCSB54.CMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mod5{}; 
        namespace Mod5ValC{
        }
        ///OCSC.MOD4 and OCSC.MOD5 determine the operation mode of OCU ch.4/ch.5 in combination with OCSB54.CMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mod4{}; 
        namespace Mod4ValC{
        }
        ///OCSC.MOD2 and OCSC.MOD3 determine the operation mode of OCU ch.2/ch.3 in combination with OCSB32.CMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mod3{}; 
        namespace Mod3ValC{
        }
        ///OCSC.MOD2 and OCSC.MOD3 determine the operation mode of OCU ch.2/ch.3 in combination with OCSB32.CMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mod2{}; 
        namespace Mod2ValC{
        }
        ///OCSC.MOD0 and OCSC.MOD1 determine the operation mode of OCU ch.0/ch.1 in combination with OCSB10.CMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mod1{}; 
        namespace Mod1ValC{
        }
        ///OCSC.MOD0 and OCSC.MOD1 determine the operation mode of OCU ch.0/ch.1 in combination with OCSB10.CMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mod0{}; 
        namespace Mod0ValC{
        }
    }
    namespace NoneocuOcse0{    ///<OCU ch.0 Control Register E
        using Addr = Register::Address<0x40020128,0xffff0000,0,unsigned>;
        ///specify the setting conditions of the OCU's matching detection register (IOP0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ocse{}; 
        namespace OcseValC{
        }
    }
    namespace NoneocuOcse1{    ///<OCU ch.1 Control Register E
        using Addr = Register::Address<0x4002012c,0x00000000,0,unsigned>;
        ///specify the setting conditions of the OCU's matching detection register (IOP0/IOP1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ocse{}; 
        namespace OcseValC{
        }
    }
    namespace NoneocuOcse2{    ///<OCU ch.2 Control Register E
        using Addr = Register::Address<0x40020130,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcse3{    ///<OCU ch.3 Control Register E
        using Addr = Register::Address<0x40020134,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcse4{    ///<OCU ch.4 Control Register E
        using Addr = Register::Address<0x40020138,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcse5{    ///<OCU ch.5 Control Register E
        using Addr = Register::Address<0x4002013c,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcfs10{    ///<OCU ch.0/1 Connecting FRT Select Register
        using Addr = Register::Address<0x40020168,0xffffff00,0,unsigned char>;
        ///Connects FRT ch.x to OCU ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> fso1{}; 
        namespace Fso1ValC{
        }
        ///Connects FRT ch.x to OCU ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fso0{}; 
        namespace Fso0ValC{
        }
    }
    namespace NoneocuOcfs32{    ///<OCU ch.2/3 Connecting FRT Select Register
        using Addr = Register::Address<0x40020169,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcfs54{    ///<OCU ch.4/5 Connecting FRT Select Register
        using Addr = Register::Address<0x4002016a,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWftf10{    ///<Pulse Counter Value Register for WFG ch.0/1
        using Addr = Register::Address<0x4002018e,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWfta10{    ///<WFG Timer Value Register for WFG ch.0/1
        using Addr = Register::Address<0x40020190,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWftb10{    ///<WFG Timer Value Register for WFG ch.0/1
        using Addr = Register::Address<0x40020192,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWftf32{    ///<Pulse Counter Value Register for WFG ch.2/3
        using Addr = Register::Address<0x40020196,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWfta32{    ///<WFG Timer Value Register for WFG ch.2/3
        using Addr = Register::Address<0x40020198,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWftb32{    ///<WFG Timer Value Register for WFG ch.2/3
        using Addr = Register::Address<0x4002019a,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWftf54{    ///<Pulse Counter Value Register for WFG ch.4/5
        using Addr = Register::Address<0x4002019e,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWfta54{    ///<WFG Timer Value Register for WFG ch.4/5
        using Addr = Register::Address<0x400201a0,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWftb54{    ///<WFG Timer Value Register for WFG ch.4/5
        using Addr = Register::Address<0x400201a2,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWfsa10{    ///<WFG Control Register A for WFG ch.0/1
        using Addr = Register::Address<0x400201a4,0xffffc000,0,unsigned>;
        ///1specifies polarity for RTO(0) and RTO(1) signal outputs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> dmod{}; 
        namespace DmodValC{
        }
        ///specifies how to reflect the CH_PPG signal for each channel of the WFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pgen{}; 
        namespace PgenValC{
        }
        ///select the PPG timer unit to be used for each channel of the WFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psel{}; 
        namespace PselValC{
        }
        ///selects the output conditions for the CH_GATE output signal of the WFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> gten{}; 
        namespace GtenValC{
        }
        ///select the WFG's operation mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> tmd{}; 
        namespace TmdValC{
        }
        ///set the count clock cycle for the WFG timer and Pulse counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dck{}; 
        namespace DckValC{
        }
    }
    namespace NonewfgWfsa32{    ///<WFG Control Register A for WFG ch.2/3
        using Addr = Register::Address<0x400201a8,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWfsa54{    ///<WFG Control Register A for WFG ch.4/5
        using Addr = Register::Address<0x400201ac,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWfir{    ///<WFG Interrupt Control Register
        using Addr = Register::Address<0x400201b0,0xffff0000,0,unsigned>;
        ///stops the WFG54 reload timer and clears TMIF54
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tmis54{}; 
        namespace Tmis54ValC{
        }
        ///stops the WFG54 reload timer and clears TMIF54
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tmie54{}; 
        namespace Tmie54ValC{
        }
        ///clears TIMF54 bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tmic54{}; 
        namespace Tmic54ValC{
        }
        ///detects the event of WFG54 reload timer interrupt occurrence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tmif54{}; 
        namespace Tmif54ValC{
        }
        ///stops the WFG32 reload timer and clears TMIF32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tmis32{}; 
        namespace Tmis32ValC{
        }
        ///1stops the WFG32 reload timer and clears TMIF32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tmie32{}; 
        namespace Tmie32ValC{
        }
        ///clears TIMF32 bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tmic32{}; 
        namespace Tmic32ValC{
        }
        ///detects the event of WFG32 reload timer interrupt occurrence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tmif32{}; 
        namespace Tmif32ValC{
        }
        ///stops the WFG10 reload timer and clears TMIF10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tmis10{}; 
        namespace Tmis10ValC{
        }
        ///starts WFG10 reload timer and checks the operation state of it.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tmie10{}; 
        namespace Tmie10ValC{
        }
        ///clears TIMF10 bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tmic10{}; 
        namespace Tmic10ValC{
        }
        ///detects the event of WFG10 reload timer interrupt occurrence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tmif10{}; 
        namespace Tmif10ValC{
        }
        ///clears DTIFB bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dticb{}; 
        namespace DticbValC{
        }
        ///detects DTTIX signal input via analog noise filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dtifb{}; 
        namespace DtifbValC{
        }
        ///clears the DTIFA interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dtica{}; 
        namespace DticaValC{
        }
        ///detects the event of DTTIX signal input via digital noise-canceller
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtifa{}; 
        namespace DtifaValC{
        }
    }
    namespace NonewfgNzcl{    ///<NZCL Control Register
        using Addr = Register::Address<0x400201b4,0xffff8cc0,0,unsigned>;
        ///selects whether a WFG54 reload timer interrupt is masked when the WFIR.TMIF54 flag is set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wim54{}; 
        namespace Wim54ValC{
        }
        ///selects whether a WFG32 reload timer interrupt is masked when the WFIR.TMIF32 flag is set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wim32{}; 
        namespace Wim32ValC{
        }
        ///selects whether a WFG10 reload timer interrupt is masked when the WFIR.TMIF10 flag is set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wim10{}; 
        namespace Wim10ValC{
        }
        ///selects whether a DTIF interrupt is masked when the WFIR.TIFDTIFB flag is set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dimb{}; 
        namespace DimbValC{
        }
        ///selects whether a DTIF interrupt is masked when the WFIR.DTIFA flag is set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dima{}; 
        namespace DimaValC{
        }
        ///Enables the path from DTTIX pin to analog noise filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dtieb{}; 
        namespace DtiebValC{
        }
        ///sets the WFIR.DTIFA register by writing to the register from the CPU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sdti{}; 
        namespace SdtiValC{
        }
        ///set the noise-canceling width for a digital noise-canceller
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> nws{}; 
        namespace NwsValC{
        }
        ///Enables the path for digital noise filter from DTTIX pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtiea{}; 
        namespace DtieaValC{
        }
    }
    namespace NoneicuIcfs10{    ///<ICU ch.0/1 Connecting FRT Select Register
        using Addr = Register::Address<0x4002016c,0xffffff00,0,unsigned char>;
        ///Connects FRT ch.x to ICU ch.(1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> fsi1{}; 
        namespace Fsi1ValC{
        }
        ///Connects FRT ch.x to ICU ch.(0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fsi0{}; 
        namespace Fsi0ValC{
        }
    }
    namespace NoneicuIcfs32{    ///<ICU ch.2/3 Connecting FRT Select Register
        using Addr = Register::Address<0x4002016d,0xffffffff,0,unsigned>;
    }
    namespace NoneicuIccp0{    ///<ICU-ch.0 Capture Value Store Register
        using Addr = Register::Address<0x40020176,0xffffffff,0,unsigned>;
    }
    namespace NoneicuIccp1{    ///<ICU-ch.1 Capture Value Store Register
        using Addr = Register::Address<0x4002017a,0xffffffff,0,unsigned>;
    }
    namespace NoneicuIccp2{    ///<ICU-ch.2 Capture Value Store Register
        using Addr = Register::Address<0x4002017e,0xffffffff,0,unsigned>;
    }
    namespace NoneicuIccp3{    ///<ICU-ch.3 Capture Value Store Register
        using Addr = Register::Address<0x40020182,0xffffffff,0,unsigned>;
    }
    namespace NoneicuIcsa10{    ///<ICU ch.0/1 Control Register A
        using Addr = Register::Address<0x40020184,0xffffff00,0,unsigned char>;
        ///Indicates that a valid edge has been detected at ICU ch.(1) and the capture operation has been performed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> icp1{}; 
        namespace Icp1ValC{
        }
        ///Indicates that a valid edge has been detected at ICU ch.(0) and the capture operation has been performed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> icp0{}; 
        namespace Icp0ValC{
        }
        ///"Generates interrupt@ when ""1"" is set to ICSA.ICP1."
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ice1{}; 
        namespace Ice1ValC{
        }
        ///"Generates interrupt@ when ""1"" is set to ICSA.ICP0."
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ice0{}; 
        namespace Ice0ValC{
        }
        ///enables/disables the operation of ICU-ch.(1) and selects a valid edge(s)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eg1{}; 
        namespace Eg1ValC{
        }
        ///enables/disables the operation of ICU-ch.(0) and selects a valid edge(s)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eg0{}; 
        namespace Eg0ValC{
        }
    }
    namespace NoneicuIcsb10{    ///<ICU ch.0/1 Control Register B
        using Addr = Register::Address<0x40020185,0xfffffffc,0,unsigned char>;
        ///indicates the latest valid edge of ICU ch.(1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iei1{}; 
        namespace Iei1ValC{
        }
        ///indicates the latest valid edge of ICU ch.(0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> iei0{}; 
        namespace Iei0ValC{
        }
    }
    namespace NoneicuIcsa32{    ///<ICU ch.2/3 Control Register A
        using Addr = Register::Address<0x40020188,0xffffffff,0,unsigned>;
    }
    namespace NoneicuIcsb32{    ///<ICU ch.2/3 Control Register B
        using Addr = Register::Address<0x40020189,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcfs10{    ///<ADCMP ch.0/1 Connecting FRT Select Register
        using Addr = Register::Address<0x40020170,0xffffff00,0,unsigned char>;
        ///specify the FRT to be connected to ADCMP ch.(1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> fsa1{}; 
        namespace Fsa1ValC{
        }
        ///specify the FRT to be connected to ADCMP ch.(0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fsa0{}; 
        namespace Fsa0ValC{
        }
    }
    namespace NoneadcmpAcfs32{    ///<ADCMP ch.2/3 Connecting FRT Select Register
        using Addr = Register::Address<0x40020171,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcfs54{    ///<ADCMP ch.4/5 Connecting FRT Select Register
        using Addr = Register::Address<0x40020172,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcmp0{    ///<ADCMP ch.0 Compare Value Store Register
        using Addr = Register::Address<0x400201ba,0xffff0000,0,unsigned>;
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> acmp{}; 
        namespace AcmpValC{
        }
    }
    namespace NoneadcmpAcmp1{    ///<ADCMP ch.1 Compare Value Store Register
        using Addr = Register::Address<0x400201be,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcmp2{    ///<ADCMP ch.2 Compare Value Store Register
        using Addr = Register::Address<0x400201c2,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcmp3{    ///<ADCMP ch.3 Compare Value Store Register
        using Addr = Register::Address<0x400201c6,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcmp4{    ///<ADCMP ch.4 Compare Value Store Register
        using Addr = Register::Address<0x400201ca,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcmp5{    ///<ADCMP ch.5 Compare Value Store Register
        using Addr = Register::Address<0x400201ce,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcsa{    ///<ADCMP Control Register A
        using Addr = Register::Address<0x400201d0,0xffffc0c0,0,unsigned>;
        ///selects compatible operation of ADCMP ch.5 and ch.4 with FM3 Family products
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sel54{}; 
        namespace Sel54ValC{
        }
        ///selects compatible operation of ADCMP ch.3 and ch.2 with FM3 Family products
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sel32{}; 
        namespace Sel32ValC{
        }
        ///selects compatible operation of ADCMP ch.1 and ch.0 with FM3 Family products
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sel10{}; 
        namespace Sel10ValC{
        }
        ///enables/disables compatibility of ADCMP ch.5 and ch.4 with FM3 Family products
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ce54{}; 
        namespace Ce54ValC{
        }
        ///enables/disables compatibility of ADCMP ch.3 and ch.2 with FM3 Family products
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ce32{}; 
        namespace Ce32ValC{
        }
        ///enables/disables compatibility of ADCMP ch.1 and ch.0 with FM3 Family products
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ce10{}; 
        namespace Ce10ValC{
        }
    }
    namespace NoneadcmpAcsc0{    ///<ADCMP ch.0 Control Register C
        using Addr = Register::Address<0x400201d4,0xffffffe0,0,unsigned char>;
        ///specify the destinations of ADC start signals that are output by ADCMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> adsel{}; 
        namespace AdselValC{
        }
        ///select enable/disable and transfer timing for buffer function of the ACMP register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> bufe{}; 
        namespace BufeValC{
        }
    }
    namespace NoneadcmpAcsd0{    ///<ADCMP ch.0 Control Register D
        using Addr = Register::Address<0x400201d5,0xffffff0c,0,unsigned char>;
        ///enables/disables the operation of the ADCMP when the FRT is "0x0000"
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ze{}; 
        namespace ZeValC{
        }
        ///enables/disables the operation of the ADCMP that is counting up for the connected FRT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ue{}; 
        namespace UeValC{
        }
        ///enables/disables the operation of the ADCMP that is counting down at the Peak value of the connected FRT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
        ///enables/disables the operation of the ADCMP that is counting down for the connected FRT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> de{}; 
        namespace DeValC{
        }
        ///selects the OCU OCCP register that will become the start for offset start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ocus{}; 
        namespace OcusValC{
        }
        ///selects operation mode for ADCMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> amod{}; 
        namespace AmodValC{
        }
    }
    namespace NoneadcmpAcsc1{    ///<ADCMP ch.1 Control Register C
        using Addr = Register::Address<0x400201d8,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcsd1{    ///<ADCMP ch.1 Control Register D
        using Addr = Register::Address<0x400201d9,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcsc2{    ///<ADCMP ch.2 Control Register C
        using Addr = Register::Address<0x400201dc,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcsd2{    ///<ADCMP ch.2 Control Register D
        using Addr = Register::Address<0x400201dd,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcsc3{    ///<ADCMP ch.3 Control Register C
        using Addr = Register::Address<0x400201e0,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcsd3{    ///<ADCMP ch.3 Control Register D
        using Addr = Register::Address<0x400201e1,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcsc4{    ///<ADCMP ch.4 Control Register C
        using Addr = Register::Address<0x400201e4,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcsd4{    ///<ADCMP ch.4 Control Register D
        using Addr = Register::Address<0x400201e5,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcsc5{    ///<ADCMP ch.5 Control Register C
        using Addr = Register::Address<0x400201e8,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcsd5{    ///<ADCMP ch.5 Control Register D
        using Addr = Register::Address<0x400201e9,0xffffffff,0,unsigned>;
    }
}
