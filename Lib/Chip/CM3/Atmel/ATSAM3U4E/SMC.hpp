#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Static Memory Controller
    namespace SmcCfg{    ///<SMC NFC Configuration Register
        using Addr = Register::Address<0x400e0000,0xff80ccfc,0,unsigned>;
        ///None
        enum class PagesizeVal {
            ps51216=0x00000000,     ///<Main area 512 Bytes + Spare area 16 Bytes = 528 Bytes
            ps102432=0x00000001,     ///<Main area 1024 Bytes + Spare area 32 Bytes = 1056 Bytes
            ps204864=0x00000002,     ///<Main area 2048 Bytes + Spare area 64 Bytes = 2112 Bytes
            ps4096128=0x00000003,     ///<Main area 4096 Bytes + Spare area 128 Bytes = 4224 Bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,PagesizeVal> pagesize{}; 
        namespace PagesizeValC{
            constexpr Register::FieldValue<decltype(pagesize),PagesizeVal::ps51216> ps51216{};
            constexpr Register::FieldValue<decltype(pagesize),PagesizeVal::ps102432> ps102432{};
            constexpr Register::FieldValue<decltype(pagesize),PagesizeVal::ps204864> ps204864{};
            constexpr Register::FieldValue<decltype(pagesize),PagesizeVal::ps4096128> ps4096128{};
        }
        ///Write Spare Area
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wspare{}; 
        namespace WspareValC{
        }
        ///Read Spare Area
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rspare{}; 
        namespace RspareValC{
        }
        ///Rising/Falling Edge Detection Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> edgectrl{}; 
        namespace EdgectrlValC{
        }
        ///Ready/Busy Signal Edge Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rbedge{}; 
        namespace RbedgeValC{
        }
        ///Data Timeout Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dtocyc{}; 
        namespace DtocycValC{
        }
        ///Data Timeout Multiplier
        enum class DtomulVal {
            x1=0x00000000,     ///<DTOCYC
            x16=0x00000001,     ///<DTOCYC x 16
            x128=0x00000002,     ///<DTOCYC x 128
            x256=0x00000003,     ///<DTOCYC x 256
            x1024=0x00000004,     ///<DTOCYC x 1024
            x4096=0x00000005,     ///<DTOCYC x 4096
            x65536=0x00000006,     ///<DTOCYC x 65536
            x1048576=0x00000007,     ///<DTOCYC x 1048576
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,DtomulVal> dtomul{}; 
        namespace DtomulValC{
            constexpr Register::FieldValue<decltype(dtomul),DtomulVal::x1> x1{};
            constexpr Register::FieldValue<decltype(dtomul),DtomulVal::x16> x16{};
            constexpr Register::FieldValue<decltype(dtomul),DtomulVal::x128> x128{};
            constexpr Register::FieldValue<decltype(dtomul),DtomulVal::x256> x256{};
            constexpr Register::FieldValue<decltype(dtomul),DtomulVal::x1024> x1024{};
            constexpr Register::FieldValue<decltype(dtomul),DtomulVal::x4096> x4096{};
            constexpr Register::FieldValue<decltype(dtomul),DtomulVal::x65536> x65536{};
            constexpr Register::FieldValue<decltype(dtomul),DtomulVal::x1048576> x1048576{};
        }
    }
    namespace SmcCtrl{    ///<SMC NFC Control Register
        using Addr = Register::Address<0x400e0004,0xfffffffc,0,unsigned>;
        ///NAND Flash Controller Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nfcen{}; 
        namespace NfcenValC{
        }
        ///NAND Flash Controller Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> nfcdis{}; 
        namespace NfcdisValC{
        }
    }
    namespace SmcSr{    ///<SMC NFC Status Register
        using Addr = Register::Address<0x400e0008,0xfe0c86ce,0,unsigned>;
        ///NAND Flash Controller status (this field cannot be reset)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> smcsts{}; 
        namespace SmcstsValC{
        }
        ///Selected Ready Busy Rising Edge Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rbRise{}; 
        namespace RbriseValC{
        }
        ///Selected Ready Busy Falling Edge Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rbFall{}; 
        namespace RbfallValC{
        }
        ///NFC Busy (this field cannot be reset)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nfcbusy{}; 
        namespace NfcbusyValC{
        }
        ///NFC Write/Read Operation (this field cannot be reset)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> nfcwr{}; 
        namespace NfcwrValC{
        }
        ///NFC Chip Select ID (this field cannot be reset)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> nfcsid{}; 
        namespace NfcsidValC{
        }
        ///NFC Data Transfer Terminated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> xfrdone{}; 
        namespace XfrdoneValC{
        }
        ///Command Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cmddone{}; 
        namespace CmddoneValC{
        }
        ///Data Timeout Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dtoe{}; 
        namespace DtoeValC{
        }
        ///Undefined Area Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> undef{}; 
        namespace UndefValC{
        }
        ///Accessing While Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> awb{}; 
        namespace AwbValC{
        }
        ///NFC Access Size Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> nfcase{}; 
        namespace NfcaseValC{
        }
        ///Ready/Busy Line 0 Edge Detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rbEdge0{}; 
        namespace Rbedge0ValC{
        }
    }
    namespace SmcIer{    ///<SMC NFC Interrupt Enable Register
        using Addr = Register::Address<0x400e000c,0xfe0cffcf,0,unsigned>;
        ///Ready Busy Rising Edge Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rbRise{}; 
        namespace RbriseValC{
        }
        ///Ready Busy Falling Edge Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rbFall{}; 
        namespace RbfallValC{
        }
        ///Transfer Done Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> xfrdone{}; 
        namespace XfrdoneValC{
        }
        ///Command Done Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cmddone{}; 
        namespace CmddoneValC{
        }
        ///Data Timeout Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dtoe{}; 
        namespace DtoeValC{
        }
        ///Undefined Area Access Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> undef{}; 
        namespace UndefValC{
        }
        ///Accessing While Busy Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> awb{}; 
        namespace AwbValC{
        }
        ///NFC Access Size Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> nfcase{}; 
        namespace NfcaseValC{
        }
        ///Ready/Busy Line 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rbEdge0{}; 
        namespace Rbedge0ValC{
        }
    }
    namespace SmcIdr{    ///<SMC NFC Interrupt Disable Register
        using Addr = Register::Address<0x400e0010,0xfe0cffcf,0,unsigned>;
        ///Ready Busy Rising Edge Detection Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rbRise{}; 
        namespace RbriseValC{
        }
        ///Ready Busy Falling Edge Detection Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rbFall{}; 
        namespace RbfallValC{
        }
        ///Transfer Done Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> xfrdone{}; 
        namespace XfrdoneValC{
        }
        ///Command Done Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cmddone{}; 
        namespace CmddoneValC{
        }
        ///Data Timeout Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dtoe{}; 
        namespace DtoeValC{
        }
        ///Undefined Area Access Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> undef{}; 
        namespace UndefValC{
        }
        ///Accessing While Busy Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> awb{}; 
        namespace AwbValC{
        }
        ///NFC Access Size Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> nfcase{}; 
        namespace NfcaseValC{
        }
        ///Ready/Busy Line 0 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rbEdge0{}; 
        namespace Rbedge0ValC{
        }
    }
    namespace SmcImr{    ///<SMC NFC Interrupt Mask Register
        using Addr = Register::Address<0x400e0014,0xfe0cffcf,0,unsigned>;
        ///Ready Busy Rising Edge Detection Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rbRise{}; 
        namespace RbriseValC{
        }
        ///Ready Busy Falling Edge Detection Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rbFall{}; 
        namespace RbfallValC{
        }
        ///Transfer Done Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> xfrdone{}; 
        namespace XfrdoneValC{
        }
        ///Command Done Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cmddone{}; 
        namespace CmddoneValC{
        }
        ///Data Timeout Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dtoe{}; 
        namespace DtoeValC{
        }
        ///Undefined Area Access Interrupt Mask5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> undef{}; 
        namespace UndefValC{
        }
        ///Accessing While Busy Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> awb{}; 
        namespace AwbValC{
        }
        ///NFC Access Size Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> nfcase{}; 
        namespace NfcaseValC{
        }
        ///Ready/Busy Line 0 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rbEdge0{}; 
        namespace Rbedge0ValC{
        }
    }
    namespace SmcAddr{    ///<SMC NFC Address Cycle Zero Register
        using Addr = Register::Address<0x400e0018,0xffffff00,0,unsigned>;
        ///NAND Flash Array Address cycle 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> addrCycle0{}; 
        namespace Addrcycle0ValC{
        }
    }
    namespace SmcBank{    ///<SMC Bank Address Register
        using Addr = Register::Address<0x400e001c,0xfffffff8,0,unsigned>;
        ///Bank Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bank{}; 
        namespace BankValC{
        }
    }
    namespace SmcEccCtrl{    ///<SMC ECC Control Register
        using Addr = Register::Address<0x400e0020,0xfffffffc,0,unsigned>;
        ///Reset ECC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rst{}; 
        namespace RstValC{
        }
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swrst{}; 
        namespace SwrstValC{
        }
    }
    namespace SmcEccMd{    ///<SMC ECC Mode Register
        using Addr = Register::Address<0x400e0024,0xffffffcc,0,unsigned>;
        ///ECC Page Size
        enum class EccpagesizeVal {
            ps51216=0x00000000,     ///<Main area 512 Bytes + Spare area 16 Bytes = 528 Bytes
            ps102432=0x00000001,     ///<Main area 1024 Bytes + Spare area 32 Bytes = 1056 Bytes
            ps204864=0x00000002,     ///<Main area 2048 Bytes + Spare area 64 Bytes = 2112 Bytes
            ps4096128=0x00000003,     ///<Main area 4096 Bytes + Spare area 128 Bytes = 4224 Bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,EccpagesizeVal> eccPagesize{}; 
        namespace EccpagesizeValC{
            constexpr Register::FieldValue<decltype(eccPagesize),EccpagesizeVal::ps51216> ps51216{};
            constexpr Register::FieldValue<decltype(eccPagesize),EccpagesizeVal::ps102432> ps102432{};
            constexpr Register::FieldValue<decltype(eccPagesize),EccpagesizeVal::ps204864> ps204864{};
            constexpr Register::FieldValue<decltype(eccPagesize),EccpagesizeVal::ps4096128> ps4096128{};
        }
        ///Type of Correction
        enum class TypcorrecVal {
            cpage=0x00000000,     ///<1 bit correction for a page of 512/1024/2048/4096 Bytes  (for 8 or 16-bit NAND Flash)
            c256b=0x00000001,     ///<1 bit correction for 256 Bytes of data for a page of 512/2048/4096 bytes (for 8-bit NAND Flash only)
            c512b=0x00000002,     ///<1 bit correction for 512 Bytes of data for a page of 512/2048/4096 bytes (for 8-bit NAND Flash only)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,TypcorrecVal> typcorrec{}; 
        namespace TypcorrecValC{
            constexpr Register::FieldValue<decltype(typcorrec),TypcorrecVal::cpage> cpage{};
            constexpr Register::FieldValue<decltype(typcorrec),TypcorrecVal::c256b> c256b{};
            constexpr Register::FieldValue<decltype(typcorrec),TypcorrecVal::c512b> c512b{};
        }
    }
    namespace SmcEccSr1{    ///<SMC ECC Status 1 Register
        using Addr = Register::Address<0x400e0028,0x88888888,0,unsigned>;
        ///Recoverable Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> recerr0{}; 
        namespace Recerr0ValC{
        }
        ///ECC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> eccerr0{}; 
        namespace Eccerr0ValC{
        }
        ///Recoverable Error in the page between the 256th and the 511th bytes or the 512nd and the 1023rd bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> recerr1{}; 
        namespace Recerr1ValC{
        }
        ///ECC Error in the page between the 256th and the 511th bytes or between the 512nd and the 1023rd bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eccerr1{}; 
        namespace Eccerr1ValC{
        }
        ///Multiple Error in the page between the 256th and the 511th bytes or between the 512nd and the 1023rd bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mulerr1{}; 
        namespace Mulerr1ValC{
        }
        ///Recoverable Error in the page between the 512nd and the 767th bytes or between the 1024th and the 1535th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> recerr2{}; 
        namespace Recerr2ValC{
        }
        ///ECC Error in the page between the 512nd and the 767th bytes or between the 1024th and the 1535th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eccerr2{}; 
        namespace Eccerr2ValC{
        }
        ///Multiple Error in the page between the 512nd and the 767th bytes or between the 1024th and the 1535th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mulerr2{}; 
        namespace Mulerr2ValC{
        }
        ///Recoverable Error in the page between the 768th and the 1023rd bytes or between the 1536th and the 2047th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> recerr3{}; 
        namespace Recerr3ValC{
        }
        ///ECC Error in the page between the 768th and the 1023rd bytes or between the 1536th and the 2047th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eccerr3{}; 
        namespace Eccerr3ValC{
        }
        ///Multiple Error in the page between the 768th and the 1023rd bytes or between the 1536th and the 2047th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mulerr3{}; 
        namespace Mulerr3ValC{
        }
        ///Recoverable Error in the page between the 1024th and the 1279th bytes or between the 2048th and the 2559th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> recerr4{}; 
        namespace Recerr4ValC{
        }
        ///ECC Error in the page between the 1024th and the 1279th bytes or between the 2048th and the 2559th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> eccerr4{}; 
        namespace Eccerr4ValC{
        }
        ///Recoverable Error in the page between the 1280th and the 1535th bytes or between the 2560th and the 3071st bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> recerr5{}; 
        namespace Recerr5ValC{
        }
        ///ECC Error in the page between the 1280th and the 1535th bytes or between the 2560th and the 3071st bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> eccerr5{}; 
        namespace Eccerr5ValC{
        }
        ///Recoverable Error in the page between the 1536th and the 1791st bytes or between the 3072nd and the 3583rd bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> recerr6{}; 
        namespace Recerr6ValC{
        }
        ///ECC Error in the page between the 1536th and the 1791st bytes or between the 3072nd and the 3583rd bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,25),Register::ReadWriteAccess,unsigned> eccerr6{}; 
        namespace Eccerr6ValC{
        }
        ///Recoverable Error in the page between the 1792nd and the 2047th bytes or between the 3584th and the 4095th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> recerr7{}; 
        namespace Recerr7ValC{
        }
        ///ECC Error in the page between the 1792nd and the 2047th bytes or between the 3584th and the 4095th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> eccerr7{}; 
        namespace Eccerr7ValC{
        }
    }
    namespace SmcEccPr0{    ///<SMC ECC Parity 0 Register
        using Addr = Register::Address<0x400e002c,0xffff0000,0,unsigned>;
        ///Bit Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        namespace BitaddrValC{
        }
        ///Word Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        namespace WordaddrValC{
        }
    }
    namespace SmcEccPr0W9bit{    ///<SMC ECC Parity 0 Register
        using Addr = Register::Address<0x400e002c,0xff000000,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        namespace BitaddrValC{
        }
        ///Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        namespace WordaddrValC{
        }
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> nparity{}; 
        namespace NparityValC{
        }
    }
    namespace SmcEccPr0W8bit{    ///<SMC ECC Parity 0 Register
        using Addr = Register::Address<0x400e002c,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        namespace BitaddrValC{
        }
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        namespace WordaddrValC{
        }
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
        namespace NparityValC{
        }
    }
    namespace SmcEccPr1{    ///<SMC ECC parity 1 Register
        using Addr = Register::Address<0x400e0030,0xffff0000,0,unsigned>;
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> nparity{}; 
        namespace NparityValC{
        }
    }
    namespace SmcEccPr1W9bit{    ///<SMC ECC parity 1 Register
        using Addr = Register::Address<0x400e0030,0xff000000,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        namespace BitaddrValC{
        }
        ///Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        namespace WordaddrValC{
        }
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> nparity{}; 
        namespace NparityValC{
        }
    }
    namespace SmcEccPr1W8bit{    ///<SMC ECC parity 1 Register
        using Addr = Register::Address<0x400e0030,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        namespace BitaddrValC{
        }
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        namespace WordaddrValC{
        }
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
        namespace NparityValC{
        }
    }
    namespace SmcEccSr2{    ///<SMC ECC status 2 Register
        using Addr = Register::Address<0x400e0034,0x88888888,0,unsigned>;
        ///Recoverable Error in the page between the 2048th and the 2303rd bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> recerr8{}; 
        namespace Recerr8ValC{
        }
        ///ECC Error in the page between the 2048th and the 2303rd bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> eccerr8{}; 
        namespace Eccerr8ValC{
        }
        ///Recoverable Error in the page between the 2304th and the 2559th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> recerr9{}; 
        namespace Recerr9ValC{
        }
        ///ECC Error in the page between the 2304th and the 2559th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eccerr9{}; 
        namespace Eccerr9ValC{
        }
        ///Multiple Error in the page between the 2304th and the 2559th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mulerr9{}; 
        namespace Mulerr9ValC{
        }
        ///Recoverable Error in the page between the 2560th and the 2815th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> recerr10{}; 
        namespace Recerr10ValC{
        }
        ///ECC Error in the page between the 2560th and the 2815th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eccerr10{}; 
        namespace Eccerr10ValC{
        }
        ///Multiple Error in the page between the 2560th and the 2815th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mulerr10{}; 
        namespace Mulerr10ValC{
        }
        ///Recoverable Error in the page between the 2816th and the 3071st bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> recerr11{}; 
        namespace Recerr11ValC{
        }
        ///ECC Error in the page between the 2816th and the 3071st bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eccerr11{}; 
        namespace Eccerr11ValC{
        }
        ///Multiple Error in the page between the 2816th and the 3071st bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mulerr11{}; 
        namespace Mulerr11ValC{
        }
        ///Recoverable Error in the page between the 3072nd and the 3327th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> recerr12{}; 
        namespace Recerr12ValC{
        }
        ///ECC Error in the page between the 3072nd and the 3327th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> eccerr12{}; 
        namespace Eccerr12ValC{
        }
        ///Recoverable Error in the page between the 3328th and the 3583rd bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> recerr13{}; 
        namespace Recerr13ValC{
        }
        ///ECC Error in the page between the 3328th and the 3583rd bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> eccerr13{}; 
        namespace Eccerr13ValC{
        }
        ///Recoverable Error in the page between the 3584th and the 3839th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> recerr14{}; 
        namespace Recerr14ValC{
        }
        ///ECC Error in the page between the 3584th and the 3839th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,25),Register::ReadWriteAccess,unsigned> eccerr14{}; 
        namespace Eccerr14ValC{
        }
        ///Recoverable Error in the page between the 3840th and the 4095th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> recerr15{}; 
        namespace Recerr15ValC{
        }
        ///ECC Error in the page between the 3840th and the 4095th bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> eccerr15{}; 
        namespace Eccerr15ValC{
        }
    }
    namespace SmcEccPr2{    ///<SMC ECC parity 2 Register
        using Addr = Register::Address<0x400e0038,0xff000000,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        namespace BitaddrValC{
        }
        ///Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        namespace WordaddrValC{
        }
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> nparity{}; 
        namespace NparityValC{
        }
    }
    namespace SmcEccPr2W8bit{    ///<SMC ECC parity 2 Register
        using Addr = Register::Address<0x400e0038,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        namespace BitaddrValC{
        }
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        namespace WordaddrValC{
        }
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
        namespace NparityValC{
        }
    }
    namespace SmcEccPr3{    ///<SMC ECC parity 3 Register
        using Addr = Register::Address<0x400e003c,0xff000000,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        namespace BitaddrValC{
        }
        ///Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        namespace WordaddrValC{
        }
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> nparity{}; 
        namespace NparityValC{
        }
    }
    namespace SmcEccPr3W8bit{    ///<SMC ECC parity 3 Register
        using Addr = Register::Address<0x400e003c,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        namespace BitaddrValC{
        }
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        namespace WordaddrValC{
        }
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
        namespace NparityValC{
        }
    }
    namespace SmcEccPr4{    ///<SMC ECC parity 4 Register
        using Addr = Register::Address<0x400e0040,0xff000000,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        namespace BitaddrValC{
        }
        ///Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        namespace WordaddrValC{
        }
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> nparity{}; 
        namespace NparityValC{
        }
    }
    namespace SmcEccPr4W8bit{    ///<SMC ECC parity 4 Register
        using Addr = Register::Address<0x400e0040,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        namespace BitaddrValC{
        }
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        namespace WordaddrValC{
        }
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
        namespace NparityValC{
        }
    }
    namespace SmcEccPr5{    ///<SMC ECC parity 5 Register
        using Addr = Register::Address<0x400e0044,0xff000000,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        namespace BitaddrValC{
        }
        ///Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        namespace WordaddrValC{
        }
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> nparity{}; 
        namespace NparityValC{
        }
    }
    namespace SmcEccPr5W8bit{    ///<SMC ECC parity 5 Register
        using Addr = Register::Address<0x400e0044,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        namespace BitaddrValC{
        }
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        namespace WordaddrValC{
        }
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
        namespace NparityValC{
        }
    }
    namespace SmcEccPr6{    ///<SMC ECC parity 6 Register
        using Addr = Register::Address<0x400e0048,0xff000000,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        namespace BitaddrValC{
        }
        ///Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        namespace WordaddrValC{
        }
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> nparity{}; 
        namespace NparityValC{
        }
    }
    namespace SmcEccPr6W8bit{    ///<SMC ECC parity 6 Register
        using Addr = Register::Address<0x400e0048,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        namespace BitaddrValC{
        }
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        namespace WordaddrValC{
        }
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
        namespace NparityValC{
        }
    }
    namespace SmcEccPr7{    ///<SMC ECC parity 7 Register
        using Addr = Register::Address<0x400e004c,0xff000000,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        namespace BitaddrValC{
        }
        ///Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        namespace WordaddrValC{
        }
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> nparity{}; 
        namespace NparityValC{
        }
    }
    namespace SmcEccPr7W8bit{    ///<SMC ECC parity 7 Register
        using Addr = Register::Address<0x400e004c,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        namespace BitaddrValC{
        }
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        namespace WordaddrValC{
        }
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
        namespace NparityValC{
        }
    }
    namespace SmcEccPr8{    ///<SMC ECC parity 8 Register
        using Addr = Register::Address<0x400e0050,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        namespace BitaddrValC{
        }
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        namespace WordaddrValC{
        }
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
        namespace NparityValC{
        }
    }
    namespace SmcEccPr9{    ///<SMC ECC parity 9 Register
        using Addr = Register::Address<0x400e0054,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        namespace BitaddrValC{
        }
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        namespace WordaddrValC{
        }
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
        namespace NparityValC{
        }
    }
    namespace SmcEccPr10{    ///<SMC ECC parity 10 Register
        using Addr = Register::Address<0x400e0058,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        namespace BitaddrValC{
        }
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        namespace WordaddrValC{
        }
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
        namespace NparityValC{
        }
    }
    namespace SmcEccPr11{    ///<SMC ECC parity 11 Register
        using Addr = Register::Address<0x400e005c,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        namespace BitaddrValC{
        }
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        namespace WordaddrValC{
        }
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
        namespace NparityValC{
        }
    }
    namespace SmcEccPr12{    ///<SMC ECC parity 12 Register
        using Addr = Register::Address<0x400e0060,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        namespace BitaddrValC{
        }
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        namespace WordaddrValC{
        }
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
        namespace NparityValC{
        }
    }
    namespace SmcEccPr13{    ///<SMC ECC parity 13 Register
        using Addr = Register::Address<0x400e0064,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        namespace BitaddrValC{
        }
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        namespace WordaddrValC{
        }
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
        namespace NparityValC{
        }
    }
    namespace SmcEccPr14{    ///<SMC ECC parity 14 Register
        using Addr = Register::Address<0x400e0068,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        namespace BitaddrValC{
        }
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        namespace WordaddrValC{
        }
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
        namespace NparityValC{
        }
    }
    namespace SmcEccPr15{    ///<SMC ECC parity 15 Register
        using Addr = Register::Address<0x400e006c,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        namespace BitaddrValC{
        }
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        namespace WordaddrValC{
        }
        ///Parity N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
        namespace NparityValC{
        }
    }
    namespace SmcSetup0{    ///<SMC Setup Register (CS_number = 0)
        using Addr = Register::Address<0x400e0070,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        namespace NwesetupValC{
        }
        ///NCS Setup Length in Write Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        namespace NcswrsetupValC{
        }
        ///NRD Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        namespace NrdsetupValC{
        }
        ///NCS Setup Length in Read Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
        namespace NcsrdsetupValC{
        }
    }
    namespace SmcPulse0{    ///<SMC Pulse Register (CS_number = 0)
        using Addr = Register::Address<0x400e0074,0xc0c0c0c0,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        namespace NwepulseValC{
        }
        ///NCS Pulse Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        namespace NcswrpulseValC{
        }
        ///NRD Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        namespace NrdpulseValC{
        }
        ///NCS Pulse Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
        namespace NcsrdpulseValC{
        }
    }
    namespace SmcCycle0{    ///<SMC Cycle Register (CS_number = 0)
        using Addr = Register::Address<0x400e0078,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        namespace NwecycleValC{
        }
        ///Total Read Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
        namespace NrdcycleValC{
        }
    }
    namespace SmcTimings0{    ///<SMC Timings Register (CS_number = 0)
        using Addr = Register::Address<0x400e007c,0x00f0e000,0,unsigned>;
        ///CLE to REN Low Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tclr{}; 
        namespace TclrValC{
        }
        ///ALE to Data Start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tadl{}; 
        namespace TadlValC{
        }
        ///ALE to REN Low Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tar{}; 
        namespace TarValC{
        }
        ///Off Chip Memory Scrambling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ocms{}; 
        namespace OcmsValC{
        }
        ///Ready to REN Low Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> trr{}; 
        namespace TrrValC{
        }
        ///WEN High to REN to Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> twb{}; 
        namespace TwbValC{
        }
        ///Ready/Busy Line Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> rbnsel{}; 
        namespace RbnselValC{
        }
        ///NAND Flash Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nfsel{}; 
        namespace NfselValC{
        }
    }
    namespace SmcMode0{    ///<SMC Mode Register (CS_number = 0)
        using Addr = Register::Address<0x400e0080,0xffe0eecc,0,unsigned>;
        ///None
        enum class ReadmodeVal {
            ncsCtrl=0x00000000,     ///<The Read operation is controlled by the NCS signal.
            nrdCtrl=0x00000001,     ///<The Read operation is controlled by the NRD signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ReadmodeVal> readMode{}; 
        namespace ReadmodeValC{
            constexpr Register::FieldValue<decltype(readMode),ReadmodeVal::ncsCtrl> ncsCtrl{};
            constexpr Register::FieldValue<decltype(readMode),ReadmodeVal::nrdCtrl> nrdCtrl{};
        }
        ///None
        enum class WritemodeVal {
            ncsCtrl=0x00000000,     ///<The Write operation is controller by the NCS signal.
            nweCtrl=0x00000001,     ///<The Write operation is controlled by the NWE signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WritemodeVal> writeMode{}; 
        namespace WritemodeValC{
            constexpr Register::FieldValue<decltype(writeMode),WritemodeVal::ncsCtrl> ncsCtrl{};
            constexpr Register::FieldValue<decltype(writeMode),WritemodeVal::nweCtrl> nweCtrl{};
        }
        ///NWAIT Mode
        enum class ExnwmodeVal {
            disabled=0x00000000,     ///<Disabled
            frozen=0x00000002,     ///<Frozen Mode
            ready=0x00000003,     ///<Ready Mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,ExnwmodeVal> exnwMode{}; 
        namespace ExnwmodeValC{
            constexpr Register::FieldValue<decltype(exnwMode),ExnwmodeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(exnwMode),ExnwmodeVal::frozen> frozen{};
            constexpr Register::FieldValue<decltype(exnwMode),ExnwmodeVal::ready> ready{};
        }
        ///Byte Access Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        namespace BatValC{
        }
        ///Data Bus Width
        enum class DbwVal {
            bit8=0x00000000,     ///<8-bit bus
            bit16=0x00000001,     ///<16-bit bus
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DbwVal> dbw{}; 
        namespace DbwValC{
            constexpr Register::FieldValue<decltype(dbw),DbwVal::bit8> bit8{};
            constexpr Register::FieldValue<decltype(dbw),DbwVal::bit16> bit16{};
        }
        ///Data Float Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        namespace TdfcyclesValC{
        }
        ///TDF Optimization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
        namespace TdfmodeValC{
        }
    }
    namespace SmcSetup1{    ///<SMC Setup Register (CS_number = 1)
        using Addr = Register::Address<0x400e0084,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        namespace NwesetupValC{
        }
        ///NCS Setup Length in Write Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        namespace NcswrsetupValC{
        }
        ///NRD Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        namespace NrdsetupValC{
        }
        ///NCS Setup Length in Read Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
        namespace NcsrdsetupValC{
        }
    }
    namespace SmcPulse1{    ///<SMC Pulse Register (CS_number = 1)
        using Addr = Register::Address<0x400e0088,0xc0c0c0c0,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        namespace NwepulseValC{
        }
        ///NCS Pulse Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        namespace NcswrpulseValC{
        }
        ///NRD Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        namespace NrdpulseValC{
        }
        ///NCS Pulse Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
        namespace NcsrdpulseValC{
        }
    }
    namespace SmcCycle1{    ///<SMC Cycle Register (CS_number = 1)
        using Addr = Register::Address<0x400e008c,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        namespace NwecycleValC{
        }
        ///Total Read Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
        namespace NrdcycleValC{
        }
    }
    namespace SmcTimings1{    ///<SMC Timings Register (CS_number = 1)
        using Addr = Register::Address<0x400e0090,0x00f0e000,0,unsigned>;
        ///CLE to REN Low Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tclr{}; 
        namespace TclrValC{
        }
        ///ALE to Data Start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tadl{}; 
        namespace TadlValC{
        }
        ///ALE to REN Low Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tar{}; 
        namespace TarValC{
        }
        ///Off Chip Memory Scrambling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ocms{}; 
        namespace OcmsValC{
        }
        ///Ready to REN Low Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> trr{}; 
        namespace TrrValC{
        }
        ///WEN High to REN to Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> twb{}; 
        namespace TwbValC{
        }
        ///Ready/Busy Line Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> rbnsel{}; 
        namespace RbnselValC{
        }
        ///NAND Flash Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nfsel{}; 
        namespace NfselValC{
        }
    }
    namespace SmcMode1{    ///<SMC Mode Register (CS_number = 1)
        using Addr = Register::Address<0x400e0094,0xffe0eecc,0,unsigned>;
        ///None
        enum class ReadmodeVal {
            ncsCtrl=0x00000000,     ///<The Read operation is controlled by the NCS signal.
            nrdCtrl=0x00000001,     ///<The Read operation is controlled by the NRD signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ReadmodeVal> readMode{}; 
        namespace ReadmodeValC{
            constexpr Register::FieldValue<decltype(readMode),ReadmodeVal::ncsCtrl> ncsCtrl{};
            constexpr Register::FieldValue<decltype(readMode),ReadmodeVal::nrdCtrl> nrdCtrl{};
        }
        ///None
        enum class WritemodeVal {
            ncsCtrl=0x00000000,     ///<The Write operation is controller by the NCS signal.
            nweCtrl=0x00000001,     ///<The Write operation is controlled by the NWE signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WritemodeVal> writeMode{}; 
        namespace WritemodeValC{
            constexpr Register::FieldValue<decltype(writeMode),WritemodeVal::ncsCtrl> ncsCtrl{};
            constexpr Register::FieldValue<decltype(writeMode),WritemodeVal::nweCtrl> nweCtrl{};
        }
        ///NWAIT Mode
        enum class ExnwmodeVal {
            disabled=0x00000000,     ///<Disabled
            frozen=0x00000002,     ///<Frozen Mode
            ready=0x00000003,     ///<Ready Mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,ExnwmodeVal> exnwMode{}; 
        namespace ExnwmodeValC{
            constexpr Register::FieldValue<decltype(exnwMode),ExnwmodeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(exnwMode),ExnwmodeVal::frozen> frozen{};
            constexpr Register::FieldValue<decltype(exnwMode),ExnwmodeVal::ready> ready{};
        }
        ///Byte Access Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        namespace BatValC{
        }
        ///Data Bus Width
        enum class DbwVal {
            bit8=0x00000000,     ///<8-bit bus
            bit16=0x00000001,     ///<16-bit bus
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DbwVal> dbw{}; 
        namespace DbwValC{
            constexpr Register::FieldValue<decltype(dbw),DbwVal::bit8> bit8{};
            constexpr Register::FieldValue<decltype(dbw),DbwVal::bit16> bit16{};
        }
        ///Data Float Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        namespace TdfcyclesValC{
        }
        ///TDF Optimization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
        namespace TdfmodeValC{
        }
    }
    namespace SmcSetup2{    ///<SMC Setup Register (CS_number = 2)
        using Addr = Register::Address<0x400e0098,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        namespace NwesetupValC{
        }
        ///NCS Setup Length in Write Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        namespace NcswrsetupValC{
        }
        ///NRD Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        namespace NrdsetupValC{
        }
        ///NCS Setup Length in Read Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
        namespace NcsrdsetupValC{
        }
    }
    namespace SmcPulse2{    ///<SMC Pulse Register (CS_number = 2)
        using Addr = Register::Address<0x400e009c,0xc0c0c0c0,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        namespace NwepulseValC{
        }
        ///NCS Pulse Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        namespace NcswrpulseValC{
        }
        ///NRD Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        namespace NrdpulseValC{
        }
        ///NCS Pulse Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
        namespace NcsrdpulseValC{
        }
    }
    namespace SmcCycle2{    ///<SMC Cycle Register (CS_number = 2)
        using Addr = Register::Address<0x400e00a0,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        namespace NwecycleValC{
        }
        ///Total Read Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
        namespace NrdcycleValC{
        }
    }
    namespace SmcTimings2{    ///<SMC Timings Register (CS_number = 2)
        using Addr = Register::Address<0x400e00a4,0x00f0e000,0,unsigned>;
        ///CLE to REN Low Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tclr{}; 
        namespace TclrValC{
        }
        ///ALE to Data Start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tadl{}; 
        namespace TadlValC{
        }
        ///ALE to REN Low Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tar{}; 
        namespace TarValC{
        }
        ///Off Chip Memory Scrambling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ocms{}; 
        namespace OcmsValC{
        }
        ///Ready to REN Low Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> trr{}; 
        namespace TrrValC{
        }
        ///WEN High to REN to Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> twb{}; 
        namespace TwbValC{
        }
        ///Ready/Busy Line Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> rbnsel{}; 
        namespace RbnselValC{
        }
        ///NAND Flash Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nfsel{}; 
        namespace NfselValC{
        }
    }
    namespace SmcMode2{    ///<SMC Mode Register (CS_number = 2)
        using Addr = Register::Address<0x400e00a8,0xffe0eecc,0,unsigned>;
        ///None
        enum class ReadmodeVal {
            ncsCtrl=0x00000000,     ///<The Read operation is controlled by the NCS signal.
            nrdCtrl=0x00000001,     ///<The Read operation is controlled by the NRD signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ReadmodeVal> readMode{}; 
        namespace ReadmodeValC{
            constexpr Register::FieldValue<decltype(readMode),ReadmodeVal::ncsCtrl> ncsCtrl{};
            constexpr Register::FieldValue<decltype(readMode),ReadmodeVal::nrdCtrl> nrdCtrl{};
        }
        ///None
        enum class WritemodeVal {
            ncsCtrl=0x00000000,     ///<The Write operation is controller by the NCS signal.
            nweCtrl=0x00000001,     ///<The Write operation is controlled by the NWE signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WritemodeVal> writeMode{}; 
        namespace WritemodeValC{
            constexpr Register::FieldValue<decltype(writeMode),WritemodeVal::ncsCtrl> ncsCtrl{};
            constexpr Register::FieldValue<decltype(writeMode),WritemodeVal::nweCtrl> nweCtrl{};
        }
        ///NWAIT Mode
        enum class ExnwmodeVal {
            disabled=0x00000000,     ///<Disabled
            frozen=0x00000002,     ///<Frozen Mode
            ready=0x00000003,     ///<Ready Mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,ExnwmodeVal> exnwMode{}; 
        namespace ExnwmodeValC{
            constexpr Register::FieldValue<decltype(exnwMode),ExnwmodeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(exnwMode),ExnwmodeVal::frozen> frozen{};
            constexpr Register::FieldValue<decltype(exnwMode),ExnwmodeVal::ready> ready{};
        }
        ///Byte Access Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        namespace BatValC{
        }
        ///Data Bus Width
        enum class DbwVal {
            bit8=0x00000000,     ///<8-bit bus
            bit16=0x00000001,     ///<16-bit bus
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DbwVal> dbw{}; 
        namespace DbwValC{
            constexpr Register::FieldValue<decltype(dbw),DbwVal::bit8> bit8{};
            constexpr Register::FieldValue<decltype(dbw),DbwVal::bit16> bit16{};
        }
        ///Data Float Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        namespace TdfcyclesValC{
        }
        ///TDF Optimization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
        namespace TdfmodeValC{
        }
    }
    namespace SmcSetup3{    ///<SMC Setup Register (CS_number = 3)
        using Addr = Register::Address<0x400e00ac,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        namespace NwesetupValC{
        }
        ///NCS Setup Length in Write Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        namespace NcswrsetupValC{
        }
        ///NRD Setup Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        namespace NrdsetupValC{
        }
        ///NCS Setup Length in Read Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
        namespace NcsrdsetupValC{
        }
    }
    namespace SmcPulse3{    ///<SMC Pulse Register (CS_number = 3)
        using Addr = Register::Address<0x400e00b0,0xc0c0c0c0,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        namespace NwepulseValC{
        }
        ///NCS Pulse Length in WRITE Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        namespace NcswrpulseValC{
        }
        ///NRD Pulse Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        namespace NrdpulseValC{
        }
        ///NCS Pulse Length in READ Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
        namespace NcsrdpulseValC{
        }
    }
    namespace SmcCycle3{    ///<SMC Cycle Register (CS_number = 3)
        using Addr = Register::Address<0x400e00b4,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        namespace NwecycleValC{
        }
        ///Total Read Cycle Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
        namespace NrdcycleValC{
        }
    }
    namespace SmcTimings3{    ///<SMC Timings Register (CS_number = 3)
        using Addr = Register::Address<0x400e00b8,0x00f0e000,0,unsigned>;
        ///CLE to REN Low Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tclr{}; 
        namespace TclrValC{
        }
        ///ALE to Data Start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tadl{}; 
        namespace TadlValC{
        }
        ///ALE to REN Low Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tar{}; 
        namespace TarValC{
        }
        ///Off Chip Memory Scrambling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ocms{}; 
        namespace OcmsValC{
        }
        ///Ready to REN Low Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> trr{}; 
        namespace TrrValC{
        }
        ///WEN High to REN to Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> twb{}; 
        namespace TwbValC{
        }
        ///Ready/Busy Line Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> rbnsel{}; 
        namespace RbnselValC{
        }
        ///NAND Flash Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nfsel{}; 
        namespace NfselValC{
        }
    }
    namespace SmcMode3{    ///<SMC Mode Register (CS_number = 3)
        using Addr = Register::Address<0x400e00bc,0xffe0eecc,0,unsigned>;
        ///None
        enum class ReadmodeVal {
            ncsCtrl=0x00000000,     ///<The Read operation is controlled by the NCS signal.
            nrdCtrl=0x00000001,     ///<The Read operation is controlled by the NRD signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ReadmodeVal> readMode{}; 
        namespace ReadmodeValC{
            constexpr Register::FieldValue<decltype(readMode),ReadmodeVal::ncsCtrl> ncsCtrl{};
            constexpr Register::FieldValue<decltype(readMode),ReadmodeVal::nrdCtrl> nrdCtrl{};
        }
        ///None
        enum class WritemodeVal {
            ncsCtrl=0x00000000,     ///<The Write operation is controller by the NCS signal.
            nweCtrl=0x00000001,     ///<The Write operation is controlled by the NWE signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WritemodeVal> writeMode{}; 
        namespace WritemodeValC{
            constexpr Register::FieldValue<decltype(writeMode),WritemodeVal::ncsCtrl> ncsCtrl{};
            constexpr Register::FieldValue<decltype(writeMode),WritemodeVal::nweCtrl> nweCtrl{};
        }
        ///NWAIT Mode
        enum class ExnwmodeVal {
            disabled=0x00000000,     ///<Disabled
            frozen=0x00000002,     ///<Frozen Mode
            ready=0x00000003,     ///<Ready Mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,ExnwmodeVal> exnwMode{}; 
        namespace ExnwmodeValC{
            constexpr Register::FieldValue<decltype(exnwMode),ExnwmodeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(exnwMode),ExnwmodeVal::frozen> frozen{};
            constexpr Register::FieldValue<decltype(exnwMode),ExnwmodeVal::ready> ready{};
        }
        ///Byte Access Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        namespace BatValC{
        }
        ///Data Bus Width
        enum class DbwVal {
            bit8=0x00000000,     ///<8-bit bus
            bit16=0x00000001,     ///<16-bit bus
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DbwVal> dbw{}; 
        namespace DbwValC{
            constexpr Register::FieldValue<decltype(dbw),DbwVal::bit8> bit8{};
            constexpr Register::FieldValue<decltype(dbw),DbwVal::bit16> bit16{};
        }
        ///Data Float Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        namespace TdfcyclesValC{
        }
        ///TDF Optimization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
        namespace TdfmodeValC{
        }
    }
    namespace SmcOcms{    ///<SMC OCMS Register
        using Addr = Register::Address<0x400e0110,0xfffffffc,0,unsigned>;
        ///Static Memory Controller Scrambling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> smse{}; 
        namespace SmseValC{
        }
        ///SRAM Scrambling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> srse{}; 
        namespace SrseValC{
        }
    }
    namespace SmcKey1{    ///<SMC OCMS KEY1 Register
        using Addr = Register::Address<0x400e0114,0x00000000,0,unsigned>;
        ///Off Chip Memory Scrambling (OCMS) Key Part 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> key1{}; 
        namespace Key1ValC{
        }
    }
    namespace SmcKey2{    ///<SMC OCMS KEY2 Register
        using Addr = Register::Address<0x400e0118,0x00000000,0,unsigned>;
        ///Off Chip Memory Scrambling (OCMS) Key Part 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> key2{}; 
        namespace Key2ValC{
        }
    }
    namespace SmcWpcr{    ///<Write Protection Control Register
        using Addr = Register::Address<0x400e01e4,0x000000fe,0,unsigned>;
        ///Write Protection Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpEn{}; 
        namespace WpenValC{
        }
        ///Write Protection KEY password
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpKey{}; 
        namespace WpkeyValC{
        }
    }
    namespace SmcWpsr{    ///<Write Protection Status Register
        using Addr = Register::Address<0x400e01e8,0xff0000f0,0,unsigned>;
        ///Write Protection Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> wpVs{}; 
        namespace WpvsValC{
        }
        ///Write Protection Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpVsrc{}; 
        namespace WpvsrcValC{
        }
    }
}
