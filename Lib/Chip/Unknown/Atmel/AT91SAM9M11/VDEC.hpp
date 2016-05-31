#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Video Decoder
    namespace VdecIdr{    ///<ID Register
        using Addr = Register::Address<0x00900000,0x00000000,0x00000000,unsigned>;
        ///Build Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> buildVer{}; 
        ///Minor Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> minorVer{}; 
        ///Major Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> majorVer{}; 
        ///Product ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> prodId{}; 
    }
    namespace VdecDir{    ///<Decoder Interrupt Register
        using Addr = Register::Address<0x00900004,0xfff80eee,0x00000000,unsigned>;
        ///Decoder Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> de{}; 
        ///Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> id{}; 
        ///Decoder Interrupt Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> iset{}; 
        ///Decoder Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dr{}; 
        ///Bus Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> be{}; 
        ///Stream Buffer Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> sbe{}; 
        ///ASO Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> asod{}; 
        ///Input Stream Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ise{}; 
        ///JPEG Slice Decoded
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> jpegsd{}; 
        ///Timeout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> to{}; 
    }
    namespace VdecDdcr{    ///<Decoder Device Configuration Register
        using Addr = Register::Address<0x00900008,0xff580000,0x00000000,unsigned>;
        ///Maximum Burst Length for Decoder Bus Transactions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> maxBurstLen{}; 
        ///Decoder Core Internal Bus Service Priority
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> prior{}; 
        ///Decoder Output Endian Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> doLe{}; 
        ///Interface Endian Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> intceLe{}; 
        ///Decoder Dynamic Clock Gating Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ddcge{}; 
        ///Decoder Latency Compensation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,11),Register::ReadWriteAccess,unsigned> latComp{}; 
        ///Decoder Output Picture Format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dopf{}; 
        ///AHB Precise Burst and Data Discard Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ahbBurst{}; 
        ///Decoder Input Endian Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> diLe{}; 
        ///Hardware Timeout Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> hti{}; 
    }
    namespace VdecCtlr0{    ///<Decoder Control Register 0
        using Addr = Register::Address<0x0090000c,0x070206ff,0x00000000,unsigned>;
        ///HLOCK Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hlock{}; 
        ///Reference Field First
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> reffirst{}; 
        ///MPEG-2 Motion Vector Write Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mv{}; 
        ///Quantization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> quant{}; 
        ///De-block Filtering Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> filtdis{}; 
        ///Disable Decoder Output Picture Writing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> outdis{}; 
        ///Indicates Which Field Should Be Used As Reference
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> reffield{}; 
        ///Coding Mode of Forward Reference Picture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> forwmode{}; 
        ///Picture Field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> picfield{}; 
        ///Picture Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pictype{}; 
        ///B Picture Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> picben{}; 
        ///Structure of the Current Picture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> picstruct{}; 
        ///Coding mode of Current Picture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> picmode{}; 
        ///RLC Mode Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> rlcen{}; 
        ///Decoding Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> decMode{}; 
    }
    namespace VdecCtlr1{    ///<Decoder Control Register 1
        using Addr = Register::Address<0x00900010,0x00000000,0x00000000,unsigned>;
        ///Number of Reference Frames/Semantics
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> refFrames{}; 
        ///Top Field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> topf{}; 
        ///Alternative Vertical Scan Method
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> avsm{}; 
        ///Height Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,7),Register::ReadWriteAccess,unsigned> heightOff{}; 
        ///Picture Height
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,11),Register::ReadWriteAccess,unsigned> picHeight{}; 
        ///Width Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,19),Register::ReadWriteAccess,unsigned> widthOff{}; 
        ///Picture Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> picWidth{}; 
    }
    namespace VdecCtlr2{    ///<Decoder Control Register 2
        using Addr = Register::Address<0x00900014,0x03003ffe,0x00000000,unsigned>;
        ///Flag for Stream
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fieldpic{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,14),Register::ReadWriteAccess,unsigned> qpFiltCrOff{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> qpFiltCbOff{}; 
        ///Stream Start Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> streamStartBit{}; 
    }
    namespace VdecCtlr3{    ///<Decoder Control Register 3
        using Addr = Register::Address<0x00900018,0x01000000,0x00000000,unsigned>;
        ///Stream Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> streamLen{}; 
        ///Quantization Initialization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,25),Register::ReadWriteAccess,unsigned> initQp{}; 
        ///Stream Start Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> stCodEn{}; 
    }
    namespace VdecCtlr4{    ///<Decoder Control Register 4
        using Addr = Register::Address<0x0090001c,0x03e00000,0x00000000,unsigned>;
        ///Frame Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> frameNum{}; 
        ///Frame Number length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> frameNumLen{}; 
        ///Weight Prediction for B Slices
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> wBipr{}; 
        ///Weight Prediction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> wPred{}; 
        ///Derive Luma Method
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dirmvPred{}; 
        ///Black and White Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> bw{}; 
        ///H.264 CABAC Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> cabac{}; 
    }
    namespace VdecCtlr5{    ///<Decoder Control Register 5
        using Addr = Register::Address<0x00900020,0x00000000,0x00000000,unsigned>;
        ///IDR Picture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> idrPicId{}; 
        ///IDR Picture Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> idren{}; 
        ///Reference Picture Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,17),Register::ReadWriteAccess,unsigned> refPicLen{}; 
        ///
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> eight58{}; 
        ///Redundant Picture Present
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> rdPic{}; 
        ///Extra Variables Controlling Characteristics of The Deblocking Filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> filtCtrl{}; 
        ///Intra in Prediction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> consIntra{}; 
    }
    namespace VdecCtlr6{    ///<Decoder Control Register 6
        using Addr = Register::Address<0x00900024,0x00003f00,0x00000000,unsigned>;
        ///Picture Order length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pocLen{}; 
        ///Maximum Reference Index 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,14),Register::ReadWriteAccess,unsigned> refIdx0{}; 
        ///Maximum Reference Index 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::ReadWriteAccess,unsigned> refIdx1{}; 
        ///Picture Parameter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> ppsId{}; 
    }
    namespace VdecDmvba{    ///<Base Address for Differential Motion Vector
        using Addr = Register::Address<0x00900028,0x00000003,0x00000000,unsigned>;
        ///Differential Motion Vector Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> mvControlBase{}; 
    }
    namespace VdecCtlr7{    ///<Decoder Control Register 7
        using Addr = Register::Address<0x0090002c,0x00000003,0x00000000,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace VdecRlcvlcba{    ///<RLC/VLC Data Base Address
        using Addr = Register::Address<0x00900030,0x00000003,0x00000000,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace VdecPictba{    ///<Decoded Picture Base Address
        using Addr = Register::Address<0x00900034,0x00000003,0x00000000,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace VdecPnr0{    ///<Reference Picture Numbers Register 0
        using Addr = Register::Address<0x00900078,0x00000000,0x00000000,unsigned>;
        ///Reference Picture Number for Index 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> refer0{}; 
        ///Reference Picture Number for Index 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> refer1{}; 
    }
    namespace VdecPnr1{    ///<Reference Picture Numbers Register 1
        using Addr = Register::Address<0x0090007c,0x00000000,0x00000000,unsigned>;
        ///Reference Picture Number for Index 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> refer2{}; 
        ///Reference Picture Number for Index 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> refer3{}; 
    }
    namespace VdecPnr2{    ///<Reference Picture Numbers Register 2
        using Addr = Register::Address<0x00900080,0xffffffff,0x00000000,unsigned>;
    }
    namespace VdecPnr3{    ///<Reference Picture Numbers Register 3
        using Addr = Register::Address<0x00900084,0x00000000,0x00000000,unsigned>;
        ///Reference Picture Number for Index 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> refer4{}; 
        ///Reference Picture Number for Index 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> refer5{}; 
    }
    namespace VdecPnr4{    ///<Reference Picture Numbers Register 4
        using Addr = Register::Address<0x00900088,0x00000000,0x00000000,unsigned>;
        ///Reference Picture Number for Index 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> refer8{}; 
        ///Reference Picture Number for Index 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> refer9{}; 
    }
    namespace VdecPnr5{    ///<Reference Picture Numbers Register 5
        using Addr = Register::Address<0x0090008c,0x00000000,0x00000000,unsigned>;
        ///Reference Picture Number for Index 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> refer10{}; 
        ///Reference Picture Number for Index 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> refer11{}; 
    }
    namespace VdecPnr6{    ///<Reference Picture Numbers Register 6
        using Addr = Register::Address<0x00900090,0x00000000,0x00000000,unsigned>;
        ///Reference Picture Number for Index 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> refer12{}; 
        ///Reference Picture Number for Index 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> refer13{}; 
    }
    namespace VdecPnr7{    ///<Reference Picture Numbers Register 7
        using Addr = Register::Address<0x00900094,0x00000000,0x00000000,unsigned>;
        ///Reference Picture Number for Index 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> refer14{}; 
        ///Reference Picture Number for Index 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> refer15{}; 
    }
    namespace VdecPltfr{    ///<Reference Picture Long Term Flag Register
        using Addr = Register::Address<0x00900098,0x00000000,0x00000000,unsigned>;
        ///Long Term Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ltf{}; 
    }
    namespace VdecPvfr{    ///<Reference Picture Valid Flag Register
        using Addr = Register::Address<0x0090009c,0xffffffff,0x00000000,unsigned>;
    }
    namespace VdecSdtba{    ///<Standard Dependent Tables Base Address
        using Addr = Register::Address<0x009000a0,0x00000003,0x00000000,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace VdecDmmvba{    ///<Direct Mode Motion Vector Base Address
        using Addr = Register::Address<0x009000a4,0x00000003,0x00000000,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace VdecIrplr0{    ///<H264 Initial Reference Picture List Register 0
        using Addr = Register::Address<0x009000a8,0xc0000000,0x00000000,unsigned>;
        ///Initial Reference Picture List for Forward Picid 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ireflFw0{}; 
        ///Initial Reference Picture List for Backward Picid 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> ireflBw0{}; 
        ///Initial Reference Picture List for Forward Picid 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> ireflFw1{}; 
        ///Initial Reference Picture List for Backward Picid 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> ireflBw1{}; 
        ///Initial Reference Picture List for Forward Picid 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,20),Register::ReadWriteAccess,unsigned> ireflFw2{}; 
        ///Initial Reference Picture List for Backward Picid 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,25),Register::ReadWriteAccess,unsigned> ireflBw2{}; 
    }
    namespace VdecIrplr1{    ///<H264 Initial Reference Picture List Register 1
        using Addr = Register::Address<0x009000ac,0xc0000000,0x00000000,unsigned>;
        ///Initial Reference Picture List for Forward Picid 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ireflFw3{}; 
        ///Initial Reference Picture List for Backward Picid 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> ireflBw3{}; 
        ///Initial Reference Picture List for Forward Picid 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> ireflFw4{}; 
        ///Initial Reference Picture List for Backward Picid 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> ireflBw4{}; 
        ///Initial Reference Picture List for Forward Picid 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,20),Register::ReadWriteAccess,unsigned> ireflFw5{}; 
        ///Initial Reference Picture List for Backward Picid 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,25),Register::ReadWriteAccess,unsigned> ireflBw5{}; 
    }
    namespace VdecIrplr2{    ///<H264 Initial Reference Picture List Register 2
        using Addr = Register::Address<0x009000b0,0xc0000000,0x00000000,unsigned>;
        ///Initial Reference Picture List for Forward Picid 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ireflFw6{}; 
        ///Initial Reference Picture List for Backward Picid 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> ireflBw6{}; 
        ///Initial Reference Picture List for Forward Picid 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> ireflFw7{}; 
        ///Initial Reference Picture List for Backward Picid 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> ireflBw7{}; 
        ///Initial Reference Picture List for Forward Picid 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,20),Register::ReadWriteAccess,unsigned> ireflFw8{}; 
        ///Initial Reference Picture List for Backward Picid 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,25),Register::ReadWriteAccess,unsigned> ireflBw8{}; 
    }
    namespace VdecIrplr3{    ///<H264 Initial Reference Picture List Register 3
        using Addr = Register::Address<0x009000b4,0xc0000000,0x00000000,unsigned>;
        ///Initial Reference Picture List for Forward Picid 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ireflFw9{}; 
        ///Initial Reference Picture List for Backward Picid 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> ireflBw9{}; 
        ///Initial Reference Picture List for Forward Picid 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> ireflFw10{}; 
        ///Initial Reference Picture List for Backward Picid 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> ireflBw10{}; 
        ///Initial Reference Picture List for Forward Picid 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,20),Register::ReadWriteAccess,unsigned> ireflFw11{}; 
        ///Initial Reference Picture List for Backward Picid 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,25),Register::ReadWriteAccess,unsigned> ireflBw11{}; 
    }
    namespace VdecIrplr4{    ///<H264 Initial Reference Picture List Register 4
        using Addr = Register::Address<0x009000b8,0xc0000000,0x00000000,unsigned>;
        ///Initial Reference Picture List for Forward Picid 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ireflFw12{}; 
        ///Initial Reference Picture List for Backward Picid 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> ireflBw12{}; 
        ///Initial Reference Picture List for Forward Picid 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> ireflFw13{}; 
        ///Initial Reference Picture List for Backward Picid 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> ireflBw13{}; 
        ///Initial Reference Picture List for Forward Picid 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,20),Register::ReadWriteAccess,unsigned> ireflFw14{}; 
        ///Initial Reference Picture List for Backward Picid 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,25),Register::ReadWriteAccess,unsigned> ireflBw14{}; 
    }
    namespace VdecIrplr5{    ///<H264 Initial Reference Picture List Register 5
        using Addr = Register::Address<0x009000bc,0xfffffc00,0x00000000,unsigned>;
        ///Initial Reference Picture List for Forward Picid 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ireflFw15{}; 
        ///Initial Reference Picture List for Backward Picid 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> ireflBw15{}; 
    }
    namespace VdecEcr{    ///<Error Concealment Register
        using Addr = Register::Address<0x009000c0,0x00007fff,0x00000000,unsigned>;
        ///Start MB from SW for Y Dimension
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,15),Register::ReadWriteAccess,unsigned> startmbY{}; 
        ///Start MB from SW for X Dimension
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> startmbX{}; 
    }
    namespace VdecPidxba0{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x00900038,0x00000003,0x00000000,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace VdecPidxba1{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x0090003c,0x00000003,0x00000000,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace VdecPidxba2{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x00900040,0x00000003,0x00000000,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace VdecPidxba3{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x00900044,0x00000003,0x00000000,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace VdecPidxba4{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x00900048,0x00000003,0x00000000,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace VdecPidxba5{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x0090004c,0x00000003,0x00000000,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace VdecPidxba6{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x00900050,0x00000003,0x00000000,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace VdecPidxba7{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x00900054,0x00000003,0x00000000,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace VdecPidxba8{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x00900058,0x00000003,0x00000000,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace VdecPidxba9{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x0090005c,0x00000003,0x00000000,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace VdecPidxba10{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x00900060,0x00000003,0x00000000,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace VdecPidxba11{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x00900064,0x00000003,0x00000000,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace VdecPidxba12{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x00900068,0x00000003,0x00000000,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace VdecPidxba13{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x0090006c,0x00000003,0x00000000,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace VdecPidxba14{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x00900070,0x00000003,0x00000000,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace VdecPidxba15{    ///<Reference Picture Index 0 Base Address
        using Addr = Register::Address<0x00900074,0x00000003,0x00000000,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> ba{}; 
    }
}
