#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//UDC2 AHB Bridge
    namespace EmIfvrr{    ///<ADiC Version_Revision Register
        using Addr = Register::Address<0x4000a000,0x00000000,0x00000000,unsigned>;
        ///REV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rev{}; 
        ///VER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ver{}; 
    }
    namespace EmIfcr{    ///<ADiC MODE Setting Register
        using Addr = Register::Address<0x4000a004,0xfffff8ff,0x00000000,unsigned>;
        ///IOTOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> iotout{}; 
        ///DMATOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dmatout{}; 
        ///DMAERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dmaerr{}; 
    }
    namespace EmIfintst{    ///<ADiC  Interrupt Status Register
        using Addr = Register::Address<0x4000a010,0xff7870fe,0x00000000,unsigned>;
        ///EMDMACINT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> emdmacint{}; 
        ///SLAVE0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> slave0{}; 
        ///SLAVE1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> slave1{}; 
        ///SLAVE2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> slave2{}; 
        ///SLAVE3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> slave3{}; 
        ///IOTOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> iotout{}; 
        ///MASTER0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> master0{}; 
        ///MASTER1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> master1{}; 
        ///MASTER2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> master2{}; 
        ///DMATOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dmatout{}; 
    }
    namespace EmIfinten{    ///<ADiC Interrupt Enable Register
        using Addr = Register::Address<0x4000a014,0xff7870fe,0x00000000,unsigned>;
        ///EMDMACINT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> emdmacint{}; 
        ///SLAVE0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> slave0{}; 
        ///SLAVE1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> slave1{}; 
        ///SLAVE2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> slave2{}; 
        ///SLAVE3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> slave3{}; 
        ///IOTOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> iotout{}; 
        ///MASTER0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> master0{}; 
        ///MASTER1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> master1{}; 
        ///MASTER2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> master2{}; 
        ///DMATOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dmatout{}; 
    }
    namespace EmDcr{    ///<EMDMAC Movement Control Register
        using Addr = Register::Address<0x4000b000,0xffffff8e,0x00000000,unsigned>;
        ///SWR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swr{}; 
        ///DL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> dl{}; 
        ///DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> de{}; 
    }
    namespace EmDten{    ///<Transmission Instructions Register
        using Addr = Register::Address<0x4000b008,0xfffffffe,0x00000000,unsigned>;
        ///TRNS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trns{}; 
    }
    namespace EmDren{    ///<Reception instructions Register
        using Addr = Register::Address<0x4000b010,0xfffffffe,0x00000000,unsigned>;
        ///RCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rcv{}; 
    }
    namespace EmDtdpr{    ///<Transmission Dscripter top address setting Register
        using Addr = Register::Address<0x4000b018,0x00000000,0x00000000,unsigned>;
        ///TDPA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tdpa{}; 
    }
    namespace EmDrdpr{    ///<Reception Dscripter top address setting Register
        using Addr = Register::Address<0x4000b020,0x00000000,0x00000000,unsigned>;
        ///RDPA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rdpa{}; 
    }
    namespace EmDintst{    ///<EMSMAC Interrupt Status Indication Register
        using Addr = Register::Address<0x4000b028,0xb800f060,0x00000000,unsigned>;
        ///RINT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rint1{}; 
        ///RINT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rint2{}; 
        ///RINT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rint3{}; 
        ///RINT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rint4{}; 
        ///RINT5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rint5{}; 
        ///RINT8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rint8{}; 
        ///TINT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tint1{}; 
        ///TINT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tint2{}; 
        ///TINT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tint3{}; 
        ///TINT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tint4{}; 
        ///RFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rfe{}; 
        ///RDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rde{}; 
        ///FRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> frc{}; 
        ///TFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tfe{}; 
        ///TDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tde{}; 
        ///FTC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ftc{}; 
        ///MINT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mint{}; 
        ///BER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ber{}; 
        ///RFRMER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rfrmer{}; 
        ///RABT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rabt{}; 
        ///TABT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> tabt{}; 
        ///TWB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> twb{}; 
    }
    namespace EmDinten{    ///<EMDMAC Interrupt mask setting Register
        using Addr = Register::Address<0x4000b030,0xb800f060,0x00000000,unsigned>;
        ///RINT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rint1{}; 
        ///RINT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rint2{}; 
        ///RINT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rint3{}; 
        ///RINT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rint4{}; 
        ///RINT5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rint5{}; 
        ///RINT8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rint8{}; 
        ///TINT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tint1{}; 
        ///TINT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tint2{}; 
        ///TINT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tint3{}; 
        ///TINT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tint4{}; 
        ///RFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rfe{}; 
        ///RDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rde{}; 
        ///FRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> frc{}; 
        ///TFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tfe{}; 
        ///TDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tde{}; 
        ///FTC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ftc{}; 
        ///MINT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mint{}; 
        ///BER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ber{}; 
        ///RFRMER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rfrmer{}; 
        ///RABT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rabt{}; 
        ///TABT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> tabt{}; 
        ///TWB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> twb{}; 
    }
    namespace EmDerr{    ///<Err Mask Setting Register
        using Addr = Register::Address<0x4000b038,0xfffff060,0x00000000,unsigned>;
        ///RINT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rint1{}; 
        ///RINT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rint2{}; 
        ///RINT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rint3{}; 
        ///RINT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rint4{}; 
        ///RINT5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rint5{}; 
        ///RINT8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rint8{}; 
        ///TINT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tint1{}; 
        ///TINT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tint2{}; 
        ///TINT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tint3{}; 
        ///TINT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tint4{}; 
    }
    namespace EmDmfcr{    ///<Disposal Frame Count Register
        using Addr = Register::Address<0x4000b040,0xffff0000,0x00000000,unsigned>;
        ///MIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mis{}; 
    }
    namespace EmDtftr{    ///<Transmission FIFO thresholding Register
        using Addr = Register::Address<0x4000b048,0xfffff800,0x00000000,unsigned>;
        ///TFTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> tfth{}; 
    }
    namespace EmDfcdr{    ///<Outside FIFO Capacity Setting Register
        using Addr = Register::Address<0x4000b050,0xffffe0e0,0x00000000,unsigned>;
        ///RA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ra{}; 
        ///TA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> ta{}; 
    }
    namespace EmDrrcr{    ///<Reception Start Reset Setting Register
        using Addr = Register::Address<0x4000b058,0xfffffffc,0x00000000,unsigned>;
        ///RR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rr{}; 
        ///RNR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rnr{}; 
    }
    namespace EmDeadr{    ///<DMA Error Address Register
        using Addr = Register::Address<0x4000b060,0x00000000,0x00000000,unsigned>;
        ///ERRADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> erradr{}; 
    }
    namespace EmDtufr{    ///<Transmission FIFO Underflow Count Register
        using Addr = Register::Address<0x4000b064,0xffff0000,0x00000000,unsigned>;
        ///UNDER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> under{}; 
    }
    namespace EmDrofr{    ///<Reception FIFO Underflow Count Register
        using Addr = Register::Address<0x4000b068,0xffff0000,0x00000000,unsigned>;
        ///OVER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> over{}; 
    }
    namespace EmDrbtr{    ///<Transmission FIFO Busy Transmission Thresholding Register
        using Addr = Register::Address<0x4000b070,0xfff8fff8,0x00000000,unsigned>;
        ///RFDO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rfdo{}; 
        ///RFFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> rffo{}; 
    }
    namespace EmDrpdr{    ///<Reception Data Padding setting Register
        using Addr = Register::Address<0x4000b078,0xfffcffc0,0x00000000,unsigned>;
        ///PADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> padr{}; 
        ///PADS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pads{}; 
    }
    namespace EmDtimer{    ///<Transmission Interrupt Mode Setting Register
        using Addr = Register::Address<0x4000b07c,0xffffffee,0x00000000,unsigned>;
        ///TIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tis{}; 
        ///TIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim{}; 
    }
    namespace EmDrbar{    ///<Reception Buffer Light Address For debugging Register
        using Addr = Register::Address<0x4000b0c8,0x00000000,0x00000000,unsigned>;
        ///RBWA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rbwa{}; 
    }
    namespace EmDrdar{    ///<Reception Dscripter Read Address For Debugging Register
        using Addr = Register::Address<0x4000b0cc,0x00000000,0x00000000,unsigned>;
        ///RDRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdra{}; 
    }
    namespace EmDtbar{    ///<Transmission Read Address For Debugging Register
        using Addr = Register::Address<0x4000b0d4,0x00000000,0x00000000,unsigned>;
        ///TBRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tbra{}; 
    }
    namespace EmDtdar{    ///<Transmission Dscripter Read Address For Debugging Register
        using Addr = Register::Address<0x4000b0d8,0x00000000,0x00000000,unsigned>;
        ///TDRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tdra{}; 
    }
    namespace EmCcr{    ///<Ether FeLic Active Mode Register
        using Addr = Register::Address<0x4000b100,0xffe0ed90,0x00000000,unsigned>;
        ///PRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> prm{}; 
        ///DPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dpm{}; 
        ///OLB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> olb{}; 
        ///ILB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ilb{}; 
        ///TPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tpe{}; 
        ///RPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rpe{}; 
        ///MPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mpm{}; 
        ///CER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cer{}; 
        ///TXF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> txf{}; 
        ///RXF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rxf{}; 
        ///PFR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pfr{}; 
        ///TPF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tpf{}; 
        ///TPC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tpc{}; 
    }
    namespace EmCrflr{    ///<Long Frame Length Check Level Setting Register
        using Addr = Register::Address<0x4000b108,0xfffff000,0x00000000,unsigned>;
        ///FLEN_ULMT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> flenUlmt{}; 
    }
    namespace EmCintst{    ///<Status indication Register
        using Addr = Register::Address<0x4000b110,0xffffffc8,0x00000000,unsigned>;
        ///FCIDTCT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fcidtct{}; 
        ///MAGICPKT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> magicpkt{}; 
        ///LINKCHNG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> linkchng{}; 
        ///PSRTROV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> psrtrov{}; 
        ///BRDSRCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> brdsrcv{}; 
    }
    namespace EmCinten{    ///<Interrupt mask setting Register
        using Addr = Register::Address<0x4000b118,0xffffffc8,0x00000000,unsigned>;
        ///FCIDTCT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fcidtct{}; 
        ///MAGICPKT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> magicpkt{}; 
        ///LINKCHNG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> linkchng{}; 
        ///PSRTROV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> psrtrov{}; 
        ///BRDSRCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> brdsrcv{}; 
    }
    namespace EmCmiicr{    ///<MII Control Register
        using Addr = Register::Address<0x4000b120,0xfffffff0,0x00000000,unsigned>;
        ///MDC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mdc{}; 
        ///MMD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mmd{}; 
        ///MDO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdo{}; 
        ///MDI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mdi{}; 
    }
    namespace EmCphyst{    ///<Status Signal Register
        using Addr = Register::Address<0x4000b128,0xfffffffe,0x00000000,unsigned>;
        ///LINK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> link{}; 
    }
    namespace EmCicr{    ///<IPG Counter Setting Register
        using Addr = Register::Address<0x4000b150,0xffffffe0,0x00000000,unsigned>;
        ///IPG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ipg{}; 
    }
    namespace EmCapr{    ///<Auto Pause Parameter Setting Register
        using Addr = Register::Address<0x4000b154,0xffff0000,0x00000000,unsigned>;
        ///APAUSE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> apause{}; 
    }
    namespace EmCmpr{    ///<Manual Pause Parameter setting Register
        using Addr = Register::Address<0x4000b158,0xffff0000,0x00000000,unsigned>;
        ///MPAUSE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mpause{}; 
    }
    namespace EmCrpcr{    ///<Reception PAUSE Frame Counter Register
        using Addr = Register::Address<0x4000b160,0xffffff00,0x00000000,unsigned>;
        ///RPAUSE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rpause{}; 
    }
    namespace EmCpulr{    ///<PAUSE Frame Retransmission Number Of Times Setting Register
        using Addr = Register::Address<0x4000b164,0xffff0000,0x00000000,unsigned>;
        ///TXPAUSE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpause{}; 
    }
    namespace EmCpcr{    ///<PAUSE Frame Retransmission Number Of Times Counter Register
        using Addr = Register::Address<0x4000b168,0xffff0000,0x00000000,unsigned>;
        ///TPAUSE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tpause{}; 
    }
    namespace EmCbrr{    ///<Broadcast Frame Reception Number Of Times Setting Register
        using Addr = Register::Address<0x4000b16c,0xffff0000,0x00000000,unsigned>;
        ///BCF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> bcf{}; 
    }
    namespace EmCmahr{    ///<Mac Address Register (High Rank)
        using Addr = Register::Address<0x4000b1c0,0x00000000,0x00000000,unsigned>;
        ///MACADRH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> macadrh{}; 
    }
    namespace EmCmalr{    ///<Mac Address Register (Low Rank)
        using Addr = Register::Address<0x4000b1c8,0x00000000,0x00000000,unsigned>;
        ///MACADRL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> macadrl{}; 
    }
    namespace EmCtrer{    ///<TINT1 Cunter Register
        using Addr = Register::Address<0x4000b1d0,0x00000000,0x00000000,unsigned>;
        ///TINT1CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tint1cnt{}; 
    }
    namespace EmCtcdr{    ///<TINT2 Cunter Register
        using Addr = Register::Address<0x4000b1d4,0x00000000,0x00000000,unsigned>;
        ///TINT2CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tint2cnt{}; 
    }
    namespace EmCtclr{    ///<TINT3 Cunter Register
        using Addr = Register::Address<0x4000b1d8,0x00000000,0x00000000,unsigned>;
        ///TINT3CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tint3cnt{}; 
    }
    namespace EmCtndr{    ///<TINT4 Cunter Register
        using Addr = Register::Address<0x4000b1dc,0x00000000,0x00000000,unsigned>;
        ///TINT4CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tint4cnt{}; 
    }
    namespace EmCrcer{    ///<RINT1 Cunter Register
        using Addr = Register::Address<0x4000b1e4,0x00000000,0x00000000,unsigned>;
        ///RINT1CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rint1cnt{}; 
    }
    namespace EmCrfer{    ///<RINT2 Cunter Register
        using Addr = Register::Address<0x4000b1e8,0x00000000,0x00000000,unsigned>;
        ///RINT2CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rint2cnt{}; 
    }
    namespace EmCrlsr{    ///<RINT3 Cunter Register
        using Addr = Register::Address<0x4000b1ec,0x00000000,0x00000000,unsigned>;
        ///RINT3CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rint3cnt{}; 
    }
    namespace EmCrlor{    ///<RINT4 Cunter Register
        using Addr = Register::Address<0x4000b1f0,0x00000000,0x00000000,unsigned>;
        ///RINT4CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rint4cnt{}; 
    }
    namespace EmCrrfr{    ///<RINT5 Cunter Register
        using Addr = Register::Address<0x4000b1f4,0x00000000,0x00000000,unsigned>;
        ///RINT5CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rint5cnt{}; 
    }
    namespace EmCrmfr{    ///<RINT8 Cunter Register
        using Addr = Register::Address<0x4000b1f8,0x00000000,0x00000000,unsigned>;
        ///RINT8CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rint8cnt{}; 
    }
}
