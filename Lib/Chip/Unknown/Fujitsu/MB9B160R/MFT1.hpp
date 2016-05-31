#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Multifunction Timer 0
    namespace Mft1FrtTccp0{    ///<FRT-ch.0 Cycle Setting Register
        using Addr = Register::Address<0x40021142,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1FrtTcdt0{    ///<FRT-ch.0 Count Value Register
        using Addr = Register::Address<0x40021146,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1FrtTcsa0{    ///<FRT-ch.0 Control Register A
        using Addr = Register::Address<0x40021148,0xffff1c00,0x00000000,unsigned>;
        ///Uses an external input clock (FRCK) as FRT's count clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ecke{}; 
        ///zero interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> irqzf{}; 
        ///"Generates interrupt@ when ""1"" is set to TCSA.IRQZF"
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> irqze{}; 
        ///interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> iclr{}; 
        ///"Generates interrupt when ""1"" is set to TCSA.ICLR"
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> icre{}; 
        ///Enables TCCP's buffer function
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bfe{}; 
        ///Puts FRT in stopping state
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stop{}; 
        ///FRT's count mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mode{}; 
        ///FRT operation state initialization request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sclr{}; 
        ///FRT clock cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> clk{}; 
    }
    namespace Mft1FrtTcsc0{    ///<FRT-ch.0 Control Register C
        using Addr = Register::Address<0x4002114a,0xffff0000,0x00000000,unsigned>;
        ///Current counter value of a Peak value detection mask counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mspc{}; 
        ///Current counter value of a Zero value detection mask counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mszc{}; 
        ///Masked Peak value detection number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> mspi{}; 
        ///Masked Zero value detection number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mszi{}; 
    }
    namespace Mft1FrtTccp1{    ///<FRT-ch.1 Cycle Setting Register
        using Addr = Register::Address<0x4002114e,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1FrtTcdt1{    ///<FRT-ch.1 Count Value Register
        using Addr = Register::Address<0x40021152,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1FrtTcsa1{    ///<FRT-ch.1 Control Register A
        using Addr = Register::Address<0x40021154,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1FrtTcsc1{    ///<FRT-ch.1 Control Register C
        using Addr = Register::Address<0x40021156,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1FrtTccp2{    ///<FRT-ch.2 Cycle Setting Register
        using Addr = Register::Address<0x4002115a,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1FrtTcdt2{    ///<FRT-ch.2 Count Value Register
        using Addr = Register::Address<0x4002115e,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1FrtTcsa2{    ///<FRT-ch.2 Control Register A
        using Addr = Register::Address<0x40021160,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1FrtTcsc2{    ///<FRT-ch.2 Control Register C
        using Addr = Register::Address<0x40021162,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1FrtTcal{    ///<FRT Simultaneous Start Control Register
        using Addr = Register::Address<0x40021164,0xfe00fe00,0x00000000,unsigned>;
        ///Mirror register of the SCLR bit located in TCSA2 register of MFT-unit2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sclr22{}; 
        ///Mirror register of the SCLR bit located in TCSA1 register of MFT-unit2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sclr21{}; 
        ///Mirror register of the SCLR bit located in TCSA0 register of MFT-unit2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sclr20{}; 
        ///Mirror register of the SCLR bit located in TCSA2 register of MFT-unit1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sclr12{}; 
        ///Mirror register of the SCLR bit located in TCSA1 register of MFT-unit1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sclr11{}; 
        ///Mirror register of the SCLR bit located in TCSA0 register of MFT-unit1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sclr10{}; 
        ///Mirror register of the SCLR bit located in TCSA2 register of MFT-unit0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sclr02{}; 
        ///Mirror register of the SCLR bit located in TCSA1 register of MFT-unit0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sclr01{}; 
        ///Mirror register of the SCLR bit located in TCSA0 register of MFT-unit0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sclr00{}; 
        ///Mirror register of the STOP bit located in TCSA2 register of MFT-unit2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> stop22{}; 
        ///Mirror register of the STOP bit located in TCSA1 register of MFT-unit2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> stop21{}; 
        ///Mirror register of the STOP bit located in TCSA0 register of MFT-unit2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stop20{}; 
        ///Mirror register of the STOP bit located in TCSA2 register of MFT-unit1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stop12{}; 
        ///Mirror register of the STOP bit located in TCSA1 register of MFT-unit1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> stop11{}; 
        ///Mirror register of the STOP bit located in TCSA0 register of MFT-unit1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stop10{}; 
        ///Mirror register of the STOP bit located in TCSA2 register of MFT-unit0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> stop02{}; 
        ///Mirror register of the STOP bit located in TCSA1 register of MFT-unit0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> stop01{}; 
        ///Mirror register of the STOP bit located in TCSA0 register of MFT-unit0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> stop00{}; 
    }
    namespace Mft1OcuOccp0{    ///<OCU ch.0 Compare Value Store Register
        using Addr = Register::Address<0x40021102,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1OcuOccp1{    ///<OCU ch.1 Compare Value Store Register
        using Addr = Register::Address<0x40021106,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1OcuOccp2{    ///<OCU ch.2 Compare Value Store Register
        using Addr = Register::Address<0x4002110a,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1OcuOccp3{    ///<OCU ch.3 Compare Value Store Register
        using Addr = Register::Address<0x4002110e,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1OcuOccp4{    ///<OCU ch.4 Compare Value Store Register
        using Addr = Register::Address<0x40021112,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1OcuOccp5{    ///<OCU ch.5 Compare Value Store Register
        using Addr = Register::Address<0x40021116,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1OcuOcsa10{    ///<OCU ch.0/1 Control Register A
        using Addr = Register::Address<0x40021118,0xffffff0c,0x00000000,unsigned char>;
        ///Indicates that a match has already been detected between FRT's count value and OCCP(1) value at OCU ch.(1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iop1{}; 
        ///Indicates that a match has already been detected between FRT's count value and OCCP(0) value at OCU ch.(0). 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> iop0{}; 
        ///"Generates interrupt@ when ""1"" is set to OCSA.IOP1"
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ioe1{}; 
        ///"Generates interrupt@ when ""1"" is set to OCSA.IOP0"
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ioe0{}; 
        ///Enables the operation of OCU ch.(1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cst1{}; 
        ///Enables the operation of OCU ch.(0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cst0{}; 
    }
    namespace Mft1OcuOcsb10{    ///<OCU ch.0/1 Control Register B
        using Addr = Register::Address<0x40021119,0xffffff6c,0x00000000,unsigned char>;
        ///selects FM4 mode for operating mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fm4{}; 
        ///selects OCU's operation mode in combination with OCSC.MOD0 to MOD5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cmod{}; 
        ///Indicates that the RT(1) output pin is in the High-level output state.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> otd1{}; 
        ///Indicates that the RT(0) output pin is in the High-level output state.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> otd0{}; 
    }
    namespace Mft1OcuOcsd10{    ///<OCU ch.0/1 Control Register D
        using Addr = Register::Address<0x4002111a,0xffffff00,0x00000000,unsigned char>;
        ///Enable buffer register function of OCSE(1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> ocse1bufe{}; 
        ///Enable buffer register function of OCSE(0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ocse0bufe{}; 
        ///Enable buffer register function of OCCP(1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> occp1bufe{}; 
        ///Enable buffer register function of OCCP(0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> occp0bufe{}; 
    }
    namespace Mft1OcuOcsa32{    ///<OCU ch.2/3 Control Register A
        using Addr = Register::Address<0x4002111c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1OcuOcsb32{    ///<OCU ch.2/3 Control Register B
        using Addr = Register::Address<0x4002111d,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1OcuOcsd32{    ///<OCU ch.2/3 Control Register D
        using Addr = Register::Address<0x4002111e,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1OcuOcsa54{    ///<OCU ch.4/5 Control Register A
        using Addr = Register::Address<0x40021120,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1OcuOcsb54{    ///<OCU ch.4/5 Control Register B
        using Addr = Register::Address<0x40021121,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1OcuOcsd54{    ///<OCU ch.4/5 Control Register D
        using Addr = Register::Address<0x40021122,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1OcuOcsc{    ///<OCU Control Register C
        using Addr = Register::Address<0x40021124,0xffffc0ff,0x00000000,unsigned>;
        ///OCSC.MOD4 and OCSC.MOD5 determine the operation mode of OCU ch.4/ch.5 in combination with OCSB54.CMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mod5{}; 
        ///OCSC.MOD4 and OCSC.MOD5 determine the operation mode of OCU ch.4/ch.5 in combination with OCSB54.CMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mod4{}; 
        ///OCSC.MOD2 and OCSC.MOD3 determine the operation mode of OCU ch.2/ch.3 in combination with OCSB32.CMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mod3{}; 
        ///OCSC.MOD2 and OCSC.MOD3 determine the operation mode of OCU ch.2/ch.3 in combination with OCSB32.CMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mod2{}; 
        ///OCSC.MOD0 and OCSC.MOD1 determine the operation mode of OCU ch.0/ch.1 in combination with OCSB10.CMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mod1{}; 
        ///OCSC.MOD0 and OCSC.MOD1 determine the operation mode of OCU ch.0/ch.1 in combination with OCSB10.CMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mod0{}; 
    }
    namespace Mft1OcuOcse0{    ///<OCU ch.0 Control Register E
        using Addr = Register::Address<0x40021128,0xffff0000,0x00000000,unsigned>;
        ///specify the setting conditions of the OCU's matching detection register (IOP0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ocse{}; 
    }
    namespace Mft1OcuOcse1{    ///<OCU ch.1 Control Register E
        using Addr = Register::Address<0x4002112c,0x00000000,0x00000000,unsigned>;
        ///specify the setting conditions of the OCU's matching detection register (IOP0/IOP1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ocse{}; 
    }
    namespace Mft1OcuOcse2{    ///<OCU ch.2 Control Register E
        using Addr = Register::Address<0x40021130,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1OcuOcse3{    ///<OCU ch.3 Control Register E
        using Addr = Register::Address<0x40021134,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1OcuOcse4{    ///<OCU ch.4 Control Register E
        using Addr = Register::Address<0x40021138,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1OcuOcse5{    ///<OCU ch.5 Control Register E
        using Addr = Register::Address<0x4002113c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1OcuOcfs10{    ///<OCU ch.0/1 Connecting FRT Select Register
        using Addr = Register::Address<0x40021168,0xffffff00,0x00000000,unsigned char>;
        ///Connects FRT ch.x to OCU ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> fso1{}; 
        ///Connects FRT ch.x to OCU ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fso0{}; 
    }
    namespace Mft1OcuOcfs32{    ///<OCU ch.2/3 Connecting FRT Select Register
        using Addr = Register::Address<0x40021169,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1OcuOcfs54{    ///<OCU ch.4/5 Connecting FRT Select Register
        using Addr = Register::Address<0x4002116a,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1WfgWftf10{    ///<Pulse Counter Value Register for WFG ch.0/1
        using Addr = Register::Address<0x4002118e,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1WfgWfta10{    ///<WFG Timer Value Register for WFG ch.0/1
        using Addr = Register::Address<0x40021190,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1WfgWftb10{    ///<WFG Timer Value Register for WFG ch.0/1
        using Addr = Register::Address<0x40021192,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1WfgWftf32{    ///<Pulse Counter Value Register for WFG ch.2/3
        using Addr = Register::Address<0x40021196,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1WfgWfta32{    ///<WFG Timer Value Register for WFG ch.2/3
        using Addr = Register::Address<0x40021198,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1WfgWftb32{    ///<WFG Timer Value Register for WFG ch.2/3
        using Addr = Register::Address<0x4002119a,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1WfgWftf54{    ///<Pulse Counter Value Register for WFG ch.4/5
        using Addr = Register::Address<0x4002119e,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1WfgWfta54{    ///<WFG Timer Value Register for WFG ch.4/5
        using Addr = Register::Address<0x400211a0,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1WfgWftb54{    ///<WFG Timer Value Register for WFG ch.4/5
        using Addr = Register::Address<0x400211a2,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1WfgWfsa10{    ///<WFG Control Register A for WFG ch.0/1
        using Addr = Register::Address<0x400211a4,0xffffc000,0x00000000,unsigned>;
        ///1specifies polarity for RTO(0) and RTO(1) signal outputs
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> dmod{}; 
        ///specifies how to reflect the CH_PPG signal for each channel of the WFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> pgen{}; 
        ///select the PPG timer unit to be used for each channel of the WFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psel{}; 
        ///selects the output conditions for the CH_GATE output signal of the WFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> gten{}; 
        ///select the WFG's operation mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> tmd{}; 
        ///set the count clock cycle for the WFG timer and Pulse counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dck{}; 
    }
    namespace Mft1WfgWfsa32{    ///<WFG Control Register A for WFG ch.2/3
        using Addr = Register::Address<0x400211a8,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1WfgWfsa54{    ///<WFG Control Register A for WFG ch.4/5
        using Addr = Register::Address<0x400211ac,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1WfgWfir{    ///<WFG Interrupt Control Register
        using Addr = Register::Address<0x400211b0,0xffff0000,0x00000000,unsigned>;
        ///stops the WFG54 reload timer and clears TMIF54
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tmis54{}; 
        ///stops the WFG54 reload timer and clears TMIF54
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tmie54{}; 
        ///clears TIMF54 bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tmic54{}; 
        ///detects the event of WFG54 reload timer interrupt occurrence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tmif54{}; 
        ///stops the WFG32 reload timer and clears TMIF32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tmis32{}; 
        ///1stops the WFG32 reload timer and clears TMIF32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tmie32{}; 
        ///clears TIMF32 bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tmic32{}; 
        ///detects the event of WFG32 reload timer interrupt occurrence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tmif32{}; 
        ///stops the WFG10 reload timer and clears TMIF10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tmis10{}; 
        ///starts WFG10 reload timer and checks the operation state of it.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tmie10{}; 
        ///clears TIMF10 bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tmic10{}; 
        ///detects the event of WFG10 reload timer interrupt occurrence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tmif10{}; 
        ///clears DTIFB bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dticb{}; 
        ///detects DTTIX signal input via analog noise filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtifb{}; 
        ///clears the DTIFA interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtica{}; 
        ///detects the event of DTTIX signal input via digital noise-canceller
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtifa{}; 
    }
    namespace Mft1WfgNzcl{    ///<NZCL Control Register
        using Addr = Register::Address<0x400211b4,0xffff8cc0,0x00000000,unsigned>;
        ///selects whether a WFG54 reload timer interrupt is masked when the WFIR.TMIF54 flag is set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wim54{}; 
        ///selects whether a WFG32 reload timer interrupt is masked when the WFIR.TMIF32 flag is set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wim32{}; 
        ///selects whether a WFG10 reload timer interrupt is masked when the WFIR.TMIF10 flag is set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wim10{}; 
        ///selects whether a DTIF interrupt is masked when the WFIR.TIFDTIFB flag is set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dimb{}; 
        ///selects whether a DTIF interrupt is masked when the WFIR.DTIFA flag is set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dima{}; 
        ///Enables the path from DTTIX pin to analog noise filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dtieb{}; 
        ///sets the WFIR.DTIFA register by writing to the register from the CPU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdti{}; 
        ///set the noise-canceling width for a digital noise-canceller
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> nws{}; 
        ///Enables the path for digital noise filter from DTTIX pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtiea{}; 
    }
    namespace Mft1IcuIcfs10{    ///<ICU ch.0/1 Connecting FRT Select Register
        using Addr = Register::Address<0x4002116c,0xffffff00,0x00000000,unsigned char>;
        ///Connects FRT ch.x to ICU ch.(1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> fsi1{}; 
        ///Connects FRT ch.x to ICU ch.(0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fsi0{}; 
    }
    namespace Mft1IcuIcfs32{    ///<ICU ch.2/3 Connecting FRT Select Register
        using Addr = Register::Address<0x4002116d,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1IcuIccp0{    ///<ICU-ch.0 Capture Value Store Register
        using Addr = Register::Address<0x40021176,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1IcuIccp1{    ///<ICU-ch.1 Capture Value Store Register
        using Addr = Register::Address<0x4002117a,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1IcuIccp2{    ///<ICU-ch.2 Capture Value Store Register
        using Addr = Register::Address<0x4002117e,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1IcuIccp3{    ///<ICU-ch.3 Capture Value Store Register
        using Addr = Register::Address<0x40021182,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1IcuIcsa10{    ///<ICU ch.0/1 Control Register A
        using Addr = Register::Address<0x40021184,0xffffff00,0x00000000,unsigned char>;
        ///Indicates that a valid edge has been detected at ICU ch.(1) and the capture operation has been performed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> icp1{}; 
        ///Indicates that a valid edge has been detected at ICU ch.(0) and the capture operation has been performed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> icp0{}; 
        ///"Generates interrupt@ when ""1"" is set to ICSA.ICP1."
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ice1{}; 
        ///"Generates interrupt@ when ""1"" is set to ICSA.ICP0."
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ice0{}; 
        ///enables/disables the operation of ICU-ch.(1) and selects a valid edge(s)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eg1{}; 
        ///enables/disables the operation of ICU-ch.(0) and selects a valid edge(s)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eg0{}; 
    }
    namespace Mft1IcuIcsb10{    ///<ICU ch.0/1 Control Register B
        using Addr = Register::Address<0x40021185,0xfffffffc,0x00000000,unsigned char>;
        ///indicates the latest valid edge of ICU ch.(1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> iei1{}; 
        ///indicates the latest valid edge of ICU ch.(0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> iei0{}; 
    }
    namespace Mft1IcuIcsa32{    ///<ICU ch.2/3 Control Register A
        using Addr = Register::Address<0x40021188,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1IcuIcsb32{    ///<ICU ch.2/3 Control Register B
        using Addr = Register::Address<0x40021189,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1AdcmpAcfs10{    ///<ADCMP ch.0/1 Connecting FRT Select Register
        using Addr = Register::Address<0x40021170,0xffffff00,0x00000000,unsigned char>;
        ///specify the FRT to be connected to ADCMP ch.(1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> fsa1{}; 
        ///specify the FRT to be connected to ADCMP ch.(0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fsa0{}; 
    }
    namespace Mft1AdcmpAcfs32{    ///<ADCMP ch.2/3 Connecting FRT Select Register
        using Addr = Register::Address<0x40021171,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1AdcmpAcfs54{    ///<ADCMP ch.4/5 Connecting FRT Select Register
        using Addr = Register::Address<0x40021172,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1AdcmpAcmp0{    ///<ADCMP ch.0 Compare Value Store Register
        using Addr = Register::Address<0x400211ba,0xffff0000,0x00000000,unsigned>;
        ///0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> acmp{}; 
    }
    namespace Mft1AdcmpAcmp1{    ///<ADCMP ch.1 Compare Value Store Register
        using Addr = Register::Address<0x400211be,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1AdcmpAcmp2{    ///<ADCMP ch.2 Compare Value Store Register
        using Addr = Register::Address<0x400211c2,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1AdcmpAcmp3{    ///<ADCMP ch.3 Compare Value Store Register
        using Addr = Register::Address<0x400211c6,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1AdcmpAcmp4{    ///<ADCMP ch.4 Compare Value Store Register
        using Addr = Register::Address<0x400211ca,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1AdcmpAcmp5{    ///<ADCMP ch.5 Compare Value Store Register
        using Addr = Register::Address<0x400211ce,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1AdcmpAcsa{    ///<ADCMP Control Register A
        using Addr = Register::Address<0x400211d0,0xffffc0c0,0x00000000,unsigned>;
        ///selects compatible operation of ADCMP ch.5 and ch.4 with FM3 Family products
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sel54{}; 
        ///selects compatible operation of ADCMP ch.3 and ch.2 with FM3 Family products
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sel32{}; 
        ///selects compatible operation of ADCMP ch.1 and ch.0 with FM3 Family products
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sel10{}; 
        ///enables/disables compatibility of ADCMP ch.5 and ch.4 with FM3 Family products
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> ce54{}; 
        ///enables/disables compatibility of ADCMP ch.3 and ch.2 with FM3 Family products
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ce32{}; 
        ///enables/disables compatibility of ADCMP ch.1 and ch.0 with FM3 Family products
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ce10{}; 
    }
    namespace Mft1AdcmpAcsc0{    ///<ADCMP ch.0 Control Register C
        using Addr = Register::Address<0x400211d4,0xffffffe0,0x00000000,unsigned char>;
        ///specify the destinations of ADC start signals that are output by ADCMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> adsel{}; 
        ///select enable/disable and transfer timing for buffer function of the ACMP register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> bufe{}; 
    }
    namespace Mft1AdcmpAcsd0{    ///<ADCMP ch.0 Control Register D
        using Addr = Register::Address<0x400211d5,0xffffff0c,0x00000000,unsigned char>;
        ///enables/disables the operation of the ADCMP when the FRT is "0x0000"
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ze{}; 
        ///enables/disables the operation of the ADCMP that is counting up for the connected FRT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ue{}; 
        ///enables/disables the operation of the ADCMP that is counting down at the Peak value of the connected FRT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe{}; 
        ///enables/disables the operation of the ADCMP that is counting down for the connected FRT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> de{}; 
        ///selects the OCU OCCP register that will become the start for offset start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ocus{}; 
        ///selects operation mode for ADCMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> amod{}; 
    }
    namespace Mft1AdcmpAcsc1{    ///<ADCMP ch.1 Control Register C
        using Addr = Register::Address<0x400211d8,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1AdcmpAcsd1{    ///<ADCMP ch.1 Control Register D
        using Addr = Register::Address<0x400211d9,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1AdcmpAcsc2{    ///<ADCMP ch.2 Control Register C
        using Addr = Register::Address<0x400211dc,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1AdcmpAcsd2{    ///<ADCMP ch.2 Control Register D
        using Addr = Register::Address<0x400211dd,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1AdcmpAcsc3{    ///<ADCMP ch.3 Control Register C
        using Addr = Register::Address<0x400211e0,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1AdcmpAcsd3{    ///<ADCMP ch.3 Control Register D
        using Addr = Register::Address<0x400211e1,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1AdcmpAcsc4{    ///<ADCMP ch.4 Control Register C
        using Addr = Register::Address<0x400211e4,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1AdcmpAcsd4{    ///<ADCMP ch.4 Control Register D
        using Addr = Register::Address<0x400211e5,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1AdcmpAcsc5{    ///<ADCMP ch.5 Control Register C
        using Addr = Register::Address<0x400211e8,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mft1AdcmpAcsd5{    ///<ADCMP ch.5 Control Register D
        using Addr = Register::Address<0x400211e9,0xffffffff,0x00000000,unsigned>;
    }
}
