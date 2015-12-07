#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//UDC2 AHB Bridge
    namespace Noneifvrr{    ///<ADiC Version_Revision Register
        using Addr = Register::Address<0x4000a000,0x00000000,0,unsigned>;
        ///REV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rev{}; 
        namespace RevValC{
        }
        ///VER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ver{}; 
        namespace VerValC{
        }
    }
    namespace Noneifcr{    ///<ADiC MODE Setting Register
        using Addr = Register::Address<0x4000a004,0xfffff8ff,0,unsigned>;
        ///IOTOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> iotout{}; 
        namespace IotoutValC{
        }
        ///DMATOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dmatout{}; 
        namespace DmatoutValC{
        }
        ///DMAERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dmaerr{}; 
        namespace DmaerrValC{
        }
    }
    namespace Noneifintst{    ///<ADiC  Interrupt Status Register
        using Addr = Register::Address<0x4000a010,0xff7870fe,0,unsigned>;
        ///EMDMACINT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> emdmacint{}; 
        namespace EmdmacintValC{
        }
        ///SLAVE0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> slave0{}; 
        namespace Slave0ValC{
        }
        ///SLAVE1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> slave1{}; 
        namespace Slave1ValC{
        }
        ///SLAVE2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> slave2{}; 
        namespace Slave2ValC{
        }
        ///SLAVE3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> slave3{}; 
        namespace Slave3ValC{
        }
        ///IOTOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> iotout{}; 
        namespace IotoutValC{
        }
        ///MASTER0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> master0{}; 
        namespace Master0ValC{
        }
        ///MASTER1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> master1{}; 
        namespace Master1ValC{
        }
        ///MASTER2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> master2{}; 
        namespace Master2ValC{
        }
        ///DMATOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dmatout{}; 
        namespace DmatoutValC{
        }
    }
    namespace Noneifinten{    ///<ADiC Interrupt Enable Register
        using Addr = Register::Address<0x4000a014,0xff7870fe,0,unsigned>;
        ///EMDMACINT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> emdmacint{}; 
        namespace EmdmacintValC{
        }
        ///SLAVE0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> slave0{}; 
        namespace Slave0ValC{
        }
        ///SLAVE1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> slave1{}; 
        namespace Slave1ValC{
        }
        ///SLAVE2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> slave2{}; 
        namespace Slave2ValC{
        }
        ///SLAVE3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> slave3{}; 
        namespace Slave3ValC{
        }
        ///IOTOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> iotout{}; 
        namespace IotoutValC{
        }
        ///MASTER0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> master0{}; 
        namespace Master0ValC{
        }
        ///MASTER1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> master1{}; 
        namespace Master1ValC{
        }
        ///MASTER2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> master2{}; 
        namespace Master2ValC{
        }
        ///DMATOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dmatout{}; 
        namespace DmatoutValC{
        }
    }
    namespace Nonedcr{    ///<EMDMAC Movement Control Register
        using Addr = Register::Address<0x4000b000,0xffffff8e,0,unsigned>;
        ///SWR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swr{}; 
        namespace SwrValC{
        }
        ///DL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> dl{}; 
        namespace DlValC{
        }
        ///DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> de{}; 
        namespace DeValC{
        }
    }
    namespace Nonedten{    ///<Transmission Instructions Register
        using Addr = Register::Address<0x4000b008,0xfffffffe,0,unsigned>;
        ///TRNS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trns{}; 
        namespace TrnsValC{
        }
    }
    namespace Nonedren{    ///<Reception instructions Register
        using Addr = Register::Address<0x4000b010,0xfffffffe,0,unsigned>;
        ///RCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rcv{}; 
        namespace RcvValC{
        }
    }
    namespace Nonedtdpr{    ///<Transmission Dscripter top address setting Register
        using Addr = Register::Address<0x4000b018,0x00000000,0,unsigned>;
        ///TDPA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tdpa{}; 
        namespace TdpaValC{
        }
    }
    namespace Nonedrdpr{    ///<Reception Dscripter top address setting Register
        using Addr = Register::Address<0x4000b020,0x00000000,0,unsigned>;
        ///RDPA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rdpa{}; 
        namespace RdpaValC{
        }
    }
    namespace Nonedintst{    ///<EMSMAC Interrupt Status Indication Register
        using Addr = Register::Address<0x4000b028,0xb800f060,0,unsigned>;
        ///RINT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rint1{}; 
        namespace Rint1ValC{
        }
        ///RINT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rint2{}; 
        namespace Rint2ValC{
        }
        ///RINT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rint3{}; 
        namespace Rint3ValC{
        }
        ///RINT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rint4{}; 
        namespace Rint4ValC{
        }
        ///RINT5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rint5{}; 
        namespace Rint5ValC{
        }
        ///RINT8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rint8{}; 
        namespace Rint8ValC{
        }
        ///TINT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tint1{}; 
        namespace Tint1ValC{
        }
        ///TINT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tint2{}; 
        namespace Tint2ValC{
        }
        ///TINT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tint3{}; 
        namespace Tint3ValC{
        }
        ///TINT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tint4{}; 
        namespace Tint4ValC{
        }
        ///RFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rfe{}; 
        namespace RfeValC{
        }
        ///RDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rde{}; 
        namespace RdeValC{
        }
        ///FRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> frc{}; 
        namespace FrcValC{
        }
        ///TFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tfe{}; 
        namespace TfeValC{
        }
        ///TDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tde{}; 
        namespace TdeValC{
        }
        ///FTC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ftc{}; 
        namespace FtcValC{
        }
        ///MINT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mint{}; 
        namespace MintValC{
        }
        ///BER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ber{}; 
        namespace BerValC{
        }
        ///RFRMER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rfrmer{}; 
        namespace RfrmerValC{
        }
        ///RABT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rabt{}; 
        namespace RabtValC{
        }
        ///TABT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> tabt{}; 
        namespace TabtValC{
        }
        ///TWB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> twb{}; 
        namespace TwbValC{
        }
    }
    namespace Nonedinten{    ///<EMDMAC Interrupt mask setting Register
        using Addr = Register::Address<0x4000b030,0xb800f060,0,unsigned>;
        ///RINT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rint1{}; 
        namespace Rint1ValC{
        }
        ///RINT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rint2{}; 
        namespace Rint2ValC{
        }
        ///RINT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rint3{}; 
        namespace Rint3ValC{
        }
        ///RINT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rint4{}; 
        namespace Rint4ValC{
        }
        ///RINT5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rint5{}; 
        namespace Rint5ValC{
        }
        ///RINT8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rint8{}; 
        namespace Rint8ValC{
        }
        ///TINT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tint1{}; 
        namespace Tint1ValC{
        }
        ///TINT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tint2{}; 
        namespace Tint2ValC{
        }
        ///TINT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tint3{}; 
        namespace Tint3ValC{
        }
        ///TINT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tint4{}; 
        namespace Tint4ValC{
        }
        ///RFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rfe{}; 
        namespace RfeValC{
        }
        ///RDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rde{}; 
        namespace RdeValC{
        }
        ///FRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> frc{}; 
        namespace FrcValC{
        }
        ///TFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tfe{}; 
        namespace TfeValC{
        }
        ///TDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tde{}; 
        namespace TdeValC{
        }
        ///FTC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ftc{}; 
        namespace FtcValC{
        }
        ///MINT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mint{}; 
        namespace MintValC{
        }
        ///BER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ber{}; 
        namespace BerValC{
        }
        ///RFRMER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rfrmer{}; 
        namespace RfrmerValC{
        }
        ///RABT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rabt{}; 
        namespace RabtValC{
        }
        ///TABT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> tabt{}; 
        namespace TabtValC{
        }
        ///TWB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> twb{}; 
        namespace TwbValC{
        }
    }
    namespace Nonederr{    ///<Err Mask Setting Register
        using Addr = Register::Address<0x4000b038,0xfffff060,0,unsigned>;
        ///RINT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rint1{}; 
        namespace Rint1ValC{
        }
        ///RINT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rint2{}; 
        namespace Rint2ValC{
        }
        ///RINT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rint3{}; 
        namespace Rint3ValC{
        }
        ///RINT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rint4{}; 
        namespace Rint4ValC{
        }
        ///RINT5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rint5{}; 
        namespace Rint5ValC{
        }
        ///RINT8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rint8{}; 
        namespace Rint8ValC{
        }
        ///TINT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tint1{}; 
        namespace Tint1ValC{
        }
        ///TINT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tint2{}; 
        namespace Tint2ValC{
        }
        ///TINT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tint3{}; 
        namespace Tint3ValC{
        }
        ///TINT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tint4{}; 
        namespace Tint4ValC{
        }
    }
    namespace Nonedmfcr{    ///<Disposal Frame Count Register
        using Addr = Register::Address<0x4000b040,0xffff0000,0,unsigned>;
        ///MIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mis{}; 
        namespace MisValC{
        }
    }
    namespace Nonedtftr{    ///<Transmission FIFO thresholding Register
        using Addr = Register::Address<0x4000b048,0xfffff800,0,unsigned>;
        ///TFTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> tfth{}; 
        namespace TfthValC{
        }
    }
    namespace Nonedfcdr{    ///<Outside FIFO Capacity Setting Register
        using Addr = Register::Address<0x4000b050,0xffffe0e0,0,unsigned>;
        ///RA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ra{}; 
        namespace RaValC{
        }
        ///TA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> ta{}; 
        namespace TaValC{
        }
    }
    namespace Nonedrrcr{    ///<Reception Start Reset Setting Register
        using Addr = Register::Address<0x4000b058,0xfffffffc,0,unsigned>;
        ///RR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rr{}; 
        namespace RrValC{
        }
        ///RNR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rnr{}; 
        namespace RnrValC{
        }
    }
    namespace Nonedeadr{    ///<DMA Error Address Register
        using Addr = Register::Address<0x4000b060,0x00000000,0,unsigned>;
        ///ERRADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> erradr{}; 
        namespace ErradrValC{
        }
    }
    namespace Nonedtufr{    ///<Transmission FIFO Underflow Count Register
        using Addr = Register::Address<0x4000b064,0xffff0000,0,unsigned>;
        ///UNDER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> under{}; 
        namespace UnderValC{
        }
    }
    namespace Nonedrofr{    ///<Reception FIFO Underflow Count Register
        using Addr = Register::Address<0x4000b068,0xffff0000,0,unsigned>;
        ///OVER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> over{}; 
        namespace OverValC{
        }
    }
    namespace Nonedrbtr{    ///<Transmission FIFO Busy Transmission Thresholding Register
        using Addr = Register::Address<0x4000b070,0xfff8fff8,0,unsigned>;
        ///RFDO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rfdo{}; 
        namespace RfdoValC{
        }
        ///RFFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> rffo{}; 
        namespace RffoValC{
        }
    }
    namespace Nonedrpdr{    ///<Reception Data Padding setting Register
        using Addr = Register::Address<0x4000b078,0xfffcffc0,0,unsigned>;
        ///PADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> padr{}; 
        namespace PadrValC{
        }
        ///PADS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pads{}; 
        namespace PadsValC{
        }
    }
    namespace Nonedtimer{    ///<Transmission Interrupt Mode Setting Register
        using Addr = Register::Address<0x4000b07c,0xffffffee,0,unsigned>;
        ///TIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tis{}; 
        namespace TisValC{
        }
        ///TIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim{}; 
        namespace TimValC{
        }
    }
    namespace Nonedrbar{    ///<Reception Buffer Light Address For debugging Register
        using Addr = Register::Address<0x4000b0c8,0x00000000,0,unsigned>;
        ///RBWA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rbwa{}; 
        namespace RbwaValC{
        }
    }
    namespace Nonedrdar{    ///<Reception Dscripter Read Address For Debugging Register
        using Addr = Register::Address<0x4000b0cc,0x00000000,0,unsigned>;
        ///RDRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rdra{}; 
        namespace RdraValC{
        }
    }
    namespace Nonedtbar{    ///<Transmission Read Address For Debugging Register
        using Addr = Register::Address<0x4000b0d4,0x00000000,0,unsigned>;
        ///TBRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tbra{}; 
        namespace TbraValC{
        }
    }
    namespace Nonedtdar{    ///<Transmission Dscripter Read Address For Debugging Register
        using Addr = Register::Address<0x4000b0d8,0x00000000,0,unsigned>;
        ///TDRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tdra{}; 
        namespace TdraValC{
        }
    }
    namespace Noneccr{    ///<Ether FeLic Active Mode Register
        using Addr = Register::Address<0x4000b100,0xffe0ed90,0,unsigned>;
        ///PRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> prm{}; 
        namespace PrmValC{
        }
        ///DPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dpm{}; 
        namespace DpmValC{
        }
        ///OLB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> olb{}; 
        namespace OlbValC{
        }
        ///ILB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ilb{}; 
        namespace IlbValC{
        }
        ///TPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tpe{}; 
        namespace TpeValC{
        }
        ///RPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rpe{}; 
        namespace RpeValC{
        }
        ///MPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mpm{}; 
        namespace MpmValC{
        }
        ///CER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cer{}; 
        namespace CerValC{
        }
        ///TXF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> txf{}; 
        namespace TxfValC{
        }
        ///RXF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rxf{}; 
        namespace RxfValC{
        }
        ///PFR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pfr{}; 
        namespace PfrValC{
        }
        ///TPF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tpf{}; 
        namespace TpfValC{
        }
        ///TPC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tpc{}; 
        namespace TpcValC{
        }
    }
    namespace Nonecrflr{    ///<Long Frame Length Check Level Setting Register
        using Addr = Register::Address<0x4000b108,0xfffff000,0,unsigned>;
        ///FLEN_ULMT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> flenUlmt{}; 
        namespace FlenulmtValC{
        }
    }
    namespace Nonecintst{    ///<Status indication Register
        using Addr = Register::Address<0x4000b110,0xffffffc8,0,unsigned>;
        ///FCIDTCT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fcidtct{}; 
        namespace FcidtctValC{
        }
        ///MAGICPKT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> magicpkt{}; 
        namespace MagicpktValC{
        }
        ///LINKCHNG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> linkchng{}; 
        namespace LinkchngValC{
        }
        ///PSRTROV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> psrtrov{}; 
        namespace PsrtrovValC{
        }
        ///BRDSRCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> brdsrcv{}; 
        namespace BrdsrcvValC{
        }
    }
    namespace Nonecinten{    ///<Interrupt mask setting Register
        using Addr = Register::Address<0x4000b118,0xffffffc8,0,unsigned>;
        ///FCIDTCT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fcidtct{}; 
        namespace FcidtctValC{
        }
        ///MAGICPKT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> magicpkt{}; 
        namespace MagicpktValC{
        }
        ///LINKCHNG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> linkchng{}; 
        namespace LinkchngValC{
        }
        ///PSRTROV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> psrtrov{}; 
        namespace PsrtrovValC{
        }
        ///BRDSRCV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> brdsrcv{}; 
        namespace BrdsrcvValC{
        }
    }
    namespace Nonecmiicr{    ///<MII Control Register
        using Addr = Register::Address<0x4000b120,0xfffffff0,0,unsigned>;
        ///MDC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mdc{}; 
        namespace MdcValC{
        }
        ///MMD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mmd{}; 
        namespace MmdValC{
        }
        ///MDO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdo{}; 
        namespace MdoValC{
        }
        ///MDI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mdi{}; 
        namespace MdiValC{
        }
    }
    namespace Nonecphyst{    ///<Status Signal Register
        using Addr = Register::Address<0x4000b128,0xfffffffe,0,unsigned>;
        ///LINK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> link{}; 
        namespace LinkValC{
        }
    }
    namespace Nonecicr{    ///<IPG Counter Setting Register
        using Addr = Register::Address<0x4000b150,0xffffffe0,0,unsigned>;
        ///IPG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ipg{}; 
        namespace IpgValC{
        }
    }
    namespace Nonecapr{    ///<Auto Pause Parameter Setting Register
        using Addr = Register::Address<0x4000b154,0xffff0000,0,unsigned>;
        ///APAUSE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> apause{}; 
        namespace ApauseValC{
        }
    }
    namespace Nonecmpr{    ///<Manual Pause Parameter setting Register
        using Addr = Register::Address<0x4000b158,0xffff0000,0,unsigned>;
        ///MPAUSE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mpause{}; 
        namespace MpauseValC{
        }
    }
    namespace Nonecrpcr{    ///<Reception PAUSE Frame Counter Register
        using Addr = Register::Address<0x4000b160,0xffffff00,0,unsigned>;
        ///RPAUSE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rpause{}; 
        namespace RpauseValC{
        }
    }
    namespace Nonecpulr{    ///<PAUSE Frame Retransmission Number Of Times Setting Register
        using Addr = Register::Address<0x4000b164,0xffff0000,0,unsigned>;
        ///TXPAUSE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpause{}; 
        namespace TxpauseValC{
        }
    }
    namespace Nonecpcr{    ///<PAUSE Frame Retransmission Number Of Times Counter Register
        using Addr = Register::Address<0x4000b168,0xffff0000,0,unsigned>;
        ///TPAUSE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tpause{}; 
        namespace TpauseValC{
        }
    }
    namespace Nonecbrr{    ///<Broadcast Frame Reception Number Of Times Setting Register
        using Addr = Register::Address<0x4000b16c,0xffff0000,0,unsigned>;
        ///BCF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> bcf{}; 
        namespace BcfValC{
        }
    }
    namespace Nonecmahr{    ///<Mac Address Register (High Rank)
        using Addr = Register::Address<0x4000b1c0,0x00000000,0,unsigned>;
        ///MACADRH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> macadrh{}; 
        namespace MacadrhValC{
        }
    }
    namespace Nonecmalr{    ///<Mac Address Register (Low Rank)
        using Addr = Register::Address<0x4000b1c8,0x00000000,0,unsigned>;
        ///MACADRL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> macadrl{}; 
        namespace MacadrlValC{
        }
    }
    namespace Nonectrer{    ///<TINT1 Cunter Register
        using Addr = Register::Address<0x4000b1d0,0x00000000,0,unsigned>;
        ///TINT1CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tint1cnt{}; 
        namespace Tint1cntValC{
        }
    }
    namespace Nonectcdr{    ///<TINT2 Cunter Register
        using Addr = Register::Address<0x4000b1d4,0x00000000,0,unsigned>;
        ///TINT2CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tint2cnt{}; 
        namespace Tint2cntValC{
        }
    }
    namespace Nonectclr{    ///<TINT3 Cunter Register
        using Addr = Register::Address<0x4000b1d8,0x00000000,0,unsigned>;
        ///TINT3CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tint3cnt{}; 
        namespace Tint3cntValC{
        }
    }
    namespace Nonectndr{    ///<TINT4 Cunter Register
        using Addr = Register::Address<0x4000b1dc,0x00000000,0,unsigned>;
        ///TINT4CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tint4cnt{}; 
        namespace Tint4cntValC{
        }
    }
    namespace Nonecrcer{    ///<RINT1 Cunter Register
        using Addr = Register::Address<0x4000b1e4,0x00000000,0,unsigned>;
        ///RINT1CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rint1cnt{}; 
        namespace Rint1cntValC{
        }
    }
    namespace Nonecrfer{    ///<RINT2 Cunter Register
        using Addr = Register::Address<0x4000b1e8,0x00000000,0,unsigned>;
        ///RINT2CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rint2cnt{}; 
        namespace Rint2cntValC{
        }
    }
    namespace Nonecrlsr{    ///<RINT3 Cunter Register
        using Addr = Register::Address<0x4000b1ec,0x00000000,0,unsigned>;
        ///RINT3CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rint3cnt{}; 
        namespace Rint3cntValC{
        }
    }
    namespace Nonecrlor{    ///<RINT4 Cunter Register
        using Addr = Register::Address<0x4000b1f0,0x00000000,0,unsigned>;
        ///RINT4CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rint4cnt{}; 
        namespace Rint4cntValC{
        }
    }
    namespace Nonecrrfr{    ///<RINT5 Cunter Register
        using Addr = Register::Address<0x4000b1f4,0x00000000,0,unsigned>;
        ///RINT5CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rint5cnt{}; 
        namespace Rint5cntValC{
        }
    }
    namespace Nonecrmfr{    ///<RINT8 Cunter Register
        using Addr = Register::Address<0x4000b1f8,0x00000000,0,unsigned>;
        ///RINT8CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rint8cnt{}; 
        namespace Rint8cntValC{
        }
    }
}
