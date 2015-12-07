#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Multifunction Timer 0
    namespace NonefrtTcsa0{    ///<FRT-ch.0 Control Register A
        using Addr = Register::Address<0x40020030,0xffff1c00,0,unsigned>;
        ///FRT clock cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> clk{}; 
        namespace ClkValC{
        }
        ///FRT operation state initialization request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sclr{}; 
        namespace SclrValC{
        }
        ///FRT's count mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mode{}; 
        namespace ModeValC{
        }
        ///Puts FRT in stopping state
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stop{}; 
        namespace StopValC{
        }
        ///Enables TCCP's buffer function
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bfe{}; 
        namespace BfeValC{
        }
        ///"Generates interrupt when ""1"" is set to TCSA.ICLR"
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> icre{}; 
        namespace IcreValC{
        }
        ///interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> iclr{}; 
        namespace IclrValC{
        }
        ///"Generates interrupt, when ""1"" is set to TCSA.IRQZF"
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> irqze{}; 
        namespace IrqzeValC{
        }
        ///zero interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> irqzf{}; 
        namespace IrqzfValC{
        }
        ///Uses an external input clock (FRCK) as FRT's count clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ecke{}; 
        namespace EckeValC{
        }
    }
    namespace NonefrtTcsa1{    ///<FRT-ch.1 Control Register A
        using Addr = Register::Address<0x40020040,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcsa2{    ///<FRT-ch.2 Control Register A
        using Addr = Register::Address<0x40020050,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcsb0{    ///<FRT-ch.0 Control Register B
        using Addr = Register::Address<0x40020034,0xfffffff8,0,unsigned>;
        ///Outputs AD conversion start signal to ADCunit2 upon Zero value detection by FRT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ad2e{}; 
        namespace Ad2eValC{
        }
        ///Outputs AD conversion start signal to ADCunit1 upon Zero value detection by FRT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ad1e{}; 
        namespace Ad1eValC{
        }
        ///Outputs AD conversion start signal to ADCunit0 upon Zero value detection by FRT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ad0e{}; 
        namespace Ad0eValC{
        }
    }
    namespace NonefrtTcsb1{    ///<FRT-ch.1 Control Register B
        using Addr = Register::Address<0x40020044,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcsb2{    ///<FRT-ch.2 Control Register B
        using Addr = Register::Address<0x40020054,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTccp0{    ///<FRT-ch.0 Cycle Setting Register
        using Addr = Register::Address<0x40020028,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTccp1{    ///<FRT-ch.1 Cycle Setting Register
        using Addr = Register::Address<0x40020038,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTccp2{    ///<FRT-ch.2 Cycle Setting Register
        using Addr = Register::Address<0x40020048,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcdt0{    ///<FRT-ch.0 Count Value Register
        using Addr = Register::Address<0x4002002c,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcdt1{    ///<FRT-ch.1 Count Value Register
        using Addr = Register::Address<0x4002003c,0xffffffff,0,unsigned>;
    }
    namespace NonefrtTcdt2{    ///<FRT-ch.2 Count Value Register
        using Addr = Register::Address<0x4002004c,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcfs10{    ///<"OCU ch.1,0 Connecting FRT Select Register"
        using Addr = Register::Address<0x40020058,0xffffff00,0,unsigned char>;
        ///Connects FRT ch.x to OCU ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fso0{}; 
        namespace Fso0ValC{
        }
        ///Connects FRT ch.x to OCU ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> fso1{}; 
        namespace Fso1ValC{
        }
    }
    namespace NoneocuOcfs32{    ///<"OCU ch.3,2 Connecting FRT Select Register"
        using Addr = Register::Address<0x40020059,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcfs54{    ///<"OCU ch.5,4 Connecting FRT Select Register"
        using Addr = Register::Address<0x4002005c,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcsa10{    ///<"OCU ch.1,0 Control Register A"
        using Addr = Register::Address<0x40020018,0xffffff00,0,unsigned char>;
        ///Enables the operation of OCU ch.(0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cst0{}; 
        namespace Cst0ValC{
        }
        ///Enables the operation of OCU ch.(1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cst1{}; 
        namespace Cst1ValC{
        }
        ///Disables the buffer function of the OCCP(0) register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bdis0{}; 
        namespace Bdis0ValC{
        }
        ///Disables the buffer function of the OCCP(1) register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bdis1{}; 
        namespace Bdis1ValC{
        }
        ///"Generates interrupt, when ""1"" is set to OCSA.IOP0"
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ioe0{}; 
        namespace Ioe0ValC{
        }
        ///"Generates interrupt, when ""1"" is set to OCSA.IOP1"
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ioe1{}; 
        namespace Ioe1ValC{
        }
        ///Indicates that a match has already been detected between FRT's count value and OCCP(0) value at OCU ch.(0). 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> iop0{}; 
        namespace Iop0ValC{
        }
        ///Indicates that a match has already been detected between FRT's count value and OCCP(1) value at OCU ch.(1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iop1{}; 
        namespace Iop1ValC{
        }
    }
    namespace NoneocuOcsa32{    ///<"OCU ch.3,2 Control Register A"
        using Addr = Register::Address<0x4002001c,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcsa54{    ///<"OCU ch.5,4 Control Register A"
        using Addr = Register::Address<0x40020020,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcsb10{    ///<"OCU ch.1,0 Control Register B"
        using Addr = Register::Address<0x40020019,0xffffff8c,0,unsigned char>;
        ///Indicates that the RT(0) output pin is in the High-level output state. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otd0{}; 
        namespace Otd0ValC{
        }
        ///Indicates that the RT(1) output pin is in the High-level output state.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> otd1{}; 
        namespace Otd1ValC{
        }
        ///selects OCU's operation mode in combination with OCSC.MOD0 to MOD5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cmod{}; 
        namespace CmodValC{
        }
        ///Performs buffer transfer of the OCCP(0) register upon Peak value detection by FRT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bts0{}; 
        namespace Bts0ValC{
        }
        ///Performs buffer transfer of the OCCP(1) register upon Peak value detection by FRT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bts1{}; 
        namespace Bts1ValC{
        }
    }
    namespace NoneocuOcsb32{    ///<"OCU ch.3,2 Control Register B"
        using Addr = Register::Address<0x4002001d,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcsb54{    ///<"OCU ch.5,4 Control Register B"
        using Addr = Register::Address<0x40020021,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOcsc{    ///<OCU Control Register C
        using Addr = Register::Address<0x40020024,0xffffc0ff,0,unsigned>;
        ///OCSC.MOD0 and OCSC.MOD1 determine the operation mode of OCU ch.0/ch.1 in combination with OCSB10.CMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mod0{}; 
        namespace Mod0ValC{
        }
        ///OCSC.MOD0 and OCSC.MOD1 determine the operation mode of OCU ch.0/ch.1 in combination with OCSB10.CMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mod1{}; 
        namespace Mod1ValC{
        }
        ///OCSC.MOD2 and OCSC.MOD3 determine the operation mode of OCU ch.2/ch.3 in combination with OCSB32.CMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mod2{}; 
        namespace Mod2ValC{
        }
        ///OCSC.MOD2 and OCSC.MOD3 determine the operation mode of OCU ch.2/ch.3 in combination with OCSB32.CMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mod3{}; 
        namespace Mod3ValC{
        }
        ///OCSC.MOD4 and OCSC.MOD5 determine the operation mode of OCU ch.4/ch.5 in combination with OCSB54.CMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mod4{}; 
        namespace Mod4ValC{
        }
        ///OCSC.MOD4 and OCSC.MOD5 determine the operation mode of OCU ch.4/ch.5 in combination with OCSB54.CMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mod5{}; 
        namespace Mod5ValC{
        }
    }
    namespace NoneocuOccp0{    ///<OCU ch.0 Compare Value Store Register
        using Addr = Register::Address<0x40020000,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOccp1{    ///<OCU ch.1 Compare Value Store Register
        using Addr = Register::Address<0x40020004,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOccp2{    ///<OCU ch.2 Compare Value Store Register
        using Addr = Register::Address<0x40020008,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOccp3{    ///<OCU ch.3 Compare Value Store Register
        using Addr = Register::Address<0x4002000c,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOccp4{    ///<OCU ch.4 Compare Value Store Register
        using Addr = Register::Address<0x40020010,0xffffffff,0,unsigned>;
    }
    namespace NoneocuOccp5{    ///<OCU ch.5 Compare Value Store Register
        using Addr = Register::Address<0x40020014,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWfsa10{    ///<WFG ch.10 Control Register A
        using Addr = Register::Address<0x4002008c,0xffffe000,0,unsigned>;
        ///clock cycle of the WFG timer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dck{}; 
        namespace DckValC{
        }
        ///WFG's operation mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> tmd{}; 
        namespace TmdValC{
        }
        ///the CH_GATE signal for each channel of WFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> gten{}; 
        namespace GtenValC{
        }
        ///the PPG timer unit to be used at each channel of WFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psel{}; 
        namespace PselValC{
        }
        ///specifies how to reflect the CH_PPG signal that is input to each channel of WFG on WFG output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pgen{}; 
        namespace PgenValC{
        }
        ///specifies which polarity will be used to output the non-overlap signal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dmod{}; 
        namespace DmodValC{
        }
    }
    namespace NonewfgWfsa32{    ///<WFG ch.32 Control Register A
        using Addr = Register::Address<0x40020090,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWfsa54{    ///<WFG ch.54 Control Register A
        using Addr = Register::Address<0x40020094,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWftm10{    ///<WFG ch.10 Timer Value Register
        using Addr = Register::Address<0x40020080,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWftm32{    ///<WFG ch.32 Timer Value Register
        using Addr = Register::Address<0x40020084,0xffffffff,0,unsigned>;
    }
    namespace NonewfgWftm54{    ///<WFG ch.54 Timer Value Register
        using Addr = Register::Address<0x40020088,0xffffffff,0,unsigned>;
    }
    namespace NonewfgNzcl{    ///<NZCL Control Register
        using Addr = Register::Address<0x4002009c,0xffffffe0,0,unsigned>;
        ///DTIF interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtie{}; 
        namespace DtieValC{
        }
        ///noise-canceling width of the noise-canceller for the DTTIX pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> nws{}; 
        namespace NwsValC{
        }
        ///Forcibly generates DTIF interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sdti{}; 
        namespace SdtiValC{
        }
    }
    namespace NonewfgWfir{    ///<WFG Interrupt Control Register
        using Addr = Register::Address<0x40020098,0xffff000c,0,unsigned>;
        ///Indicates that DTIF interrupt has been generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtif{}; 
        namespace DtifValC{
        }
        ///Clears WFIR.DTIF and deasserts the DTIF interrupt signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dtic{}; 
        namespace DticValC{
        }
        ///Indicates that WFG10 timer interrupt has been generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tmif10{}; 
        namespace Tmif10ValC{
        }
        ///Clears WFIR.TMIF10 and deasserts the WFG10 timer interrupt signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tmic10{}; 
        namespace Tmic10ValC{
        }
        ///Starts the WFG10 timer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tmie10{}; 
        namespace Tmie10ValC{
        }
        ///Stops the WFG10 timer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tmis10{}; 
        namespace Tmis10ValC{
        }
        ///Indicates that WFG32 timer interrupt has been generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tmif32{}; 
        namespace Tmif32ValC{
        }
        ///Clears WFIR.TMIF32 and deasserts the WFG32 timer interrupt signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tmic32{}; 
        namespace Tmic32ValC{
        }
        ///Starts the WFG32 timer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tmie32{}; 
        namespace Tmie32ValC{
        }
        ///Stops the WFG32 timer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tmis32{}; 
        namespace Tmis32ValC{
        }
        ///Indicates that WFG54 timer interrupt has been generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tmif54{}; 
        namespace Tmif54ValC{
        }
        ///Clears WFIR.TMIF54 and deasserts the WFG54 timer interrupt signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tmic54{}; 
        namespace Tmic54ValC{
        }
        ///Starts the WFG54 timer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tmie54{}; 
        namespace Tmie54ValC{
        }
        ///Stops the WFG54 timer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tmis54{}; 
        namespace Tmis54ValC{
        }
    }
    namespace NoneicuIcfs10{    ///<"ICU ch.1,0 Connecting FRT Select Register"
        using Addr = Register::Address<0x40020060,0xffffff00,0,unsigned char>;
        ///Connects FRT ch.x to ICU ch.(0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fsi0{}; 
        namespace Fsi0ValC{
        }
        ///Connects FRT ch.x to ICU ch.(1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> fsi1{}; 
        namespace Fsi1ValC{
        }
    }
    namespace NoneicuIcfs32{    ///<"ICU ch.3,2 Connecting FRT Select Register"
        using Addr = Register::Address<0x40020061,0xffffffff,0,unsigned>;
    }
    namespace NoneicuIcsa10{    ///<"ICU ch.1,0 Control Register A"
        using Addr = Register::Address<0x40020078,0xffffff00,0,unsigned char>;
        ///enables/disables the operation of ICU-ch.(0) and selects a valid edge(s)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eg0{}; 
        namespace Eg0ValC{
        }
        ///enables/disables the operation of ICU-ch.(1) and selects a valid edge(s)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eg1{}; 
        namespace Eg1ValC{
        }
        ///"Generates interrupt, when ""1"" is set to ICSA.ICP0."
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ice0{}; 
        namespace Ice0ValC{
        }
        ///"Generates interrupt, when ""1"" is set to ICSA.ICP1."
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ice1{}; 
        namespace Ice1ValC{
        }
        ///Indicates that a valid edge has been detected at ICU ch.(0) and the capture operation has been performed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> icp0{}; 
        namespace Icp0ValC{
        }
        ///Indicates that a valid edge has been detected at ICU ch.(1) and the capture operation has been performed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> icp1{}; 
        namespace Icp1ValC{
        }
    }
    namespace NoneicuIcsa32{    ///<"ICU ch.3,2 Control Register A"
        using Addr = Register::Address<0x4002007c,0xffffffff,0,unsigned>;
    }
    namespace NoneicuIcsb10{    ///<"ICU ch.1,0 Control Register B"
        using Addr = Register::Address<0x40020079,0xfffffffc,0,unsigned char>;
        ///indicates the latest valid edge of ICU-ch.(0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> iei0{}; 
        namespace Iei0ValC{
        }
        ///indicates the latest valid edge of ICU-ch.(1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iei1{}; 
        namespace Iei1ValC{
        }
    }
    namespace NoneicuIcsb32{    ///<"ICU ch.3,2 Control Register B"
        using Addr = Register::Address<0x4002007d,0xffffffff,0,unsigned>;
    }
    namespace NoneicuIccp0{    ///<ICU ch.0 Capture value store register
        using Addr = Register::Address<0x40020068,0xffffffff,0,unsigned>;
    }
    namespace NoneicuIccp1{    ///<ICU ch.1 Capture value store register
        using Addr = Register::Address<0x4002006c,0xffffffff,0,unsigned>;
    }
    namespace NoneicuIccp2{    ///<ICU ch.2 Capture value store register
        using Addr = Register::Address<0x40020070,0xffffffff,0,unsigned>;
    }
    namespace NoneicuIccp3{    ///<ICU ch.3 Capture value store register
        using Addr = Register::Address<0x40020074,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAcsa{    ///<ADCMP Control Register A
        using Addr = Register::Address<0x400200bc,0xffffc0c0,0,unsigned>;
        ///enable or disable the operation of ADCMP-ch.0 and select the FRT to be connected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ce0{}; 
        namespace Ce0ValC{
        }
        ///enable or disable the operation of ADCMP-ch.1 and select the FRT to be connected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ce1{}; 
        namespace Ce1ValC{
        }
        ///enable or disable the operation of ADCMP-ch.2 and select the FRT to be connected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ce2{}; 
        namespace Ce2ValC{
        }
        ///which count state FRT should be in to instruct AD conversion to be started at ADCMP-ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sel0{}; 
        namespace Sel0ValC{
        }
        ///which count state FRT should be in to instruct AD conversion to be started at ADCMP-ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sel1{}; 
        namespace Sel1ValC{
        }
        ///which count state FRT should be in to instruct AD conversion to be started at ADCMP-ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sel2{}; 
        namespace Sel2ValC{
        }
    }
    namespace NoneadcmpAcsb{    ///<ADCMP Control Register B
        using Addr = Register::Address<0x400200b8,0xffffff88,0,unsigned char>;
        ///Disables the buffer function of the ACCP0 and ACCPDN0 registers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bdis0{}; 
        namespace Bdis0ValC{
        }
        ///Disables the buffer function of the ACCP1 and ACCPDN1 registers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bdis1{}; 
        namespace Bdis1ValC{
        }
        ///Disables the buffer function of the ACCP2 and ACCPDN2 registers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bdis2{}; 
        namespace Bdis2ValC{
        }
        ///Performs buffer transfer of the ACCP0 and ACCPDN0 registers upon Peak value detection by FRT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bts0{}; 
        namespace Bts0ValC{
        }
        ///Performs buffer transfer of the ACCP1 and ACCPDN1 registers upon Peak value detection by FRT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bts1{}; 
        namespace Bts1ValC{
        }
        ///Performs buffer transfer of the ACCP2 and ACCPDN2 registers upon Peak value detection by FRT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bts2{}; 
        namespace Bts2ValC{
        }
    }
    namespace NoneadcmpAccp0{    ///<ADCMP ch.0 Compare Value Store Register
        using Addr = Register::Address<0x400200a0,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAccp1{    ///<ADCMP ch.1 Compare Value Store Register
        using Addr = Register::Address<0x400200a8,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAccp2{    ///<ADCMP ch.2 Compare Value Store Register
        using Addr = Register::Address<0x400200b0,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAccpdn0{    ///<ADCMP ch.0 Compare Value Store Register
        using Addr = Register::Address<0x400200a4,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAccpdn1{    ///<ADCMP ch.1 Compare Value Store Register
        using Addr = Register::Address<0x400200ac,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAccpdn2{    ///<ADCMP ch.2 Compare Value Store Register
        using Addr = Register::Address<0x400200b4,0xffffffff,0,unsigned>;
    }
    namespace NoneadcmpAtsa{    ///<ADC Start Trigger Select Register
        using Addr = Register::Address<0x400200c0,0xffffc0c0,0,unsigned>;
        ///selects the start signal to be used to start the scan conversion of ADC unit0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ad0s{}; 
        namespace Ad0sValC{
        }
        ///selects the start signal to be used to start the scan conversion of ADC unit1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ad1s{}; 
        namespace Ad1sValC{
        }
        ///selects the start signal to be used to start the scan conversion of ADC unit2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ad2s{}; 
        namespace Ad2sValC{
        }
        ///selects the start signal to be used to start priority conversion of ADC unit0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> ad0p{}; 
        namespace Ad0pValC{
        }
        ///selects the start signal to be used to start priority conversion of ADC unit1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> ad1p{}; 
        namespace Ad1pValC{
        }
        ///selects the start signal to be used to start priority conversion of ADC unit2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> ad2p{}; 
        namespace Ad2pValC{
        }
    }
}
