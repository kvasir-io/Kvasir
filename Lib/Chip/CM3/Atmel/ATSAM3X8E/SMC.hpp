#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Static Memory Controller
    namespace SmcCfg{    ///<SMC NFC Configuration Register
        using Addr = Register::Address<0x400e0000,0xff80ccfc,0,unsigned>;
        ///None
        enum class pagesizeVal {
            ps51216=0x00000000,     ///<Main area 512 Bytes + Spare area 16 Bytes = 528 Bytes
            ps102432=0x00000001,     ///<Main area 1024 Bytes + Spare area 32 Bytes = 1056 Bytes
            ps204864=0x00000002,     ///<Main area 2048 Bytes + Spare area 64 Bytes = 2112 Bytes
            ps4096128=0x00000003,     ///<Main area 4096 Bytes + Spare area 128 Bytes = 4224 Bytes
        };
        namespace pagesizeValC{
            constexpr MPL::Value<pagesizeVal,pagesizeVal::ps51216> ps51216{};
            constexpr MPL::Value<pagesizeVal,pagesizeVal::ps102432> ps102432{};
            constexpr MPL::Value<pagesizeVal,pagesizeVal::ps204864> ps204864{};
            constexpr MPL::Value<pagesizeVal,pagesizeVal::ps4096128> ps4096128{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,pagesizeVal> pagesize{}; 
        ///Write Spare Area
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wspare{}; 
        ///Read Spare Area
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rspare{}; 
        ///Rising/Falling Edge Detection Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> edgectrl{}; 
        ///Ready/Busy Signal Edge Detection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rbedge{}; 
        ///Data Timeout Cycle Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dtocyc{}; 
        ///Data Timeout Multiplier
        enum class dtomulVal {
            x1=0x00000000,     ///<DTOCYC
            x16=0x00000001,     ///<DTOCYC x 16
            x128=0x00000002,     ///<DTOCYC x 128
            x256=0x00000003,     ///<DTOCYC x 256
            x1024=0x00000004,     ///<DTOCYC x 1024
            x4096=0x00000005,     ///<DTOCYC x 4096
            x65536=0x00000006,     ///<DTOCYC x 65536
            x1048576=0x00000007,     ///<DTOCYC x 1048576
        };
        namespace dtomulValC{
            constexpr MPL::Value<dtomulVal,dtomulVal::x1> x1{};
            constexpr MPL::Value<dtomulVal,dtomulVal::x16> x16{};
            constexpr MPL::Value<dtomulVal,dtomulVal::x128> x128{};
            constexpr MPL::Value<dtomulVal,dtomulVal::x256> x256{};
            constexpr MPL::Value<dtomulVal,dtomulVal::x1024> x1024{};
            constexpr MPL::Value<dtomulVal,dtomulVal::x4096> x4096{};
            constexpr MPL::Value<dtomulVal,dtomulVal::x65536> x65536{};
            constexpr MPL::Value<dtomulVal,dtomulVal::x1048576> x1048576{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,dtomulVal> dtomul{}; 
    }
    namespace SmcCtrl{    ///<SMC NFC Control Register
        using Addr = Register::Address<0x400e0004,0xfffffffc,0,unsigned>;
        ///NAND Flash Controller Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nfcen{}; 
        ///NAND Flash Controller Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> nfcdis{}; 
    }
    namespace SmcSr{    ///<SMC NFC Status Register
        using Addr = Register::Address<0x400e0008,0xfe0c86ce,0,unsigned>;
        ///NAND Flash Controller status (this field cannot be reset)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> smcsts{}; 
        ///Selected Ready Busy Rising Edge Detected
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rbRise{}; 
        ///Selected Ready Busy Falling Edge Detected
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rbFall{}; 
        ///NFC Busy (this field cannot be reset)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nfcbusy{}; 
        ///NFC Write/Read Operation (this field cannot be reset)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> nfcwr{}; 
        ///NFC Chip Select ID (this field cannot be reset)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> nfcsid{}; 
        ///NFC Data Transfer Terminated
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> xfrdone{}; 
        ///Command Done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cmddone{}; 
        ///Data Timeout Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dtoe{}; 
        ///Undefined Area Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> undef{}; 
        ///Accessing While Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> awb{}; 
        ///NFC Access Size Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> nfcase{}; 
        ///Ready/Busy Line 0 Edge Detected
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rbEdge0{}; 
    }
    namespace SmcIer{    ///<SMC NFC Interrupt Enable Register
        using Addr = Register::Address<0x400e000c,0xfe0cffcf,0,unsigned>;
        ///Ready Busy Rising Edge Detection Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rbRise{}; 
        ///Ready Busy Falling Edge Detection Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rbFall{}; 
        ///Transfer Done Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> xfrdone{}; 
        ///Command Done Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cmddone{}; 
        ///Data Timeout Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dtoe{}; 
        ///Undefined Area Access Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> undef{}; 
        ///Accessing While Busy Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> awb{}; 
        ///NFC Access Size Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> nfcase{}; 
        ///Ready/Busy Line 0 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rbEdge0{}; 
    }
    namespace SmcIdr{    ///<SMC NFC Interrupt Disable Register
        using Addr = Register::Address<0x400e0010,0xfe0cffcf,0,unsigned>;
        ///Ready Busy Rising Edge Detection Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rbRise{}; 
        ///Ready Busy Falling Edge Detection Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rbFall{}; 
        ///Transfer Done Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> xfrdone{}; 
        ///Command Done Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cmddone{}; 
        ///Data Timeout Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dtoe{}; 
        ///Undefined Area Access Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> undef{}; 
        ///Accessing While Busy Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> awb{}; 
        ///NFC Access Size Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> nfcase{}; 
        ///Ready/Busy Line 0 Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rbEdge0{}; 
    }
    namespace SmcImr{    ///<SMC NFC Interrupt Mask Register
        using Addr = Register::Address<0x400e0014,0xfe0cffcf,0,unsigned>;
        ///Ready Busy Rising Edge Detection Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rbRise{}; 
        ///Ready Busy Falling Edge Detection Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rbFall{}; 
        ///Transfer Done Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> xfrdone{}; 
        ///Command Done Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cmddone{}; 
        ///Data Timeout Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dtoe{}; 
        ///Undefined Area Access Interrupt Mask5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> undef{}; 
        ///Accessing While Busy Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> awb{}; 
        ///NFC Access Size Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> nfcase{}; 
        ///Ready/Busy Line 0 Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rbEdge0{}; 
    }
    namespace SmcAddr{    ///<SMC NFC Address Cycle Zero Register
        using Addr = Register::Address<0x400e0018,0xffffff00,0,unsigned>;
        ///NAND Flash Array Address cycle 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> addrCycle0{}; 
    }
    namespace SmcBank{    ///<SMC Bank Address Register
        using Addr = Register::Address<0x400e001c,0xfffffff8,0,unsigned>;
        ///Bank Identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bank{}; 
    }
    namespace SmcEccCtrl{    ///<SMC ECC Control Register
        using Addr = Register::Address<0x400e0020,0xfffffffc,0,unsigned>;
        ///Reset ECC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rst{}; 
        ///Software Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swrst{}; 
    }
    namespace SmcEccMd{    ///<SMC ECC Mode Register
        using Addr = Register::Address<0x400e0024,0xffffffcc,0,unsigned>;
        ///ECC Page Size
        enum class eccPagesizeVal {
            ps51216=0x00000000,     ///<Main area 512 Bytes + Spare area 16 Bytes = 528 Bytes
            ps102432=0x00000001,     ///<Main area 1024 Bytes + Spare area 32 Bytes = 1056 Bytes
            ps204864=0x00000002,     ///<Main area 2048 Bytes + Spare area 64 Bytes = 2112 Bytes
            ps4096128=0x00000003,     ///<Main area 4096 Bytes + Spare area 128 Bytes = 4224 Bytes
        };
        namespace eccPagesizeValC{
            constexpr MPL::Value<eccPagesizeVal,eccPagesizeVal::ps51216> ps51216{};
            constexpr MPL::Value<eccPagesizeVal,eccPagesizeVal::ps102432> ps102432{};
            constexpr MPL::Value<eccPagesizeVal,eccPagesizeVal::ps204864> ps204864{};
            constexpr MPL::Value<eccPagesizeVal,eccPagesizeVal::ps4096128> ps4096128{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,eccPagesizeVal> eccPagesize{}; 
        ///Type of Correction
        enum class typcorrecVal {
            cpage=0x00000000,     ///<1 bit correction for a page of 512/1024/2048/4096 Bytes  (for 8 or 16-bit NAND Flash)
            c256b=0x00000001,     ///<1 bit correction for 256 Bytes of data for a page of 512/2048/4096 bytes (for 8-bit NAND Flash only)
            c512b=0x00000002,     ///<1 bit correction for 512 Bytes of data for a page of 512/2048/4096 bytes (for 8-bit NAND Flash only)
        };
        namespace typcorrecValC{
            constexpr MPL::Value<typcorrecVal,typcorrecVal::cpage> cpage{};
            constexpr MPL::Value<typcorrecVal,typcorrecVal::c256b> c256b{};
            constexpr MPL::Value<typcorrecVal,typcorrecVal::c512b> c512b{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,typcorrecVal> typcorrec{}; 
    }
    namespace SmcEccSr1{    ///<SMC ECC Status 1 Register
        using Addr = Register::Address<0x400e0028,0x88888888,0,unsigned>;
        ///Recoverable Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> recerr0{}; 
        ///ECC Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> eccerr0{}; 
        ///Recoverable Error in the page between the 256th and the 511th bytes or the 512nd and the 1023rd bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> recerr1{}; 
        ///ECC Error in the page between the 256th and the 511th bytes or between the 512nd and the 1023rd bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eccerr1{}; 
        ///Multiple Error in the page between the 256th and the 511th bytes or between the 512nd and the 1023rd bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mulerr1{}; 
        ///Recoverable Error in the page between the 512nd and the 767th bytes or between the 1024th and the 1535th bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> recerr2{}; 
        ///ECC Error in the page between the 512nd and the 767th bytes or between the 1024th and the 1535th bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eccerr2{}; 
        ///Multiple Error in the page between the 512nd and the 767th bytes or between the 1024th and the 1535th bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mulerr2{}; 
        ///Recoverable Error in the page between the 768th and the 1023rd bytes or between the 1536th and the 2047th bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> recerr3{}; 
        ///ECC Error in the page between the 768th and the 1023rd bytes or between the 1536th and the 2047th bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eccerr3{}; 
        ///Multiple Error in the page between the 768th and the 1023rd bytes or between the 1536th and the 2047th bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mulerr3{}; 
        ///Recoverable Error in the page between the 1024th and the 1279th bytes or between the 2048th and the 2559th bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> recerr4{}; 
        ///ECC Error in the page between the 1024th and the 1279th bytes or between the 2048th and the 2559th bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> eccerr4{}; 
        ///Recoverable Error in the page between the 1280th and the 1535th bytes or between the 2560th and the 3071st bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> recerr5{}; 
        ///ECC Error in the page between the 1280th and the 1535th bytes or between the 2560th and the 3071st bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> eccerr5{}; 
        ///Recoverable Error in the page between the 1536th and the 1791st bytes or between the 3072nd and the 3583rd bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> recerr6{}; 
        ///ECC Error in the page between the 1536th and the 1791st bytes or between the 3072nd and the 3583rd bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,25),Register::ReadWriteAccess,unsigned> eccerr6{}; 
        ///Recoverable Error in the page between the 1792nd and the 2047th bytes or between the 3584th and the 4095th bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> recerr7{}; 
        ///ECC Error in the page between the 1792nd and the 2047th bytes or between the 3584th and the 4095th bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> eccerr7{}; 
    }
    namespace SmcEccPr0{    ///<SMC ECC Parity 0 Register
        using Addr = Register::Address<0x400e002c,0xffff0000,0,unsigned>;
        ///Bit Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        ///Word Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> wordaddr{}; 
    }
    namespace SmcEccPr0W9bit{    ///<SMC ECC Parity 0 Register
        using Addr = Register::Address<0x400e002c,0xff000000,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> nparity{}; 
    }
    namespace SmcEccPr0W8bit{    ///<SMC ECC Parity 0 Register
        using Addr = Register::Address<0x400e002c,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
    }
    namespace SmcEccPr1{    ///<SMC ECC parity 1 Register
        using Addr = Register::Address<0x400e0030,0xffff0000,0,unsigned>;
        ///Parity N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> nparity{}; 
    }
    namespace SmcEccPr1W9bit{    ///<SMC ECC parity 1 Register
        using Addr = Register::Address<0x400e0030,0xff000000,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> nparity{}; 
    }
    namespace SmcEccPr1W8bit{    ///<SMC ECC parity 1 Register
        using Addr = Register::Address<0x400e0030,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
    }
    namespace SmcEccSr2{    ///<SMC ECC status 2 Register
        using Addr = Register::Address<0x400e0034,0x88888888,0,unsigned>;
        ///Recoverable Error in the page between the 2048th and the 2303rd bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> recerr8{}; 
        ///ECC Error in the page between the 2048th and the 2303rd bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> eccerr8{}; 
        ///Recoverable Error in the page between the 2304th and the 2559th bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> recerr9{}; 
        ///ECC Error in the page between the 2304th and the 2559th bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eccerr9{}; 
        ///Multiple Error in the page between the 2304th and the 2559th bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mulerr9{}; 
        ///Recoverable Error in the page between the 2560th and the 2815th bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> recerr10{}; 
        ///ECC Error in the page between the 2560th and the 2815th bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eccerr10{}; 
        ///Multiple Error in the page between the 2560th and the 2815th bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mulerr10{}; 
        ///Recoverable Error in the page between the 2816th and the 3071st bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> recerr11{}; 
        ///ECC Error in the page between the 2816th and the 3071st bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> eccerr11{}; 
        ///Multiple Error in the page between the 2816th and the 3071st bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mulerr11{}; 
        ///Recoverable Error in the page between the 3072nd and the 3327th bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> recerr12{}; 
        ///ECC Error in the page between the 3072nd and the 3327th bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> eccerr12{}; 
        ///Recoverable Error in the page between the 3328th and the 3583rd bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> recerr13{}; 
        ///ECC Error in the page between the 3328th and the 3583rd bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> eccerr13{}; 
        ///Recoverable Error in the page between the 3584th and the 3839th bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> recerr14{}; 
        ///ECC Error in the page between the 3584th and the 3839th bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,25),Register::ReadWriteAccess,unsigned> eccerr14{}; 
        ///Recoverable Error in the page between the 3840th and the 4095th bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> recerr15{}; 
        ///ECC Error in the page between the 3840th and the 4095th bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> eccerr15{}; 
    }
    namespace SmcEccPr2{    ///<SMC ECC parity 2 Register
        using Addr = Register::Address<0x400e0038,0xff000000,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> nparity{}; 
    }
    namespace SmcEccPr2W8bit{    ///<SMC ECC parity 2 Register
        using Addr = Register::Address<0x400e0038,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
    }
    namespace SmcEccPr3{    ///<SMC ECC parity 3 Register
        using Addr = Register::Address<0x400e003c,0xff000000,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> nparity{}; 
    }
    namespace SmcEccPr3W8bit{    ///<SMC ECC parity 3 Register
        using Addr = Register::Address<0x400e003c,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
    }
    namespace SmcEccPr4{    ///<SMC ECC parity 4 Register
        using Addr = Register::Address<0x400e0040,0xff000000,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> nparity{}; 
    }
    namespace SmcEccPr4W8bit{    ///<SMC ECC parity 4 Register
        using Addr = Register::Address<0x400e0040,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
    }
    namespace SmcEccPr5{    ///<SMC ECC parity 5 Register
        using Addr = Register::Address<0x400e0044,0xff000000,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> nparity{}; 
    }
    namespace SmcEccPr5W8bit{    ///<SMC ECC parity 5 Register
        using Addr = Register::Address<0x400e0044,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
    }
    namespace SmcEccPr6{    ///<SMC ECC parity 6 Register
        using Addr = Register::Address<0x400e0048,0xff000000,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> nparity{}; 
    }
    namespace SmcEccPr6W8bit{    ///<SMC ECC parity 6 Register
        using Addr = Register::Address<0x400e0048,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
    }
    namespace SmcEccPr7{    ///<SMC ECC parity 7 Register
        using Addr = Register::Address<0x400e004c,0xff000000,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,12),Register::ReadWriteAccess,unsigned> nparity{}; 
    }
    namespace SmcEccPr7W8bit{    ///<SMC ECC parity 7 Register
        using Addr = Register::Address<0x400e004c,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
    }
    namespace SmcEccPr8{    ///<SMC ECC parity 8 Register
        using Addr = Register::Address<0x400e0050,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
    }
    namespace SmcEccPr9{    ///<SMC ECC parity 9 Register
        using Addr = Register::Address<0x400e0054,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
    }
    namespace SmcEccPr10{    ///<SMC ECC parity 10 Register
        using Addr = Register::Address<0x400e0058,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
    }
    namespace SmcEccPr11{    ///<SMC ECC parity 11 Register
        using Addr = Register::Address<0x400e005c,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
    }
    namespace SmcEccPr12{    ///<SMC ECC parity 12 Register
        using Addr = Register::Address<0x400e0060,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
    }
    namespace SmcEccPr13{    ///<SMC ECC parity 13 Register
        using Addr = Register::Address<0x400e0064,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
    }
    namespace SmcEccPr14{    ///<SMC ECC parity 14 Register
        using Addr = Register::Address<0x400e0068,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
    }
    namespace SmcEccPr15{    ///<SMC ECC parity 15 Register
        using Addr = Register::Address<0x400e006c,0xff800800,0,unsigned>;
        ///Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> bitaddr{}; 
        ///Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> wordaddr{}; 
        ///Parity N
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,12),Register::ReadWriteAccess,unsigned> nparity{}; 
    }
    namespace SmcSetup0{    ///<SMC Setup Register (CS_number = 0)
        using Addr = Register::Address<0x400e0070,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        ///NCS Setup Length in Write Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        ///NRD Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        ///NCS Setup Length in Read Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
    }
    namespace SmcPulse0{    ///<SMC Pulse Register (CS_number = 0)
        using Addr = Register::Address<0x400e0074,0xc0c0c0c0,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        ///NCS Pulse Length in WRITE Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        ///NRD Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        ///NCS Pulse Length in READ Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
    }
    namespace SmcCycle0{    ///<SMC Cycle Register (CS_number = 0)
        using Addr = Register::Address<0x400e0078,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcTimings0{    ///<SMC Timings Register (CS_number = 0)
        using Addr = Register::Address<0x400e007c,0x00f0e000,0,unsigned>;
        ///CLE to REN Low Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tclr{}; 
        ///ALE to Data Start
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tadl{}; 
        ///ALE to REN Low Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tar{}; 
        ///Off Chip Memory Scrambling Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ocms{}; 
        ///Ready to REN Low Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> trr{}; 
        ///WEN High to REN to Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> twb{}; 
        ///Ready/Busy Line Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> rbnsel{}; 
        ///NAND Flash Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nfsel{}; 
    }
    namespace SmcMode0{    ///<SMC Mode Register (CS_number = 0)
        using Addr = Register::Address<0x400e0080,0xffe0eecc,0,unsigned>;
        ///None
        enum class readModeVal {
            ncsCtrl=0x00000000,     ///<The Read operation is controlled by the NCS signal.
            nrdCtrl=0x00000001,     ///<The Read operation is controlled by the NRD signal.
        };
        namespace readModeValC{
            constexpr MPL::Value<readModeVal,readModeVal::ncsCtrl> ncsCtrl{};
            constexpr MPL::Value<readModeVal,readModeVal::nrdCtrl> nrdCtrl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,readModeVal> readMode{}; 
        ///None
        enum class writeModeVal {
            ncsCtrl=0x00000000,     ///<The Write operation is controller by the NCS signal.
            nweCtrl=0x00000001,     ///<The Write operation is controlled by the NWE signal.
        };
        namespace writeModeValC{
            constexpr MPL::Value<writeModeVal,writeModeVal::ncsCtrl> ncsCtrl{};
            constexpr MPL::Value<writeModeVal,writeModeVal::nweCtrl> nweCtrl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,writeModeVal> writeMode{}; 
        ///NWAIT Mode
        enum class exnwModeVal {
            disabled=0x00000000,     ///<Disabled
            frozen=0x00000002,     ///<Frozen Mode
            ready=0x00000003,     ///<Ready Mode
        };
        namespace exnwModeValC{
            constexpr MPL::Value<exnwModeVal,exnwModeVal::disabled> disabled{};
            constexpr MPL::Value<exnwModeVal,exnwModeVal::frozen> frozen{};
            constexpr MPL::Value<exnwModeVal,exnwModeVal::ready> ready{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,exnwModeVal> exnwMode{}; 
        ///Byte Access Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        ///Data Bus Width
        enum class dbwVal {
            bit8=0x00000000,     ///<8-bit bus
            bit16=0x00000001,     ///<16-bit bus
        };
        namespace dbwValC{
            constexpr MPL::Value<dbwVal,dbwVal::bit8> bit8{};
            constexpr MPL::Value<dbwVal,dbwVal::bit16> bit16{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dbwVal> dbw{}; 
        ///Data Float Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        ///TDF Optimization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
    }
    namespace SmcSetup1{    ///<SMC Setup Register (CS_number = 1)
        using Addr = Register::Address<0x400e0084,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        ///NCS Setup Length in Write Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        ///NRD Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        ///NCS Setup Length in Read Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
    }
    namespace SmcPulse1{    ///<SMC Pulse Register (CS_number = 1)
        using Addr = Register::Address<0x400e0088,0xc0c0c0c0,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        ///NCS Pulse Length in WRITE Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        ///NRD Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        ///NCS Pulse Length in READ Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
    }
    namespace SmcCycle1{    ///<SMC Cycle Register (CS_number = 1)
        using Addr = Register::Address<0x400e008c,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcTimings1{    ///<SMC Timings Register (CS_number = 1)
        using Addr = Register::Address<0x400e0090,0x00f0e000,0,unsigned>;
        ///CLE to REN Low Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tclr{}; 
        ///ALE to Data Start
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tadl{}; 
        ///ALE to REN Low Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tar{}; 
        ///Off Chip Memory Scrambling Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ocms{}; 
        ///Ready to REN Low Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> trr{}; 
        ///WEN High to REN to Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> twb{}; 
        ///Ready/Busy Line Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> rbnsel{}; 
        ///NAND Flash Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nfsel{}; 
    }
    namespace SmcMode1{    ///<SMC Mode Register (CS_number = 1)
        using Addr = Register::Address<0x400e0094,0xffe0eecc,0,unsigned>;
        ///None
        enum class readModeVal {
            ncsCtrl=0x00000000,     ///<The Read operation is controlled by the NCS signal.
            nrdCtrl=0x00000001,     ///<The Read operation is controlled by the NRD signal.
        };
        namespace readModeValC{
            constexpr MPL::Value<readModeVal,readModeVal::ncsCtrl> ncsCtrl{};
            constexpr MPL::Value<readModeVal,readModeVal::nrdCtrl> nrdCtrl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,readModeVal> readMode{}; 
        ///None
        enum class writeModeVal {
            ncsCtrl=0x00000000,     ///<The Write operation is controller by the NCS signal.
            nweCtrl=0x00000001,     ///<The Write operation is controlled by the NWE signal.
        };
        namespace writeModeValC{
            constexpr MPL::Value<writeModeVal,writeModeVal::ncsCtrl> ncsCtrl{};
            constexpr MPL::Value<writeModeVal,writeModeVal::nweCtrl> nweCtrl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,writeModeVal> writeMode{}; 
        ///NWAIT Mode
        enum class exnwModeVal {
            disabled=0x00000000,     ///<Disabled
            frozen=0x00000002,     ///<Frozen Mode
            ready=0x00000003,     ///<Ready Mode
        };
        namespace exnwModeValC{
            constexpr MPL::Value<exnwModeVal,exnwModeVal::disabled> disabled{};
            constexpr MPL::Value<exnwModeVal,exnwModeVal::frozen> frozen{};
            constexpr MPL::Value<exnwModeVal,exnwModeVal::ready> ready{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,exnwModeVal> exnwMode{}; 
        ///Byte Access Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        ///Data Bus Width
        enum class dbwVal {
            bit8=0x00000000,     ///<8-bit bus
            bit16=0x00000001,     ///<16-bit bus
        };
        namespace dbwValC{
            constexpr MPL::Value<dbwVal,dbwVal::bit8> bit8{};
            constexpr MPL::Value<dbwVal,dbwVal::bit16> bit16{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dbwVal> dbw{}; 
        ///Data Float Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        ///TDF Optimization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
    }
    namespace SmcSetup2{    ///<SMC Setup Register (CS_number = 2)
        using Addr = Register::Address<0x400e0098,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        ///NCS Setup Length in Write Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        ///NRD Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        ///NCS Setup Length in Read Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
    }
    namespace SmcPulse2{    ///<SMC Pulse Register (CS_number = 2)
        using Addr = Register::Address<0x400e009c,0xc0c0c0c0,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        ///NCS Pulse Length in WRITE Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        ///NRD Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        ///NCS Pulse Length in READ Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
    }
    namespace SmcCycle2{    ///<SMC Cycle Register (CS_number = 2)
        using Addr = Register::Address<0x400e00a0,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcTimings2{    ///<SMC Timings Register (CS_number = 2)
        using Addr = Register::Address<0x400e00a4,0x00f0e000,0,unsigned>;
        ///CLE to REN Low Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tclr{}; 
        ///ALE to Data Start
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tadl{}; 
        ///ALE to REN Low Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tar{}; 
        ///Off Chip Memory Scrambling Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ocms{}; 
        ///Ready to REN Low Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> trr{}; 
        ///WEN High to REN to Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> twb{}; 
        ///Ready/Busy Line Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> rbnsel{}; 
        ///NAND Flash Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nfsel{}; 
    }
    namespace SmcMode2{    ///<SMC Mode Register (CS_number = 2)
        using Addr = Register::Address<0x400e00a8,0xffe0eecc,0,unsigned>;
        ///None
        enum class readModeVal {
            ncsCtrl=0x00000000,     ///<The Read operation is controlled by the NCS signal.
            nrdCtrl=0x00000001,     ///<The Read operation is controlled by the NRD signal.
        };
        namespace readModeValC{
            constexpr MPL::Value<readModeVal,readModeVal::ncsCtrl> ncsCtrl{};
            constexpr MPL::Value<readModeVal,readModeVal::nrdCtrl> nrdCtrl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,readModeVal> readMode{}; 
        ///None
        enum class writeModeVal {
            ncsCtrl=0x00000000,     ///<The Write operation is controller by the NCS signal.
            nweCtrl=0x00000001,     ///<The Write operation is controlled by the NWE signal.
        };
        namespace writeModeValC{
            constexpr MPL::Value<writeModeVal,writeModeVal::ncsCtrl> ncsCtrl{};
            constexpr MPL::Value<writeModeVal,writeModeVal::nweCtrl> nweCtrl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,writeModeVal> writeMode{}; 
        ///NWAIT Mode
        enum class exnwModeVal {
            disabled=0x00000000,     ///<Disabled
            frozen=0x00000002,     ///<Frozen Mode
            ready=0x00000003,     ///<Ready Mode
        };
        namespace exnwModeValC{
            constexpr MPL::Value<exnwModeVal,exnwModeVal::disabled> disabled{};
            constexpr MPL::Value<exnwModeVal,exnwModeVal::frozen> frozen{};
            constexpr MPL::Value<exnwModeVal,exnwModeVal::ready> ready{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,exnwModeVal> exnwMode{}; 
        ///Byte Access Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        ///Data Bus Width
        enum class dbwVal {
            bit8=0x00000000,     ///<8-bit bus
            bit16=0x00000001,     ///<16-bit bus
        };
        namespace dbwValC{
            constexpr MPL::Value<dbwVal,dbwVal::bit8> bit8{};
            constexpr MPL::Value<dbwVal,dbwVal::bit16> bit16{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dbwVal> dbw{}; 
        ///Data Float Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        ///TDF Optimization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
    }
    namespace SmcSetup3{    ///<SMC Setup Register (CS_number = 3)
        using Addr = Register::Address<0x400e00ac,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        ///NCS Setup Length in Write Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        ///NRD Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        ///NCS Setup Length in Read Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
    }
    namespace SmcPulse3{    ///<SMC Pulse Register (CS_number = 3)
        using Addr = Register::Address<0x400e00b0,0xc0c0c0c0,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        ///NCS Pulse Length in WRITE Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        ///NRD Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        ///NCS Pulse Length in READ Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
    }
    namespace SmcCycle3{    ///<SMC Cycle Register (CS_number = 3)
        using Addr = Register::Address<0x400e00b4,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcTimings3{    ///<SMC Timings Register (CS_number = 3)
        using Addr = Register::Address<0x400e00b8,0x00f0e000,0,unsigned>;
        ///CLE to REN Low Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tclr{}; 
        ///ALE to Data Start
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tadl{}; 
        ///ALE to REN Low Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tar{}; 
        ///Off Chip Memory Scrambling Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ocms{}; 
        ///Ready to REN Low Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> trr{}; 
        ///WEN High to REN to Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> twb{}; 
        ///Ready/Busy Line Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> rbnsel{}; 
        ///NAND Flash Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nfsel{}; 
    }
    namespace SmcMode3{    ///<SMC Mode Register (CS_number = 3)
        using Addr = Register::Address<0x400e00bc,0xffe0eecc,0,unsigned>;
        ///None
        enum class readModeVal {
            ncsCtrl=0x00000000,     ///<The Read operation is controlled by the NCS signal.
            nrdCtrl=0x00000001,     ///<The Read operation is controlled by the NRD signal.
        };
        namespace readModeValC{
            constexpr MPL::Value<readModeVal,readModeVal::ncsCtrl> ncsCtrl{};
            constexpr MPL::Value<readModeVal,readModeVal::nrdCtrl> nrdCtrl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,readModeVal> readMode{}; 
        ///None
        enum class writeModeVal {
            ncsCtrl=0x00000000,     ///<The Write operation is controller by the NCS signal.
            nweCtrl=0x00000001,     ///<The Write operation is controlled by the NWE signal.
        };
        namespace writeModeValC{
            constexpr MPL::Value<writeModeVal,writeModeVal::ncsCtrl> ncsCtrl{};
            constexpr MPL::Value<writeModeVal,writeModeVal::nweCtrl> nweCtrl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,writeModeVal> writeMode{}; 
        ///NWAIT Mode
        enum class exnwModeVal {
            disabled=0x00000000,     ///<Disabled
            frozen=0x00000002,     ///<Frozen Mode
            ready=0x00000003,     ///<Ready Mode
        };
        namespace exnwModeValC{
            constexpr MPL::Value<exnwModeVal,exnwModeVal::disabled> disabled{};
            constexpr MPL::Value<exnwModeVal,exnwModeVal::frozen> frozen{};
            constexpr MPL::Value<exnwModeVal,exnwModeVal::ready> ready{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,exnwModeVal> exnwMode{}; 
        ///Byte Access Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        ///Data Bus Width
        enum class dbwVal {
            bit8=0x00000000,     ///<8-bit bus
            bit16=0x00000001,     ///<16-bit bus
        };
        namespace dbwValC{
            constexpr MPL::Value<dbwVal,dbwVal::bit8> bit8{};
            constexpr MPL::Value<dbwVal,dbwVal::bit16> bit16{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dbwVal> dbw{}; 
        ///Data Float Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        ///TDF Optimization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
    }
    namespace SmcSetup4{    ///<SMC Setup Register (CS_number = 4)
        using Addr = Register::Address<0x400e00c0,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        ///NCS Setup Length in Write Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        ///NRD Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        ///NCS Setup Length in Read Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
    }
    namespace SmcPulse4{    ///<SMC Pulse Register (CS_number = 4)
        using Addr = Register::Address<0x400e00c4,0xc0c0c0c0,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        ///NCS Pulse Length in WRITE Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        ///NRD Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        ///NCS Pulse Length in READ Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
    }
    namespace SmcCycle4{    ///<SMC Cycle Register (CS_number = 4)
        using Addr = Register::Address<0x400e00c8,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcTimings4{    ///<SMC Timings Register (CS_number = 4)
        using Addr = Register::Address<0x400e00cc,0x00f0e000,0,unsigned>;
        ///CLE to REN Low Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tclr{}; 
        ///ALE to Data Start
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tadl{}; 
        ///ALE to REN Low Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tar{}; 
        ///Off Chip Memory Scrambling Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ocms{}; 
        ///Ready to REN Low Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> trr{}; 
        ///WEN High to REN to Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> twb{}; 
        ///Ready/Busy Line Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> rbnsel{}; 
        ///NAND Flash Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nfsel{}; 
    }
    namespace SmcMode4{    ///<SMC Mode Register (CS_number = 4)
        using Addr = Register::Address<0x400e00d0,0xffe0eecc,0,unsigned>;
        ///None
        enum class readModeVal {
            ncsCtrl=0x00000000,     ///<The Read operation is controlled by the NCS signal.
            nrdCtrl=0x00000001,     ///<The Read operation is controlled by the NRD signal.
        };
        namespace readModeValC{
            constexpr MPL::Value<readModeVal,readModeVal::ncsCtrl> ncsCtrl{};
            constexpr MPL::Value<readModeVal,readModeVal::nrdCtrl> nrdCtrl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,readModeVal> readMode{}; 
        ///None
        enum class writeModeVal {
            ncsCtrl=0x00000000,     ///<The Write operation is controller by the NCS signal.
            nweCtrl=0x00000001,     ///<The Write operation is controlled by the NWE signal.
        };
        namespace writeModeValC{
            constexpr MPL::Value<writeModeVal,writeModeVal::ncsCtrl> ncsCtrl{};
            constexpr MPL::Value<writeModeVal,writeModeVal::nweCtrl> nweCtrl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,writeModeVal> writeMode{}; 
        ///NWAIT Mode
        enum class exnwModeVal {
            disabled=0x00000000,     ///<Disabled
            frozen=0x00000002,     ///<Frozen Mode
            ready=0x00000003,     ///<Ready Mode
        };
        namespace exnwModeValC{
            constexpr MPL::Value<exnwModeVal,exnwModeVal::disabled> disabled{};
            constexpr MPL::Value<exnwModeVal,exnwModeVal::frozen> frozen{};
            constexpr MPL::Value<exnwModeVal,exnwModeVal::ready> ready{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,exnwModeVal> exnwMode{}; 
        ///Byte Access Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        ///Data Bus Width
        enum class dbwVal {
            bit8=0x00000000,     ///<8-bit bus
            bit16=0x00000001,     ///<16-bit bus
        };
        namespace dbwValC{
            constexpr MPL::Value<dbwVal,dbwVal::bit8> bit8{};
            constexpr MPL::Value<dbwVal,dbwVal::bit16> bit16{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dbwVal> dbw{}; 
        ///Data Float Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        ///TDF Optimization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
    }
    namespace SmcSetup5{    ///<SMC Setup Register (CS_number = 5)
        using Addr = Register::Address<0x400e00d4,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        ///NCS Setup Length in Write Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        ///NRD Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        ///NCS Setup Length in Read Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
    }
    namespace SmcPulse5{    ///<SMC Pulse Register (CS_number = 5)
        using Addr = Register::Address<0x400e00d8,0xc0c0c0c0,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        ///NCS Pulse Length in WRITE Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        ///NRD Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        ///NCS Pulse Length in READ Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
    }
    namespace SmcCycle5{    ///<SMC Cycle Register (CS_number = 5)
        using Addr = Register::Address<0x400e00dc,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcTimings5{    ///<SMC Timings Register (CS_number = 5)
        using Addr = Register::Address<0x400e00e0,0x00f0e000,0,unsigned>;
        ///CLE to REN Low Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tclr{}; 
        ///ALE to Data Start
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tadl{}; 
        ///ALE to REN Low Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tar{}; 
        ///Off Chip Memory Scrambling Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ocms{}; 
        ///Ready to REN Low Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> trr{}; 
        ///WEN High to REN to Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> twb{}; 
        ///Ready/Busy Line Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> rbnsel{}; 
        ///NAND Flash Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nfsel{}; 
    }
    namespace SmcMode5{    ///<SMC Mode Register (CS_number = 5)
        using Addr = Register::Address<0x400e00e4,0xffe0eecc,0,unsigned>;
        ///None
        enum class readModeVal {
            ncsCtrl=0x00000000,     ///<The Read operation is controlled by the NCS signal.
            nrdCtrl=0x00000001,     ///<The Read operation is controlled by the NRD signal.
        };
        namespace readModeValC{
            constexpr MPL::Value<readModeVal,readModeVal::ncsCtrl> ncsCtrl{};
            constexpr MPL::Value<readModeVal,readModeVal::nrdCtrl> nrdCtrl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,readModeVal> readMode{}; 
        ///None
        enum class writeModeVal {
            ncsCtrl=0x00000000,     ///<The Write operation is controller by the NCS signal.
            nweCtrl=0x00000001,     ///<The Write operation is controlled by the NWE signal.
        };
        namespace writeModeValC{
            constexpr MPL::Value<writeModeVal,writeModeVal::ncsCtrl> ncsCtrl{};
            constexpr MPL::Value<writeModeVal,writeModeVal::nweCtrl> nweCtrl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,writeModeVal> writeMode{}; 
        ///NWAIT Mode
        enum class exnwModeVal {
            disabled=0x00000000,     ///<Disabled
            frozen=0x00000002,     ///<Frozen Mode
            ready=0x00000003,     ///<Ready Mode
        };
        namespace exnwModeValC{
            constexpr MPL::Value<exnwModeVal,exnwModeVal::disabled> disabled{};
            constexpr MPL::Value<exnwModeVal,exnwModeVal::frozen> frozen{};
            constexpr MPL::Value<exnwModeVal,exnwModeVal::ready> ready{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,exnwModeVal> exnwMode{}; 
        ///Byte Access Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        ///Data Bus Width
        enum class dbwVal {
            bit8=0x00000000,     ///<8-bit bus
            bit16=0x00000001,     ///<16-bit bus
        };
        namespace dbwValC{
            constexpr MPL::Value<dbwVal,dbwVal::bit8> bit8{};
            constexpr MPL::Value<dbwVal,dbwVal::bit16> bit16{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dbwVal> dbw{}; 
        ///Data Float Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        ///TDF Optimization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
    }
    namespace SmcSetup6{    ///<SMC Setup Register (CS_number = 6)
        using Addr = Register::Address<0x400e00e8,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        ///NCS Setup Length in Write Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        ///NRD Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        ///NCS Setup Length in Read Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
    }
    namespace SmcPulse6{    ///<SMC Pulse Register (CS_number = 6)
        using Addr = Register::Address<0x400e00ec,0xc0c0c0c0,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        ///NCS Pulse Length in WRITE Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        ///NRD Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        ///NCS Pulse Length in READ Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
    }
    namespace SmcCycle6{    ///<SMC Cycle Register (CS_number = 6)
        using Addr = Register::Address<0x400e00f0,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcTimings6{    ///<SMC Timings Register (CS_number = 6)
        using Addr = Register::Address<0x400e00f4,0x00f0e000,0,unsigned>;
        ///CLE to REN Low Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tclr{}; 
        ///ALE to Data Start
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tadl{}; 
        ///ALE to REN Low Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tar{}; 
        ///Off Chip Memory Scrambling Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ocms{}; 
        ///Ready to REN Low Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> trr{}; 
        ///WEN High to REN to Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> twb{}; 
        ///Ready/Busy Line Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> rbnsel{}; 
        ///NAND Flash Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nfsel{}; 
    }
    namespace SmcMode6{    ///<SMC Mode Register (CS_number = 6)
        using Addr = Register::Address<0x400e00f8,0xffe0eecc,0,unsigned>;
        ///None
        enum class readModeVal {
            ncsCtrl=0x00000000,     ///<The Read operation is controlled by the NCS signal.
            nrdCtrl=0x00000001,     ///<The Read operation is controlled by the NRD signal.
        };
        namespace readModeValC{
            constexpr MPL::Value<readModeVal,readModeVal::ncsCtrl> ncsCtrl{};
            constexpr MPL::Value<readModeVal,readModeVal::nrdCtrl> nrdCtrl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,readModeVal> readMode{}; 
        ///None
        enum class writeModeVal {
            ncsCtrl=0x00000000,     ///<The Write operation is controller by the NCS signal.
            nweCtrl=0x00000001,     ///<The Write operation is controlled by the NWE signal.
        };
        namespace writeModeValC{
            constexpr MPL::Value<writeModeVal,writeModeVal::ncsCtrl> ncsCtrl{};
            constexpr MPL::Value<writeModeVal,writeModeVal::nweCtrl> nweCtrl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,writeModeVal> writeMode{}; 
        ///NWAIT Mode
        enum class exnwModeVal {
            disabled=0x00000000,     ///<Disabled
            frozen=0x00000002,     ///<Frozen Mode
            ready=0x00000003,     ///<Ready Mode
        };
        namespace exnwModeValC{
            constexpr MPL::Value<exnwModeVal,exnwModeVal::disabled> disabled{};
            constexpr MPL::Value<exnwModeVal,exnwModeVal::frozen> frozen{};
            constexpr MPL::Value<exnwModeVal,exnwModeVal::ready> ready{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,exnwModeVal> exnwMode{}; 
        ///Byte Access Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        ///Data Bus Width
        enum class dbwVal {
            bit8=0x00000000,     ///<8-bit bus
            bit16=0x00000001,     ///<16-bit bus
        };
        namespace dbwValC{
            constexpr MPL::Value<dbwVal,dbwVal::bit8> bit8{};
            constexpr MPL::Value<dbwVal,dbwVal::bit16> bit16{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dbwVal> dbw{}; 
        ///Data Float Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        ///TDF Optimization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
    }
    namespace SmcSetup7{    ///<SMC Setup Register (CS_number = 7)
        using Addr = Register::Address<0x400e00fc,0xc0c0c0c0,0,unsigned>;
        ///NWE Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nweSetup{}; 
        ///NCS Setup Length in Write Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrSetup{}; 
        ///NRD Setup Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdSetup{}; 
        ///NCS Setup Length in Read Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdSetup{}; 
    }
    namespace SmcPulse7{    ///<SMC Pulse Register (CS_number = 7)
        using Addr = Register::Address<0x400e0100,0xc0c0c0c0,0,unsigned>;
        ///NWE Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nwePulse{}; 
        ///NCS Pulse Length in WRITE Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> ncsWrPulse{}; 
        ///NRD Pulse Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> nrdPulse{}; 
        ///NCS Pulse Length in READ Access
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> ncsRdPulse{}; 
    }
    namespace SmcCycle7{    ///<SMC Cycle Register (CS_number = 7)
        using Addr = Register::Address<0x400e0104,0xfe00fe00,0,unsigned>;
        ///Total Write Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> nweCycle{}; 
        ///Total Read Cycle Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> nrdCycle{}; 
    }
    namespace SmcTimings7{    ///<SMC Timings Register (CS_number = 7)
        using Addr = Register::Address<0x400e0108,0x00f0e000,0,unsigned>;
        ///CLE to REN Low Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tclr{}; 
        ///ALE to Data Start
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tadl{}; 
        ///ALE to REN Low Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tar{}; 
        ///Off Chip Memory Scrambling Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ocms{}; 
        ///Ready to REN Low Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> trr{}; 
        ///WEN High to REN to Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> twb{}; 
        ///Ready/Busy Line Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> rbnsel{}; 
        ///NAND Flash Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nfsel{}; 
    }
    namespace SmcMode7{    ///<SMC Mode Register (CS_number = 7)
        using Addr = Register::Address<0x400e010c,0xffe0eecc,0,unsigned>;
        ///None
        enum class readModeVal {
            ncsCtrl=0x00000000,     ///<The Read operation is controlled by the NCS signal.
            nrdCtrl=0x00000001,     ///<The Read operation is controlled by the NRD signal.
        };
        namespace readModeValC{
            constexpr MPL::Value<readModeVal,readModeVal::ncsCtrl> ncsCtrl{};
            constexpr MPL::Value<readModeVal,readModeVal::nrdCtrl> nrdCtrl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,readModeVal> readMode{}; 
        ///None
        enum class writeModeVal {
            ncsCtrl=0x00000000,     ///<The Write operation is controller by the NCS signal.
            nweCtrl=0x00000001,     ///<The Write operation is controlled by the NWE signal.
        };
        namespace writeModeValC{
            constexpr MPL::Value<writeModeVal,writeModeVal::ncsCtrl> ncsCtrl{};
            constexpr MPL::Value<writeModeVal,writeModeVal::nweCtrl> nweCtrl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,writeModeVal> writeMode{}; 
        ///NWAIT Mode
        enum class exnwModeVal {
            disabled=0x00000000,     ///<Disabled
            frozen=0x00000002,     ///<Frozen Mode
            ready=0x00000003,     ///<Ready Mode
        };
        namespace exnwModeValC{
            constexpr MPL::Value<exnwModeVal,exnwModeVal::disabled> disabled{};
            constexpr MPL::Value<exnwModeVal,exnwModeVal::frozen> frozen{};
            constexpr MPL::Value<exnwModeVal,exnwModeVal::ready> ready{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,exnwModeVal> exnwMode{}; 
        ///Byte Access Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bat{}; 
        ///Data Bus Width
        enum class dbwVal {
            bit8=0x00000000,     ///<8-bit bus
            bit16=0x00000001,     ///<16-bit bus
        };
        namespace dbwValC{
            constexpr MPL::Value<dbwVal,dbwVal::bit8> bit8{};
            constexpr MPL::Value<dbwVal,dbwVal::bit16> bit16{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,dbwVal> dbw{}; 
        ///Data Float Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tdfCycles{}; 
        ///TDF Optimization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tdfMode{}; 
    }
    namespace SmcOcms{    ///<SMC OCMS Register
        using Addr = Register::Address<0x400e0110,0xfffffffc,0,unsigned>;
        ///Static Memory Controller Scrambling Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> smse{}; 
        ///SRAM Scrambling Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> srse{}; 
    }
    namespace SmcKey1{    ///<SMC OCMS KEY1 Register
        using Addr = Register::Address<0x400e0114,0x00000000,0,unsigned>;
        ///Off Chip Memory Scrambling (OCMS) Key Part 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> key1{}; 
    }
    namespace SmcKey2{    ///<SMC OCMS KEY2 Register
        using Addr = Register::Address<0x400e0118,0x00000000,0,unsigned>;
        ///Off Chip Memory Scrambling (OCMS) Key Part 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> key2{}; 
    }
    namespace SmcWpcr{    ///<Write Protection Control Register
        using Addr = Register::Address<0x400e01e4,0x000000fe,0,unsigned>;
        ///Write Protection Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpEn{}; 
        ///Write Protection KEY password
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpKey{}; 
    }
    namespace SmcWpsr{    ///<Write Protection Status Register
        using Addr = Register::Address<0x400e01e8,0xff0000f0,0,unsigned>;
        ///Write Protection Violation Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> wpVs{}; 
        ///Write Protection Violation Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpVsrc{}; 
    }
}
