#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Video Decoder
    namespace VdecIdr{    ///<ID Register
        using Addr = Register::Address<0x00900000,0x00000000,0,unsigned>;
        ///Build Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> buildVer{}; 
        namespace BuildverValC{
        }
        ///Minor Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,4),Register::ReadWriteAccess,unsigned> minorVer{}; 
        namespace MinorverValC{
        }
        ///Major Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> majorVer{}; 
        namespace MajorverValC{
        }
        ///Product ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> prodId{}; 
        namespace ProdidValC{
        }
    }
    namespace VdecDir{    ///<Decoder Interrupt Register
        using Addr = Register::Address<0x00900004,0xfff80eee,0,unsigned>;
        ///Decoder Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> de{}; 
        namespace DeValC{
        }
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> id{}; 
        namespace IdValC{
        }
        ///Decoder Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> iset{}; 
        namespace IsetValC{
        }
        ///Decoder Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dr{}; 
        namespace DrValC{
        }
        ///Bus Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> be{}; 
        namespace BeValC{
        }
        ///Stream Buffer Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> sbe{}; 
        namespace SbeValC{
        }
        ///ASO Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> asod{}; 
        namespace AsodValC{
        }
        ///Input Stream Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ise{}; 
        namespace IseValC{
        }
        ///JPEG Slice Decoded
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> jpegsd{}; 
        namespace JpegsdValC{
        }
        ///Timeout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> to{}; 
        namespace ToValC{
        }
    }
    namespace VdecDdcr{    ///<Decoder Device Configuration Register
        using Addr = Register::Address<0x00900008,0xff580000,0,unsigned>;
        ///Maximum Burst Length for Decoder Bus Transactions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> maxBurstLen{}; 
        namespace MaxburstlenValC{
        }
        ///Decoder Core Internal Bus Service Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> prior{}; 
        namespace PriorValC{
        }
        ///Decoder Output Endian Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> doLe{}; 
        namespace DoleValC{
        }
        ///Interface Endian Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> intceLe{}; 
        namespace IntceleValC{
        }
        ///Decoder Dynamic Clock Gating Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ddcge{}; 
        namespace DdcgeValC{
        }
        ///Decoder Latency Compensation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,11),Register::ReadWriteAccess,unsigned> latComp{}; 
        namespace LatcompValC{
        }
        ///Decoder Output Picture Format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dopf{}; 
        namespace DopfValC{
        }
        ///AHB Precise Burst and Data Discard Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ahbBurst{}; 
        namespace AhbburstValC{
        }
        ///Decoder Input Endian Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> diLe{}; 
        namespace DileValC{
        }
        ///Hardware Timeout Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> hti{}; 
        namespace HtiValC{
        }
    }
    namespace VdecCtlr0{    ///<Decoder Control Register 0
        using Addr = Register::Address<0x0090000c,0x070206ff,0,unsigned>;
        ///HLOCK Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hlock{}; 
        namespace HlockValC{
        }
        ///Reference Field First
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> reffirst{}; 
        namespace ReffirstValC{
        }
        ///MPEG-2 Motion Vector Write Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mv{}; 
        namespace MvValC{
        }
        ///Quantization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> quant{}; 
        namespace QuantValC{
        }
        ///De-block Filtering Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> filtdis{}; 
        namespace FiltdisValC{
        }
        ///Disable Decoder Output Picture Writing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> outdis{}; 
        namespace OutdisValC{
        }
        ///Indicates Which Field Should Be Used As Reference
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> reffield{}; 
        namespace ReffieldValC{
        }
        ///Coding Mode of Forward Reference Picture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> forwmode{}; 
        namespace ForwmodeValC{
        }
        ///Picture Field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> picfield{}; 
        namespace PicfieldValC{
        }
        ///Picture Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pictype{}; 
        namespace PictypeValC{
        }
        ///B Picture Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> picben{}; 
        namespace PicbenValC{
        }
        ///Structure of the Current Picture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> picstruct{}; 
        namespace PicstructValC{
        }
        ///Coding mode of Current Picture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> picmode{}; 
        namespace PicmodeValC{
        }
        ///RLC Mode Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> rlcen{}; 
        namespace RlcenValC{
        }
        ///Decoding Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> decMode{}; 
        namespace DecmodeValC{
        }
    }
    namespace VdecCtlr1{    ///<Decoder Control Register 1
        using Addr = Register::Address<0x00900010,0x00000000,0,unsigned>;
        ///Number of Reference Frames/Semantics
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> refFrames{}; 
        namespace RefframesValC{
        }
        ///Top Field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> topf{}; 
        namespace TopfValC{
        }
        ///Alternative Vertical Scan Method
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> avsm{}; 
        namespace AvsmValC{
        }
        ///Height Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,7),Register::ReadWriteAccess,unsigned> heightOff{}; 
        namespace HeightoffValC{
        }
        ///Picture Height
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,11),Register::ReadWriteAccess,unsigned> picHeight{}; 
        namespace PicheightValC{
        }
        ///Width Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,19),Register::ReadWriteAccess,unsigned> widthOff{}; 
        namespace WidthoffValC{
        }
        ///Picture Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> picWidth{}; 
        namespace PicwidthValC{
        }
    }
    namespace VdecCtlr2{    ///<Decoder Control Register 2
        using Addr = Register::Address<0x00900014,0x03003ffe,0,unsigned>;
        ///Flag for Stream
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fieldpic{}; 
        namespace FieldpicValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,14),Register::ReadWriteAccess,unsigned> qpFiltCrOff{}; 
        namespace QpfiltcroffValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> qpFiltCbOff{}; 
        namespace QpfiltcboffValC{
        }
        ///Stream Start Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> streamStartBit{}; 
        namespace StreamstartbitValC{
        }
    }
    namespace VdecCtlr3{    ///<Decoder Control Register 3
        using Addr = Register::Address<0x00900018,0x01000000,0,unsigned>;
        ///Stream Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> streamLen{}; 
        namespace StreamlenValC{
        }
        ///Quantization Initialization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,25),Register::ReadWriteAccess,unsigned> initQp{}; 
        namespace InitqpValC{
        }
        ///Stream Start Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> stCodEn{}; 
        namespace StcodenValC{
        }
    }
    namespace VdecCtlr4{    ///<Decoder Control Register 4
        using Addr = Register::Address<0x0090001c,0x03e00000,0,unsigned>;
        ///Frame Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> frameNum{}; 
        namespace FramenumValC{
        }
        ///Frame Number length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> frameNumLen{}; 
        namespace FramenumlenValC{
        }
        ///Weight Prediction for B Slices
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> wBipr{}; 
        namespace WbiprValC{
        }
        ///Weight Prediction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> wPred{}; 
        namespace WpredValC{
        }
        ///Derive Luma Method
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dirmvPred{}; 
        namespace DirmvpredValC{
        }
        ///Black and White Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> bw{}; 
        namespace BwValC{
        }
        ///H.264 CABAC Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> cabac{}; 
        namespace CabacValC{
        }
    }
    namespace VdecCtlr5{    ///<Decoder Control Register 5
        using Addr = Register::Address<0x00900020,0x00000000,0,unsigned>;
        ///IDR Picture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> idrPicId{}; 
        namespace IdrpicidValC{
        }
        ///IDR Picture Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> idren{}; 
        namespace IdrenValC{
        }
        ///Reference Picture Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,17),Register::ReadWriteAccess,unsigned> refPicLen{}; 
        namespace RefpiclenValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> eight58{}; 
        namespace Eight58ValC{
        }
        ///Redundant Picture Present
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> rdPic{}; 
        namespace RdpicValC{
        }
        ///Extra Variables Controlling Characteristics of The Deblocking Filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> filtCtrl{}; 
        namespace FiltctrlValC{
        }
        ///Intra in Prediction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> consIntra{}; 
        namespace ConsintraValC{
        }
    }
    namespace VdecCtlr6{    ///<Decoder Control Register 6
        using Addr = Register::Address<0x00900024,0x00003f00,0,unsigned>;
        ///Picture Order length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pocLen{}; 
        namespace PoclenValC{
        }
        ///Maximum Reference Index 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,14),Register::ReadWriteAccess,unsigned> refIdx0{}; 
        namespace Refidx0ValC{
        }
        ///Maximum Reference Index 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> refIdx1{}; 
        namespace Refidx1ValC{
        }
        ///Picture Parameter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> ppsId{}; 
        namespace PpsidValC{
        }
    }
    namespace VdecDmvba{    ///<Base Address for Differential Motion Vector
        using Addr = Register::Address<0x00900028,0x00000003,0,unsigned>;
        ///Differential Motion Vector Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> mvControlBase{}; 
        namespace MvcontrolbaseValC{
        }
    }
    namespace VdecCtlr7{    ///<Decoder Control Register 7
        using Addr = Register::Address<0x0090002c,0x00000003,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
        namespace BaValC{
        }
    }
    namespace VdecRlcvlcba{    ///<RLC/VLC Data Base Address
        using Addr = Register::Address<0x00900030,0x00000003,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
        namespace BaValC{
        }
    }
    namespace VdecPictba{    ///<Decoded Picture Base Address
        using Addr = Register::Address<0x00900034,0x00000003,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
        namespace BaValC{
        }
    }
    namespace VdecPidxba0{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x00900038,0x00000003,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
        namespace BaValC{
        }
    }
    namespace VdecPidxba1{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x0090003c,0x00000003,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
        namespace BaValC{
        }
    }
    namespace VdecPidxba2{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x00900040,0x00000003,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
        namespace BaValC{
        }
    }
    namespace VdecPidxba3{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x00900044,0x00000003,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
        namespace BaValC{
        }
    }
    namespace VdecPidxba4{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x00900048,0x00000003,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
        namespace BaValC{
        }
    }
    namespace VdecPidxba5{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x0090004c,0x00000003,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
        namespace BaValC{
        }
    }
    namespace VdecPidxba6{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x00900050,0x00000003,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
        namespace BaValC{
        }
    }
    namespace VdecPidxba7{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x00900054,0x00000003,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
        namespace BaValC{
        }
    }
    namespace VdecPidxba8{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x00900058,0x00000003,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
        namespace BaValC{
        }
    }
    namespace VdecPidxba9{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x0090005c,0x00000003,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
        namespace BaValC{
        }
    }
    namespace VdecPidxba10{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x00900060,0x00000003,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
        namespace BaValC{
        }
    }
    namespace VdecPidxba11{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x00900064,0x00000003,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
        namespace BaValC{
        }
    }
    namespace VdecPidxba12{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x00900068,0x00000003,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
        namespace BaValC{
        }
    }
    namespace VdecPidxba13{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x0090006c,0x00000003,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
        namespace BaValC{
        }
    }
    namespace VdecPidxba14{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x00900070,0x00000003,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
        namespace BaValC{
        }
    }
    namespace VdecPidxba15{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x00900074,0x00000003,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
        namespace BaValC{
        }
    }
    namespace VdecPnr0{    ///<Reference Picture Numbers Register 0
        using Addr = Register::Address<0x00900078,0x00000000,0,unsigned>;
        ///Reference Picture Number for Index 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> refer0{}; 
        namespace Refer0ValC{
        }
        ///Reference Picture Number for Index 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> refer1{}; 
        namespace Refer1ValC{
        }
    }
    namespace VdecPnr1{    ///<Reference Picture Numbers Register 1
        using Addr = Register::Address<0x0090007c,0x00000000,0,unsigned>;
        ///Reference Picture Number for Index 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> refer2{}; 
        namespace Refer2ValC{
        }
        ///Reference Picture Number for Index 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> refer3{}; 
        namespace Refer3ValC{
        }
    }
    namespace VdecPnr2{    ///<Reference Picture Numbers Register 2
        using Addr = Register::Address<0x00900080,0xffffffff,0,unsigned>;
    }
    namespace VdecPnr3{    ///<Reference Picture Numbers Register 3
        using Addr = Register::Address<0x00900084,0x00000000,0,unsigned>;
        ///Reference Picture Number for Index 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> refer4{}; 
        namespace Refer4ValC{
        }
        ///Reference Picture Number for Index 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> refer5{}; 
        namespace Refer5ValC{
        }
    }
    namespace VdecPnr4{    ///<Reference Picture Numbers Register 4
        using Addr = Register::Address<0x00900088,0x00000000,0,unsigned>;
        ///Reference Picture Number for Index 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> refer8{}; 
        namespace Refer8ValC{
        }
        ///Reference Picture Number for Index 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> refer9{}; 
        namespace Refer9ValC{
        }
    }
    namespace VdecPnr5{    ///<Reference Picture Numbers Register 5
        using Addr = Register::Address<0x0090008c,0x00000000,0,unsigned>;
        ///Reference Picture Number for Index 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> refer10{}; 
        namespace Refer10ValC{
        }
        ///Reference Picture Number for Index 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> refer11{}; 
        namespace Refer11ValC{
        }
    }
    namespace VdecPnr6{    ///<Reference Picture Numbers Register 6
        using Addr = Register::Address<0x00900090,0x00000000,0,unsigned>;
        ///Reference Picture Number for Index 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> refer12{}; 
        namespace Refer12ValC{
        }
        ///Reference Picture Number for Index 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> refer13{}; 
        namespace Refer13ValC{
        }
    }
    namespace VdecPnr7{    ///<Reference Picture Numbers Register 7
        using Addr = Register::Address<0x00900094,0x00000000,0,unsigned>;
        ///Reference Picture Number for Index 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> refer14{}; 
        namespace Refer14ValC{
        }
        ///Reference Picture Number for Index 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> refer15{}; 
        namespace Refer15ValC{
        }
    }
    namespace VdecPltfr{    ///<Reference Picture Long Term Flag Register
        using Addr = Register::Address<0x00900098,0x00000000,0,unsigned>;
        ///Long Term Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ltf{}; 
        namespace LtfValC{
        }
    }
    namespace VdecPvfr{    ///<Reference Picture Valid Flag Register
        using Addr = Register::Address<0x0090009c,0xffffffff,0,unsigned>;
    }
    namespace VdecSdtba{    ///<Standard Dependent Tables Base Address
        using Addr = Register::Address<0x009000a0,0x00000003,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
        namespace BaValC{
        }
    }
    namespace VdecDmmvba{    ///<Direct Mode Motion Vector Base Address
        using Addr = Register::Address<0x009000a4,0x00000003,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
        namespace BaValC{
        }
    }
    namespace VdecIrplr0{    ///<H264 Initial Reference Picture List Register 0
        using Addr = Register::Address<0x009000a8,0xc0000000,0,unsigned>;
        ///Initial Reference Picture List for Forward Picid 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ireflFw0{}; 
        namespace Ireflfw0ValC{
        }
        ///Initial Reference Picture List for Backward Picid 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> ireflBw0{}; 
        namespace Ireflbw0ValC{
        }
        ///Initial Reference Picture List for Forward Picid 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> ireflFw1{}; 
        namespace Ireflfw1ValC{
        }
        ///Initial Reference Picture List for Backward Picid 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> ireflBw1{}; 
        namespace Ireflbw1ValC{
        }
        ///Initial Reference Picture List for Forward Picid 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,20),Register::ReadWriteAccess,unsigned> ireflFw2{}; 
        namespace Ireflfw2ValC{
        }
        ///Initial Reference Picture List for Backward Picid 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,25),Register::ReadWriteAccess,unsigned> ireflBw2{}; 
        namespace Ireflbw2ValC{
        }
    }
    namespace VdecIrplr1{    ///<H264 Initial Reference Picture List Register 1
        using Addr = Register::Address<0x009000ac,0xc0000000,0,unsigned>;
        ///Initial Reference Picture List for Forward Picid 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ireflFw3{}; 
        namespace Ireflfw3ValC{
        }
        ///Initial Reference Picture List for Backward Picid 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> ireflBw3{}; 
        namespace Ireflbw3ValC{
        }
        ///Initial Reference Picture List for Forward Picid 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> ireflFw4{}; 
        namespace Ireflfw4ValC{
        }
        ///Initial Reference Picture List for Backward Picid 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> ireflBw4{}; 
        namespace Ireflbw4ValC{
        }
        ///Initial Reference Picture List for Forward Picid 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,20),Register::ReadWriteAccess,unsigned> ireflFw5{}; 
        namespace Ireflfw5ValC{
        }
        ///Initial Reference Picture List for Backward Picid 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,25),Register::ReadWriteAccess,unsigned> ireflBw5{}; 
        namespace Ireflbw5ValC{
        }
    }
    namespace VdecIrplr2{    ///<H264 Initial Reference Picture List Register 2
        using Addr = Register::Address<0x009000b0,0xc0000000,0,unsigned>;
        ///Initial Reference Picture List for Forward Picid 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ireflFw6{}; 
        namespace Ireflfw6ValC{
        }
        ///Initial Reference Picture List for Backward Picid 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> ireflBw6{}; 
        namespace Ireflbw6ValC{
        }
        ///Initial Reference Picture List for Forward Picid 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> ireflFw7{}; 
        namespace Ireflfw7ValC{
        }
        ///Initial Reference Picture List for Backward Picid 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> ireflBw7{}; 
        namespace Ireflbw7ValC{
        }
        ///Initial Reference Picture List for Forward Picid 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,20),Register::ReadWriteAccess,unsigned> ireflFw8{}; 
        namespace Ireflfw8ValC{
        }
        ///Initial Reference Picture List for Backward Picid 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,25),Register::ReadWriteAccess,unsigned> ireflBw8{}; 
        namespace Ireflbw8ValC{
        }
    }
    namespace VdecIrplr3{    ///<H264 Initial Reference Picture List Register 3
        using Addr = Register::Address<0x009000b4,0xc0000000,0,unsigned>;
        ///Initial Reference Picture List for Forward Picid 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ireflFw9{}; 
        namespace Ireflfw9ValC{
        }
        ///Initial Reference Picture List for Backward Picid 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> ireflBw9{}; 
        namespace Ireflbw9ValC{
        }
        ///Initial Reference Picture List for Forward Picid 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> ireflFw10{}; 
        namespace Ireflfw10ValC{
        }
        ///Initial Reference Picture List for Backward Picid 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> ireflBw10{}; 
        namespace Ireflbw10ValC{
        }
        ///Initial Reference Picture List for Forward Picid 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,20),Register::ReadWriteAccess,unsigned> ireflFw11{}; 
        namespace Ireflfw11ValC{
        }
        ///Initial Reference Picture List for Backward Picid 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,25),Register::ReadWriteAccess,unsigned> ireflBw11{}; 
        namespace Ireflbw11ValC{
        }
    }
    namespace VdecIrplr4{    ///<H264 Initial Reference Picture List Register 4
        using Addr = Register::Address<0x009000b8,0xc0000000,0,unsigned>;
        ///Initial Reference Picture List for Forward Picid 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ireflFw12{}; 
        namespace Ireflfw12ValC{
        }
        ///Initial Reference Picture List for Backward Picid 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> ireflBw12{}; 
        namespace Ireflbw12ValC{
        }
        ///Initial Reference Picture List for Forward Picid 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> ireflFw13{}; 
        namespace Ireflfw13ValC{
        }
        ///Initial Reference Picture List for Backward Picid 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> ireflBw13{}; 
        namespace Ireflbw13ValC{
        }
        ///Initial Reference Picture List for Forward Picid 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,20),Register::ReadWriteAccess,unsigned> ireflFw14{}; 
        namespace Ireflfw14ValC{
        }
        ///Initial Reference Picture List for Backward Picid 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,25),Register::ReadWriteAccess,unsigned> ireflBw14{}; 
        namespace Ireflbw14ValC{
        }
    }
    namespace VdecIrplr5{    ///<H264 Initial Reference Picture List Register 5
        using Addr = Register::Address<0x009000bc,0xfffffc00,0,unsigned>;
        ///Initial Reference Picture List for Forward Picid 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ireflFw15{}; 
        namespace Ireflfw15ValC{
        }
        ///Initial Reference Picture List for Backward Picid 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> ireflBw15{}; 
        namespace Ireflbw15ValC{
        }
    }
    namespace VdecEcr{    ///<Error Concealment Register
        using Addr = Register::Address<0x009000c0,0x00007fff,0,unsigned>;
        ///Start MB from SW for Y Dimension
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,15),Register::ReadWriteAccess,unsigned> startmbY{}; 
        namespace StartmbyValC{
        }
        ///Start MB from SW for X Dimension
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> startmbX{}; 
        namespace StartmbxValC{
        }
    }
}
