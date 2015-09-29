#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//UDC2 AHB Bridge
    namespace Noneifvrr{    ///<ADiC Version_Revision Register
        using Addr = Register::Address<0x4000a000,0x00000000,0,unsigned>;
        ///REV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rev{}; 
        ///VER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ver{}; 
    }
    namespace Noneifcr{    ///<ADiC MODE Setting Register
        using Addr = Register::Address<0x4000a004,0xfffff8ff,0,unsigned>;
        ///IOTOUT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> iotout{}; 
        ///DMATOUT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dmatout{}; 
        ///DMAERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dmaerr{}; 
    }
    namespace Noneifintst{    ///<ADiC  Interrupt Status Register
        using Addr = Register::Address<0x4000a010,0xff7870fe,0,unsigned>;
        ///EMDMACINT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> emdmacint{}; 
        ///SLAVE0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> slave0{}; 
        ///SLAVE1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> slave1{}; 
        ///SLAVE2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> slave2{}; 
        ///SLAVE3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> slave3{}; 
        ///IOTOUT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> iotout{}; 
        ///MASTER0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> master0{}; 
        ///MASTER1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> master1{}; 
        ///MASTER2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> master2{}; 
        ///DMATOUT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dmatout{}; 
    }
    namespace Noneifinten{    ///<ADiC Interrupt Enable Register
        using Addr = Register::Address<0x4000a014,0xff7870fe,0,unsigned>;
        ///EMDMACINT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> emdmacint{}; 
        ///SLAVE0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> slave0{}; 
        ///SLAVE1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> slave1{}; 
        ///SLAVE2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> slave2{}; 
        ///SLAVE3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> slave3{}; 
        ///IOTOUT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> iotout{}; 
        ///MASTER0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> master0{}; 
        ///MASTER1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> master1{}; 
        ///MASTER2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> master2{}; 
        ///DMATOUT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dmatout{}; 
    }
    namespace Nonedcr{    ///<EMDMAC Movement Control Register
        using Addr = Register::Address<0x4000b000,0xffffff8e,0,unsigned>;
        ///SWR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swr{}; 
        ///DL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> dl{}; 
        ///DE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> de{}; 
    }
    namespace Nonedten{    ///<Transmission Instructions Register
        using Addr = Register::Address<0x4000b008,0xfffffffe,0,unsigned>;
        ///TRNS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trns{}; 
    }
    namespace Nonedren{    ///<Reception instructions Register
        using Addr = Register::Address<0x4000b010,0xfffffffe,0,unsigned>;
        ///RCV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rcv{}; 
    }
    namespace Nonedtdpr{    ///<Transmission Dscripter top address setting Register
        using Addr = Register::Address<0x4000b018,0x00000000,0,unsigned>;
        ///TDPA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tdpa{}; 
    }
    namespace Nonedrdpr{    ///<Reception Dscripter top address setting Register
        using Addr = Register::Address<0x4000b020,0x00000000,0,unsigned>;
        ///RDPA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rdpa{}; 
    }
    namespace Nonedintst{    ///<EMSMAC Interrupt Status Indication Register
        using Addr = Register::Address<0x4000b028,0xb800f060,0,unsigned>;
        ///RINT1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rint1{}; 
        ///RINT2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rint2{}; 
        ///RINT3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rint3{}; 
        ///RINT4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rint4{}; 
        ///RINT5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rint5{}; 
        ///RINT8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rint8{}; 
        ///TINT1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tint1{}; 
        ///TINT2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tint2{}; 
        ///TINT3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tint3{}; 
        ///TINT4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tint4{}; 
        ///RFE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rfe{}; 
        ///RDE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rde{}; 
        ///FRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> frc{}; 
        ///TFE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tfe{}; 
        ///TDE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tde{}; 
        ///FTC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ftc{}; 
        ///MINT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mint{}; 
        ///BER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ber{}; 
        ///RFRMER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rfrmer{}; 
        ///RABT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rabt{}; 
        ///TABT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> tabt{}; 
        ///TWB
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> twb{}; 
    }
    namespace Nonedinten{    ///<EMDMAC Interrupt mask setting Register
        using Addr = Register::Address<0x4000b030,0xb800f060,0,unsigned>;
        ///RINT1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rint1{}; 
        ///RINT2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rint2{}; 
        ///RINT3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rint3{}; 
        ///RINT4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rint4{}; 
        ///RINT5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rint5{}; 
        ///RINT8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rint8{}; 
        ///TINT1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tint1{}; 
        ///TINT2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tint2{}; 
        ///TINT3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tint3{}; 
        ///TINT4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tint4{}; 
        ///RFE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rfe{}; 
        ///RDE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rde{}; 
        ///FRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> frc{}; 
        ///TFE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tfe{}; 
        ///TDE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tde{}; 
        ///FTC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ftc{}; 
        ///MINT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mint{}; 
        ///BER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ber{}; 
        ///RFRMER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rfrmer{}; 
        ///RABT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rabt{}; 
        ///TABT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> tabt{}; 
        ///TWB
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> twb{}; 
    }
    namespace Nonederr{    ///<Err Mask Setting Register
        using Addr = Register::Address<0x4000b038,0xfffff060,0,unsigned>;
        ///RINT1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rint1{}; 
        ///RINT2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rint2{}; 
        ///RINT3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rint3{}; 
        ///RINT4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rint4{}; 
        ///RINT5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rint5{}; 
        ///RINT8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rint8{}; 
        ///TINT1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tint1{}; 
        ///TINT2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tint2{}; 
        ///TINT3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tint3{}; 
        ///TINT4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tint4{}; 
    }
    namespace Nonedmfcr{    ///<Disposal Frame Count Register
        using Addr = Register::Address<0x4000b040,0xffff0000,0,unsigned>;
        ///MIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mis{}; 
    }
    namespace Nonedtftr{    ///<Transmission FIFO thresholding Register
        using Addr = Register::Address<0x4000b048,0xfffff800,0,unsigned>;
        ///TFTH
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> tfth{}; 
    }
    namespace Nonedfcdr{    ///<Outside FIFO Capacity Setting Register
        using Addr = Register::Address<0x4000b050,0xffffe0e0,0,unsigned>;
        ///RA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ra{}; 
        ///TA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> ta{}; 
    }
    namespace Nonedrrcr{    ///<Reception Start Reset Setting Register
        using Addr = Register::Address<0x4000b058,0xfffffffc,0,unsigned>;
        ///RR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rr{}; 
        ///RNR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rnr{}; 
    }
    namespace Nonedeadr{    ///<DMA Error Address Register
        using Addr = Register::Address<0x4000b060,0x00000000,0,unsigned>;
        ///ERRADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> erradr{}; 
    }
    namespace Nonedtufr{    ///<Transmission FIFO Underflow Count Register
        using Addr = Register::Address<0x4000b064,0xffff0000,0,unsigned>;
        ///UNDER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> under{}; 
    }
    namespace Nonedrofr{    ///<Reception FIFO Underflow Count Register
        using Addr = Register::Address<0x4000b068,0xffff0000,0,unsigned>;
        ///OVER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> over{}; 
    }
    namespace Nonedrbtr{    ///<Transmission FIFO Busy Transmission Thresholding Register
        using Addr = Register::Address<0x4000b070,0xfff8fff8,0,unsigned>;
        ///RFDO
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rfdo{}; 
        ///RFFO
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> rffo{}; 
    }
    namespace Nonedrpdr{    ///<Reception Data Padding setting Register
        using Addr = Register::Address<0x4000b078,0xfffcffc0,0,unsigned>;
        ///PADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> padr{}; 
        ///PADS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pads{}; 
    }
    namespace Nonedtimer{    ///<Transmission Interrupt Mode Setting Register
        using Addr = Register::Address<0x4000b07c,0xffffffee,0,unsigned>;
        ///TIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tis{}; 
        ///TIM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim{}; 
    }
    namespace Nonedrbar{    ///<Reception Buffer Light Address For debugging Register
        using Addr = Register::Address<0x4000b0c8,0x00000000,0,unsigned>;
        ///RBWA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rbwa{}; 
    }
    namespace Nonedrdar{    ///<Reception Dscripter Read Address For Debugging Register
        using Addr = Register::Address<0x4000b0cc,0x00000000,0,unsigned>;
        ///RDRA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rdra{}; 
    }
    namespace Nonedtbar{    ///<Transmission Read Address For Debugging Register
        using Addr = Register::Address<0x4000b0d4,0x00000000,0,unsigned>;
        ///TBRA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tbra{}; 
    }
    namespace Nonedtdar{    ///<Transmission Dscripter Read Address For Debugging Register
        using Addr = Register::Address<0x4000b0d8,0x00000000,0,unsigned>;
        ///TDRA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tdra{}; 
    }
    namespace Noneccr{    ///<Ether FeLic Active Mode Register
        using Addr = Register::Address<0x4000b100,0xffe0ed90,0,unsigned>;
        ///PRM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> prm{}; 
        ///DPM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dpm{}; 
        ///OLB
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> olb{}; 
        ///ILB
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ilb{}; 
        ///TPE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tpe{}; 
        ///RPE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rpe{}; 
        ///MPM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mpm{}; 
        ///CER
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cer{}; 
        ///TXF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> txf{}; 
        ///RXF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rxf{}; 
        ///PFR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pfr{}; 
        ///TPF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tpf{}; 
        ///TPC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tpc{}; 
    }
    namespace Nonecrflr{    ///<Long Frame Length Check Level Setting Register
        using Addr = Register::Address<0x4000b108,0xfffff000,0,unsigned>;
        ///FLEN_ULMT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> flenUlmt{}; 
    }
    namespace Nonecintst{    ///<Status indication Register
        using Addr = Register::Address<0x4000b110,0xffffffc8,0,unsigned>;
        ///FCIDTCT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fcidtct{}; 
        ///MAGICPKT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> magicpkt{}; 
        ///LINKCHNG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> linkchng{}; 
        ///PSRTROV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> psrtrov{}; 
        ///BRDSRCV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> brdsrcv{}; 
    }
    namespace Nonecinten{    ///<Interrupt mask setting Register
        using Addr = Register::Address<0x4000b118,0xffffffc8,0,unsigned>;
        ///FCIDTCT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fcidtct{}; 
        ///MAGICPKT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> magicpkt{}; 
        ///LINKCHNG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> linkchng{}; 
        ///PSRTROV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> psrtrov{}; 
        ///BRDSRCV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> brdsrcv{}; 
    }
    namespace Nonecmiicr{    ///<MII Control Register
        using Addr = Register::Address<0x4000b120,0xfffffff0,0,unsigned>;
        ///MDC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mdc{}; 
        ///MMD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mmd{}; 
        ///MDO
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdo{}; 
        ///MDI
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mdi{}; 
    }
    namespace Nonecphyst{    ///<Status Signal Register
        using Addr = Register::Address<0x4000b128,0xfffffffe,0,unsigned>;
        ///LINK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> link{}; 
    }
    namespace Nonecicr{    ///<IPG Counter Setting Register
        using Addr = Register::Address<0x4000b150,0xffffffe0,0,unsigned>;
        ///IPG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ipg{}; 
    }
    namespace Nonecapr{    ///<Auto Pause Parameter Setting Register
        using Addr = Register::Address<0x4000b154,0xffff0000,0,unsigned>;
        ///APAUSE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> apause{}; 
    }
    namespace Nonecmpr{    ///<Manual Pause Parameter setting Register
        using Addr = Register::Address<0x4000b158,0xffff0000,0,unsigned>;
        ///MPAUSE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mpause{}; 
    }
    namespace Nonecrpcr{    ///<Reception PAUSE Frame Counter Register
        using Addr = Register::Address<0x4000b160,0xffffff00,0,unsigned>;
        ///RPAUSE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rpause{}; 
    }
    namespace Nonecpulr{    ///<PAUSE Frame Retransmission Number Of Times Setting Register
        using Addr = Register::Address<0x4000b164,0xffff0000,0,unsigned>;
        ///TXPAUSE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpause{}; 
    }
    namespace Nonecpcr{    ///<PAUSE Frame Retransmission Number Of Times Counter Register
        using Addr = Register::Address<0x4000b168,0xffff0000,0,unsigned>;
        ///TPAUSE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tpause{}; 
    }
    namespace Nonecbrr{    ///<Broadcast Frame Reception Number Of Times Setting Register
        using Addr = Register::Address<0x4000b16c,0xffff0000,0,unsigned>;
        ///BCF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> bcf{}; 
    }
    namespace Nonecmahr{    ///<Mac Address Register (High Rank)
        using Addr = Register::Address<0x4000b1c0,0x00000000,0,unsigned>;
        ///MACADRH
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> macadrh{}; 
    }
    namespace Nonecmalr{    ///<Mac Address Register (Low Rank)
        using Addr = Register::Address<0x4000b1c8,0x00000000,0,unsigned>;
        ///MACADRL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> macadrl{}; 
    }
    namespace Nonectrer{    ///<TINT1 Cunter Register
        using Addr = Register::Address<0x4000b1d0,0x00000000,0,unsigned>;
        ///TINT1CNT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tint1cnt{}; 
    }
    namespace Nonectcdr{    ///<TINT2 Cunter Register
        using Addr = Register::Address<0x4000b1d4,0x00000000,0,unsigned>;
        ///TINT2CNT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tint2cnt{}; 
    }
    namespace Nonectclr{    ///<TINT3 Cunter Register
        using Addr = Register::Address<0x4000b1d8,0x00000000,0,unsigned>;
        ///TINT3CNT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tint3cnt{}; 
    }
    namespace Nonectndr{    ///<TINT4 Cunter Register
        using Addr = Register::Address<0x4000b1dc,0x00000000,0,unsigned>;
        ///TINT4CNT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tint4cnt{}; 
    }
    namespace Nonecrcer{    ///<RINT1 Cunter Register
        using Addr = Register::Address<0x4000b1e4,0x00000000,0,unsigned>;
        ///RINT1CNT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rint1cnt{}; 
    }
    namespace Nonecrfer{    ///<RINT2 Cunter Register
        using Addr = Register::Address<0x4000b1e8,0x00000000,0,unsigned>;
        ///RINT2CNT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rint2cnt{}; 
    }
    namespace Nonecrlsr{    ///<RINT3 Cunter Register
        using Addr = Register::Address<0x4000b1ec,0x00000000,0,unsigned>;
        ///RINT3CNT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rint3cnt{}; 
    }
    namespace Nonecrlor{    ///<RINT4 Cunter Register
        using Addr = Register::Address<0x4000b1f0,0x00000000,0,unsigned>;
        ///RINT4CNT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rint4cnt{}; 
    }
    namespace Nonecrrfr{    ///<RINT5 Cunter Register
        using Addr = Register::Address<0x4000b1f4,0x00000000,0,unsigned>;
        ///RINT5CNT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rint5cnt{}; 
    }
    namespace Nonecrmfr{    ///<RINT8 Cunter Register
        using Addr = Register::Address<0x4000b1f8,0x00000000,0,unsigned>;
        ///RINT8CNT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rint8cnt{}; 
    }
}
