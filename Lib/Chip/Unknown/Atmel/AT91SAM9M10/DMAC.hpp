#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DMA Controller
    namespace DmacGcfg{    ///<DMAC Global Configuration Register
        using Addr = Register::Address<0xffffec00,0xffffffef,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> arbCfg{}; 
    }
    namespace DmacEn{    ///<DMAC Enable Register
        using Addr = Register::Address<0xffffec04,0xfffffffe,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace DmacSreq{    ///<DMAC Software Single Request Register
        using Addr = Register::Address<0xffffec08,0xffff0000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ssreq0{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dsreq0{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ssreq1{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dsreq1{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ssreq2{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dsreq2{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ssreq3{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dsreq3{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ssreq4{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dsreq4{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ssreq5{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dsreq5{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ssreq6{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dsreq6{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ssreq7{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dsreq7{}; 
    }
    namespace DmacCreq{    ///<DMAC Software Chunk Transfer Request Register
        using Addr = Register::Address<0xffffec0c,0xffff0000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> screq0{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcreq0{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> screq1{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dcreq1{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> screq2{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dcreq2{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> screq3{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dcreq3{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> screq4{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dcreq4{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> screq5{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dcreq5{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> screq6{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dcreq6{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> screq7{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dcreq7{}; 
    }
    namespace DmacLast{    ///<DMAC Software Last Transfer Flag Register
        using Addr = Register::Address<0xffffec10,0xffff0000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> slast0{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dlast0{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> slast1{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dlast1{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> slast2{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dlast2{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> slast3{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dlast3{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> slast4{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dlast4{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> slast5{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dlast5{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> slast6{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dlast6{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> slast7{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dlast7{}; 
    }
    namespace DmacEbcier{    ///<DMAC Error, Chained Buffer transfer completed and Buffer transfer completed Interrupt Enable register.
        using Addr = Register::Address<0xffffec18,0xff000000,0,unsigned>;
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btc4{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btc5{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btc6{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btc7{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cbtc4{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cbtc5{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cbtc6{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cbtc7{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> err4{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> err5{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> err6{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> err7{}; 
    }
    namespace DmacEbcidr{    ///<DMAC Error, Chained Buffer transfer completed and Buffer transfer completed Interrupt Disable register.
        using Addr = Register::Address<0xffffec1c,0xff000000,0,unsigned>;
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btc4{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btc5{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btc6{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btc7{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cbtc4{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cbtc5{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cbtc6{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cbtc7{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> err4{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> err5{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> err6{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> err7{}; 
    }
    namespace DmacEbcimr{    ///<DMAC Error, Chained Buffer transfer completed and Buffer transfer completed Mask Register.
        using Addr = Register::Address<0xffffec20,0xff000000,0,unsigned>;
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btc4{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btc5{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btc6{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btc7{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cbtc4{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cbtc5{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cbtc6{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cbtc7{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> err4{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> err5{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> err6{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> err7{}; 
    }
    namespace DmacEbcisr{    ///<DMAC Error, Chained Buffer transfer completed and Buffer transfer completed Status Register.
        using Addr = Register::Address<0xffffec24,0xff000000,0,unsigned>;
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btc4{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btc5{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btc6{}; 
        ///Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btc7{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cbtc4{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cbtc5{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cbtc6{}; 
        ///Chained Buffer Transfer Completed [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cbtc7{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> err4{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> err5{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> err6{}; 
        ///Access Error [7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> err7{}; 
    }
    namespace DmacCher{    ///<DMAC Channel Handler Enable Register
        using Addr = Register::Address<0xffffec28,0x00ff0000,0,unsigned>;
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ena4{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ena5{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ena6{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ena7{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> susp0{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> susp1{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> susp2{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> susp3{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> susp4{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> susp5{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> susp6{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> susp7{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> keep0{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> keep1{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> keep2{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> keep3{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> keep4{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> keep5{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> keep6{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> keep7{}; 
    }
    namespace DmacChdr{    ///<DMAC Channel Handler Disable Register
        using Addr = Register::Address<0xffffec2c,0xffff0000,0,unsigned>;
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dis0{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dis1{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dis2{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dis3{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dis4{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dis5{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dis6{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dis7{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> res0{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> res1{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> res2{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> res3{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> res4{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> res5{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> res6{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> res7{}; 
    }
    namespace DmacChsr{    ///<DMAC Channel Handler Status Register
        using Addr = Register::Address<0xffffec30,0x00000000,0,unsigned>;
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ena4{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ena5{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ena6{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ena7{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> susp0{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> susp1{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> susp2{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> susp3{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> susp4{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> susp5{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> susp6{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> susp7{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> empt0{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> empt1{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> empt2{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> empt3{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> empt4{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> empt5{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> empt6{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> empt7{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> stal0{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> stal1{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> stal2{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> stal3{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> stal4{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> stal5{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> stal6{}; 
        ///[7:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> stal7{}; 
    }
    namespace DmacSaddr0{    ///<DMAC Channel Source Address Register (ch_num = 0)
        using Addr = Register::Address<0xffffec3c,0x00000000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmacDaddr0{    ///<DMAC Channel Destination Address Register (ch_num = 0)
        using Addr = Register::Address<0xffffec40,0x00000000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmacDscr0{    ///<DMAC Channel Descriptor Address Register (ch_num = 0)
        using Addr = Register::Address<0xffffec44,0x00000000,0,unsigned>;
        ///None
        enum class dscrIfVal {
            ahbIfo=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        namespace dscrIfValC{
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIfo> ahbIfo{};
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf1> ahbIf1{};
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf2> ahbIf2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,dscrIfVal> dscrIf{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace DmacCtrla0{    ///<DMAC Channel Control A Register (ch_num = 0)
        using Addr = Register::Address<0xffffec48,0x4c880000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///None
        enum class scsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        namespace scsizeValC{
            constexpr MPL::Value<scsizeVal,scsizeVal::chk1> chk1{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk4> chk4{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk8> chk8{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk16> chk16{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk32> chk32{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk64> chk64{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk128> chk128{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk256> chk256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,scsizeVal> scsize{}; 
        ///None
        enum class dcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        namespace dcsizeValC{
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk1> chk1{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk4> chk4{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk8> chk8{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk16> chk16{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk32> chk32{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk64> chk64{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk128> chk128{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk256> chk256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,dcsizeVal> dcsize{}; 
        ///None
        enum class srcWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace srcWidthValC{
            constexpr MPL::Value<srcWidthVal,srcWidthVal::byte> byte{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcWidthVal> srcWidth{}; 
        ///None
        enum class dstWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace dstWidthValC{
            constexpr MPL::Value<dstWidthVal,dstWidthVal::byte> byte{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstWidthVal> dstWidth{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace DmacCtrlb0{    ///<DMAC Channel Control B Register (ch_num = 0)
        using Addr = Register::Address<0xffffec4c,0x0c0effcc,0,unsigned>;
        ///Source Interface Selection Field
        enum class sifVal {
            ahbIfo=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB-Lite Interface 2
        };
        namespace sifValC{
            constexpr MPL::Value<sifVal,sifVal::ahbIfo> ahbIfo{};
            constexpr MPL::Value<sifVal,sifVal::ahbIf1> ahbIf1{};
            constexpr MPL::Value<sifVal,sifVal::ahbIf2> ahbIf2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sifVal> sif{}; 
        ///Destination Interface Selection Field
        enum class difVal {
            ahbIfo=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB-Lite Interface 2
        };
        namespace difValC{
            constexpr MPL::Value<difVal,difVal::ahbIfo> ahbIfo{};
            constexpr MPL::Value<difVal,difVal::ahbIf1> ahbIf1{};
            constexpr MPL::Value<difVal,difVal::ahbIf2> ahbIf2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,difVal> dif{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srcDscr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dstDscr{}; 
        ///None
        enum class fcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2memPerFc=0x00000004,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            mem2perPerFc=0x00000005,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2perSperFc=0x00000006,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2perDperFc=0x00000007,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        namespace fcValC{
            constexpr MPL::Value<fcVal,fcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::per2memDmaFc> per2memDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::per2perDmaFc> per2perDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::per2memPerFc> per2memPerFc{};
            constexpr MPL::Value<fcVal,fcVal::mem2perPerFc> mem2perPerFc{};
            constexpr MPL::Value<fcVal,fcVal::per2perSperFc> per2perSperFc{};
            constexpr MPL::Value<fcVal,fcVal::per2perDperFc> per2perDperFc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,fcVal> fc{}; 
        ///None
        enum class srcIncrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        namespace srcIncrValC{
            constexpr MPL::Value<srcIncrVal,srcIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcIncrVal> srcIncr{}; 
        ///None
        enum class dstIncrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        namespace dstIncrValC{
            constexpr MPL::Value<dstIncrVal,dstIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstIncrVal> dstIncr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> auto_{}; 
    }
    namespace DmacCfg0{    ///<DMAC Channel Configuration Register (ch_num = 0)
        using Addr = Register::Address<0xffffec50,0xc88ecc00,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srcRep{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srcH2sel{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dstRep{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dstH2sel{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sod{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lockIf{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lockB{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lockIfL{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///None
        enum class fifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        namespace fifocfgValC{
            constexpr MPL::Value<fifocfgVal,fifocfgVal::alapCfg> alapCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::halfCfg> halfCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::asapCfg> asapCfg{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,fifocfgVal> fifocfg{}; 
    }
    namespace DmacSaddr1{    ///<DMAC Channel Source Address Register (ch_num = 1)
        using Addr = Register::Address<0xffffec64,0x00000000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmacDaddr1{    ///<DMAC Channel Destination Address Register (ch_num = 1)
        using Addr = Register::Address<0xffffec68,0x00000000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmacDscr1{    ///<DMAC Channel Descriptor Address Register (ch_num = 1)
        using Addr = Register::Address<0xffffec6c,0x00000000,0,unsigned>;
        ///None
        enum class dscrIfVal {
            ahbIfo=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        namespace dscrIfValC{
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIfo> ahbIfo{};
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf1> ahbIf1{};
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf2> ahbIf2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,dscrIfVal> dscrIf{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace DmacCtrla1{    ///<DMAC Channel Control A Register (ch_num = 1)
        using Addr = Register::Address<0xffffec70,0x4c880000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///None
        enum class scsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        namespace scsizeValC{
            constexpr MPL::Value<scsizeVal,scsizeVal::chk1> chk1{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk4> chk4{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk8> chk8{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk16> chk16{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk32> chk32{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk64> chk64{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk128> chk128{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk256> chk256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,scsizeVal> scsize{}; 
        ///None
        enum class dcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        namespace dcsizeValC{
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk1> chk1{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk4> chk4{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk8> chk8{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk16> chk16{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk32> chk32{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk64> chk64{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk128> chk128{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk256> chk256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,dcsizeVal> dcsize{}; 
        ///None
        enum class srcWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace srcWidthValC{
            constexpr MPL::Value<srcWidthVal,srcWidthVal::byte> byte{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcWidthVal> srcWidth{}; 
        ///None
        enum class dstWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace dstWidthValC{
            constexpr MPL::Value<dstWidthVal,dstWidthVal::byte> byte{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstWidthVal> dstWidth{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace DmacCtrlb1{    ///<DMAC Channel Control B Register (ch_num = 1)
        using Addr = Register::Address<0xffffec74,0x0c0effcc,0,unsigned>;
        ///Source Interface Selection Field
        enum class sifVal {
            ahbIfo=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB-Lite Interface 2
        };
        namespace sifValC{
            constexpr MPL::Value<sifVal,sifVal::ahbIfo> ahbIfo{};
            constexpr MPL::Value<sifVal,sifVal::ahbIf1> ahbIf1{};
            constexpr MPL::Value<sifVal,sifVal::ahbIf2> ahbIf2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sifVal> sif{}; 
        ///Destination Interface Selection Field
        enum class difVal {
            ahbIfo=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB-Lite Interface 2
        };
        namespace difValC{
            constexpr MPL::Value<difVal,difVal::ahbIfo> ahbIfo{};
            constexpr MPL::Value<difVal,difVal::ahbIf1> ahbIf1{};
            constexpr MPL::Value<difVal,difVal::ahbIf2> ahbIf2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,difVal> dif{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srcDscr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dstDscr{}; 
        ///None
        enum class fcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2memPerFc=0x00000004,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            mem2perPerFc=0x00000005,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2perSperFc=0x00000006,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2perDperFc=0x00000007,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        namespace fcValC{
            constexpr MPL::Value<fcVal,fcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::per2memDmaFc> per2memDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::per2perDmaFc> per2perDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::per2memPerFc> per2memPerFc{};
            constexpr MPL::Value<fcVal,fcVal::mem2perPerFc> mem2perPerFc{};
            constexpr MPL::Value<fcVal,fcVal::per2perSperFc> per2perSperFc{};
            constexpr MPL::Value<fcVal,fcVal::per2perDperFc> per2perDperFc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,fcVal> fc{}; 
        ///None
        enum class srcIncrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        namespace srcIncrValC{
            constexpr MPL::Value<srcIncrVal,srcIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcIncrVal> srcIncr{}; 
        ///None
        enum class dstIncrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        namespace dstIncrValC{
            constexpr MPL::Value<dstIncrVal,dstIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstIncrVal> dstIncr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> auto_{}; 
    }
    namespace DmacCfg1{    ///<DMAC Channel Configuration Register (ch_num = 1)
        using Addr = Register::Address<0xffffec78,0xc88ecc00,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srcRep{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srcH2sel{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dstRep{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dstH2sel{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sod{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lockIf{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lockB{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lockIfL{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///None
        enum class fifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        namespace fifocfgValC{
            constexpr MPL::Value<fifocfgVal,fifocfgVal::alapCfg> alapCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::halfCfg> halfCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::asapCfg> asapCfg{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,fifocfgVal> fifocfg{}; 
    }
    namespace DmacSaddr2{    ///<DMAC Channel Source Address Register (ch_num = 2)
        using Addr = Register::Address<0xffffec8c,0x00000000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmacDaddr2{    ///<DMAC Channel Destination Address Register (ch_num = 2)
        using Addr = Register::Address<0xffffec90,0x00000000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmacDscr2{    ///<DMAC Channel Descriptor Address Register (ch_num = 2)
        using Addr = Register::Address<0xffffec94,0x00000000,0,unsigned>;
        ///None
        enum class dscrIfVal {
            ahbIfo=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        namespace dscrIfValC{
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIfo> ahbIfo{};
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf1> ahbIf1{};
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf2> ahbIf2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,dscrIfVal> dscrIf{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace DmacCtrla2{    ///<DMAC Channel Control A Register (ch_num = 2)
        using Addr = Register::Address<0xffffec98,0x4c880000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///None
        enum class scsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        namespace scsizeValC{
            constexpr MPL::Value<scsizeVal,scsizeVal::chk1> chk1{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk4> chk4{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk8> chk8{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk16> chk16{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk32> chk32{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk64> chk64{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk128> chk128{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk256> chk256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,scsizeVal> scsize{}; 
        ///None
        enum class dcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        namespace dcsizeValC{
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk1> chk1{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk4> chk4{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk8> chk8{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk16> chk16{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk32> chk32{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk64> chk64{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk128> chk128{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk256> chk256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,dcsizeVal> dcsize{}; 
        ///None
        enum class srcWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace srcWidthValC{
            constexpr MPL::Value<srcWidthVal,srcWidthVal::byte> byte{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcWidthVal> srcWidth{}; 
        ///None
        enum class dstWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace dstWidthValC{
            constexpr MPL::Value<dstWidthVal,dstWidthVal::byte> byte{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstWidthVal> dstWidth{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace DmacCtrlb2{    ///<DMAC Channel Control B Register (ch_num = 2)
        using Addr = Register::Address<0xffffec9c,0x0c0effcc,0,unsigned>;
        ///Source Interface Selection Field
        enum class sifVal {
            ahbIfo=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB-Lite Interface 2
        };
        namespace sifValC{
            constexpr MPL::Value<sifVal,sifVal::ahbIfo> ahbIfo{};
            constexpr MPL::Value<sifVal,sifVal::ahbIf1> ahbIf1{};
            constexpr MPL::Value<sifVal,sifVal::ahbIf2> ahbIf2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sifVal> sif{}; 
        ///Destination Interface Selection Field
        enum class difVal {
            ahbIfo=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB-Lite Interface 2
        };
        namespace difValC{
            constexpr MPL::Value<difVal,difVal::ahbIfo> ahbIfo{};
            constexpr MPL::Value<difVal,difVal::ahbIf1> ahbIf1{};
            constexpr MPL::Value<difVal,difVal::ahbIf2> ahbIf2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,difVal> dif{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srcDscr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dstDscr{}; 
        ///None
        enum class fcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2memPerFc=0x00000004,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            mem2perPerFc=0x00000005,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2perSperFc=0x00000006,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2perDperFc=0x00000007,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        namespace fcValC{
            constexpr MPL::Value<fcVal,fcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::per2memDmaFc> per2memDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::per2perDmaFc> per2perDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::per2memPerFc> per2memPerFc{};
            constexpr MPL::Value<fcVal,fcVal::mem2perPerFc> mem2perPerFc{};
            constexpr MPL::Value<fcVal,fcVal::per2perSperFc> per2perSperFc{};
            constexpr MPL::Value<fcVal,fcVal::per2perDperFc> per2perDperFc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,fcVal> fc{}; 
        ///None
        enum class srcIncrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        namespace srcIncrValC{
            constexpr MPL::Value<srcIncrVal,srcIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcIncrVal> srcIncr{}; 
        ///None
        enum class dstIncrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        namespace dstIncrValC{
            constexpr MPL::Value<dstIncrVal,dstIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstIncrVal> dstIncr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> auto_{}; 
    }
    namespace DmacCfg2{    ///<DMAC Channel Configuration Register (ch_num = 2)
        using Addr = Register::Address<0xffffeca0,0xc88ecc00,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srcRep{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srcH2sel{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dstRep{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dstH2sel{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sod{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lockIf{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lockB{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lockIfL{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///None
        enum class fifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        namespace fifocfgValC{
            constexpr MPL::Value<fifocfgVal,fifocfgVal::alapCfg> alapCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::halfCfg> halfCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::asapCfg> asapCfg{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,fifocfgVal> fifocfg{}; 
    }
    namespace DmacSaddr3{    ///<DMAC Channel Source Address Register (ch_num = 3)
        using Addr = Register::Address<0xffffecb4,0x00000000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmacDaddr3{    ///<DMAC Channel Destination Address Register (ch_num = 3)
        using Addr = Register::Address<0xffffecb8,0x00000000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmacDscr3{    ///<DMAC Channel Descriptor Address Register (ch_num = 3)
        using Addr = Register::Address<0xffffecbc,0x00000000,0,unsigned>;
        ///None
        enum class dscrIfVal {
            ahbIfo=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        namespace dscrIfValC{
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIfo> ahbIfo{};
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf1> ahbIf1{};
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf2> ahbIf2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,dscrIfVal> dscrIf{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace DmacCtrla3{    ///<DMAC Channel Control A Register (ch_num = 3)
        using Addr = Register::Address<0xffffecc0,0x4c880000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///None
        enum class scsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        namespace scsizeValC{
            constexpr MPL::Value<scsizeVal,scsizeVal::chk1> chk1{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk4> chk4{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk8> chk8{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk16> chk16{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk32> chk32{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk64> chk64{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk128> chk128{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk256> chk256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,scsizeVal> scsize{}; 
        ///None
        enum class dcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        namespace dcsizeValC{
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk1> chk1{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk4> chk4{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk8> chk8{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk16> chk16{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk32> chk32{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk64> chk64{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk128> chk128{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk256> chk256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,dcsizeVal> dcsize{}; 
        ///None
        enum class srcWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace srcWidthValC{
            constexpr MPL::Value<srcWidthVal,srcWidthVal::byte> byte{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcWidthVal> srcWidth{}; 
        ///None
        enum class dstWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace dstWidthValC{
            constexpr MPL::Value<dstWidthVal,dstWidthVal::byte> byte{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstWidthVal> dstWidth{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace DmacCtrlb3{    ///<DMAC Channel Control B Register (ch_num = 3)
        using Addr = Register::Address<0xffffecc4,0x0c0effcc,0,unsigned>;
        ///Source Interface Selection Field
        enum class sifVal {
            ahbIfo=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB-Lite Interface 2
        };
        namespace sifValC{
            constexpr MPL::Value<sifVal,sifVal::ahbIfo> ahbIfo{};
            constexpr MPL::Value<sifVal,sifVal::ahbIf1> ahbIf1{};
            constexpr MPL::Value<sifVal,sifVal::ahbIf2> ahbIf2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sifVal> sif{}; 
        ///Destination Interface Selection Field
        enum class difVal {
            ahbIfo=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB-Lite Interface 2
        };
        namespace difValC{
            constexpr MPL::Value<difVal,difVal::ahbIfo> ahbIfo{};
            constexpr MPL::Value<difVal,difVal::ahbIf1> ahbIf1{};
            constexpr MPL::Value<difVal,difVal::ahbIf2> ahbIf2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,difVal> dif{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srcDscr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dstDscr{}; 
        ///None
        enum class fcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2memPerFc=0x00000004,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            mem2perPerFc=0x00000005,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2perSperFc=0x00000006,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2perDperFc=0x00000007,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        namespace fcValC{
            constexpr MPL::Value<fcVal,fcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::per2memDmaFc> per2memDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::per2perDmaFc> per2perDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::per2memPerFc> per2memPerFc{};
            constexpr MPL::Value<fcVal,fcVal::mem2perPerFc> mem2perPerFc{};
            constexpr MPL::Value<fcVal,fcVal::per2perSperFc> per2perSperFc{};
            constexpr MPL::Value<fcVal,fcVal::per2perDperFc> per2perDperFc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,fcVal> fc{}; 
        ///None
        enum class srcIncrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        namespace srcIncrValC{
            constexpr MPL::Value<srcIncrVal,srcIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcIncrVal> srcIncr{}; 
        ///None
        enum class dstIncrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        namespace dstIncrValC{
            constexpr MPL::Value<dstIncrVal,dstIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstIncrVal> dstIncr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> auto_{}; 
    }
    namespace DmacCfg3{    ///<DMAC Channel Configuration Register (ch_num = 3)
        using Addr = Register::Address<0xffffecc8,0xc88ecc00,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srcRep{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srcH2sel{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dstRep{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dstH2sel{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sod{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lockIf{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lockB{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lockIfL{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///None
        enum class fifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        namespace fifocfgValC{
            constexpr MPL::Value<fifocfgVal,fifocfgVal::alapCfg> alapCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::halfCfg> halfCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::asapCfg> asapCfg{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,fifocfgVal> fifocfg{}; 
    }
    namespace DmacSaddr4{    ///<DMAC Channel Source Address Register (ch_num = 4)
        using Addr = Register::Address<0xffffecdc,0x00000000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmacDaddr4{    ///<DMAC Channel Destination Address Register (ch_num = 4)
        using Addr = Register::Address<0xffffece0,0x00000000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmacDscr4{    ///<DMAC Channel Descriptor Address Register (ch_num = 4)
        using Addr = Register::Address<0xffffece4,0x00000000,0,unsigned>;
        ///None
        enum class dscrIfVal {
            ahbIfo=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        namespace dscrIfValC{
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIfo> ahbIfo{};
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf1> ahbIf1{};
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf2> ahbIf2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,dscrIfVal> dscrIf{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace DmacCtrla4{    ///<DMAC Channel Control A Register (ch_num = 4)
        using Addr = Register::Address<0xffffece8,0x4c880000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///None
        enum class scsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        namespace scsizeValC{
            constexpr MPL::Value<scsizeVal,scsizeVal::chk1> chk1{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk4> chk4{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk8> chk8{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk16> chk16{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk32> chk32{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk64> chk64{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk128> chk128{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk256> chk256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,scsizeVal> scsize{}; 
        ///None
        enum class dcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        namespace dcsizeValC{
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk1> chk1{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk4> chk4{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk8> chk8{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk16> chk16{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk32> chk32{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk64> chk64{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk128> chk128{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk256> chk256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,dcsizeVal> dcsize{}; 
        ///None
        enum class srcWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace srcWidthValC{
            constexpr MPL::Value<srcWidthVal,srcWidthVal::byte> byte{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcWidthVal> srcWidth{}; 
        ///None
        enum class dstWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace dstWidthValC{
            constexpr MPL::Value<dstWidthVal,dstWidthVal::byte> byte{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstWidthVal> dstWidth{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace DmacCtrlb4{    ///<DMAC Channel Control B Register (ch_num = 4)
        using Addr = Register::Address<0xffffecec,0x0c0effcc,0,unsigned>;
        ///Source Interface Selection Field
        enum class sifVal {
            ahbIfo=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB-Lite Interface 2
        };
        namespace sifValC{
            constexpr MPL::Value<sifVal,sifVal::ahbIfo> ahbIfo{};
            constexpr MPL::Value<sifVal,sifVal::ahbIf1> ahbIf1{};
            constexpr MPL::Value<sifVal,sifVal::ahbIf2> ahbIf2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sifVal> sif{}; 
        ///Destination Interface Selection Field
        enum class difVal {
            ahbIfo=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB-Lite Interface 2
        };
        namespace difValC{
            constexpr MPL::Value<difVal,difVal::ahbIfo> ahbIfo{};
            constexpr MPL::Value<difVal,difVal::ahbIf1> ahbIf1{};
            constexpr MPL::Value<difVal,difVal::ahbIf2> ahbIf2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,difVal> dif{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srcDscr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dstDscr{}; 
        ///None
        enum class fcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2memPerFc=0x00000004,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            mem2perPerFc=0x00000005,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2perSperFc=0x00000006,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2perDperFc=0x00000007,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        namespace fcValC{
            constexpr MPL::Value<fcVal,fcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::per2memDmaFc> per2memDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::per2perDmaFc> per2perDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::per2memPerFc> per2memPerFc{};
            constexpr MPL::Value<fcVal,fcVal::mem2perPerFc> mem2perPerFc{};
            constexpr MPL::Value<fcVal,fcVal::per2perSperFc> per2perSperFc{};
            constexpr MPL::Value<fcVal,fcVal::per2perDperFc> per2perDperFc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,fcVal> fc{}; 
        ///None
        enum class srcIncrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        namespace srcIncrValC{
            constexpr MPL::Value<srcIncrVal,srcIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcIncrVal> srcIncr{}; 
        ///None
        enum class dstIncrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        namespace dstIncrValC{
            constexpr MPL::Value<dstIncrVal,dstIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstIncrVal> dstIncr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> auto_{}; 
    }
    namespace DmacCfg4{    ///<DMAC Channel Configuration Register (ch_num = 4)
        using Addr = Register::Address<0xffffecf0,0xc88ecc00,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srcRep{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srcH2sel{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dstRep{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dstH2sel{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sod{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lockIf{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lockB{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lockIfL{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///None
        enum class fifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        namespace fifocfgValC{
            constexpr MPL::Value<fifocfgVal,fifocfgVal::alapCfg> alapCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::halfCfg> halfCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::asapCfg> asapCfg{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,fifocfgVal> fifocfg{}; 
    }
    namespace DmacSaddr5{    ///<DMAC Channel Source Address Register (ch_num = 5)
        using Addr = Register::Address<0xffffed04,0x00000000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmacDaddr5{    ///<DMAC Channel Destination Address Register (ch_num = 5)
        using Addr = Register::Address<0xffffed08,0x00000000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmacDscr5{    ///<DMAC Channel Descriptor Address Register (ch_num = 5)
        using Addr = Register::Address<0xffffed0c,0x00000000,0,unsigned>;
        ///None
        enum class dscrIfVal {
            ahbIfo=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        namespace dscrIfValC{
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIfo> ahbIfo{};
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf1> ahbIf1{};
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf2> ahbIf2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,dscrIfVal> dscrIf{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace DmacCtrla5{    ///<DMAC Channel Control A Register (ch_num = 5)
        using Addr = Register::Address<0xffffed10,0x4c880000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///None
        enum class scsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        namespace scsizeValC{
            constexpr MPL::Value<scsizeVal,scsizeVal::chk1> chk1{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk4> chk4{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk8> chk8{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk16> chk16{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk32> chk32{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk64> chk64{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk128> chk128{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk256> chk256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,scsizeVal> scsize{}; 
        ///None
        enum class dcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        namespace dcsizeValC{
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk1> chk1{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk4> chk4{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk8> chk8{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk16> chk16{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk32> chk32{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk64> chk64{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk128> chk128{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk256> chk256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,dcsizeVal> dcsize{}; 
        ///None
        enum class srcWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace srcWidthValC{
            constexpr MPL::Value<srcWidthVal,srcWidthVal::byte> byte{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcWidthVal> srcWidth{}; 
        ///None
        enum class dstWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace dstWidthValC{
            constexpr MPL::Value<dstWidthVal,dstWidthVal::byte> byte{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstWidthVal> dstWidth{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace DmacCtrlb5{    ///<DMAC Channel Control B Register (ch_num = 5)
        using Addr = Register::Address<0xffffed14,0x0c0effcc,0,unsigned>;
        ///Source Interface Selection Field
        enum class sifVal {
            ahbIfo=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB-Lite Interface 2
        };
        namespace sifValC{
            constexpr MPL::Value<sifVal,sifVal::ahbIfo> ahbIfo{};
            constexpr MPL::Value<sifVal,sifVal::ahbIf1> ahbIf1{};
            constexpr MPL::Value<sifVal,sifVal::ahbIf2> ahbIf2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sifVal> sif{}; 
        ///Destination Interface Selection Field
        enum class difVal {
            ahbIfo=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB-Lite Interface 2
        };
        namespace difValC{
            constexpr MPL::Value<difVal,difVal::ahbIfo> ahbIfo{};
            constexpr MPL::Value<difVal,difVal::ahbIf1> ahbIf1{};
            constexpr MPL::Value<difVal,difVal::ahbIf2> ahbIf2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,difVal> dif{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srcDscr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dstDscr{}; 
        ///None
        enum class fcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2memPerFc=0x00000004,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            mem2perPerFc=0x00000005,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2perSperFc=0x00000006,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2perDperFc=0x00000007,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        namespace fcValC{
            constexpr MPL::Value<fcVal,fcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::per2memDmaFc> per2memDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::per2perDmaFc> per2perDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::per2memPerFc> per2memPerFc{};
            constexpr MPL::Value<fcVal,fcVal::mem2perPerFc> mem2perPerFc{};
            constexpr MPL::Value<fcVal,fcVal::per2perSperFc> per2perSperFc{};
            constexpr MPL::Value<fcVal,fcVal::per2perDperFc> per2perDperFc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,fcVal> fc{}; 
        ///None
        enum class srcIncrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        namespace srcIncrValC{
            constexpr MPL::Value<srcIncrVal,srcIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcIncrVal> srcIncr{}; 
        ///None
        enum class dstIncrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        namespace dstIncrValC{
            constexpr MPL::Value<dstIncrVal,dstIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstIncrVal> dstIncr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> auto_{}; 
    }
    namespace DmacCfg5{    ///<DMAC Channel Configuration Register (ch_num = 5)
        using Addr = Register::Address<0xffffed18,0xc88ecc00,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srcRep{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srcH2sel{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dstRep{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dstH2sel{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sod{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lockIf{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lockB{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lockIfL{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///None
        enum class fifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        namespace fifocfgValC{
            constexpr MPL::Value<fifocfgVal,fifocfgVal::alapCfg> alapCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::halfCfg> halfCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::asapCfg> asapCfg{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,fifocfgVal> fifocfg{}; 
    }
    namespace DmacSaddr6{    ///<DMAC Channel Source Address Register (ch_num = 6)
        using Addr = Register::Address<0xffffed2c,0x00000000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmacDaddr6{    ///<DMAC Channel Destination Address Register (ch_num = 6)
        using Addr = Register::Address<0xffffed30,0x00000000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmacDscr6{    ///<DMAC Channel Descriptor Address Register (ch_num = 6)
        using Addr = Register::Address<0xffffed34,0x00000000,0,unsigned>;
        ///None
        enum class dscrIfVal {
            ahbIfo=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        namespace dscrIfValC{
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIfo> ahbIfo{};
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf1> ahbIf1{};
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf2> ahbIf2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,dscrIfVal> dscrIf{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace DmacCtrla6{    ///<DMAC Channel Control A Register (ch_num = 6)
        using Addr = Register::Address<0xffffed38,0x4c880000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///None
        enum class scsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        namespace scsizeValC{
            constexpr MPL::Value<scsizeVal,scsizeVal::chk1> chk1{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk4> chk4{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk8> chk8{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk16> chk16{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk32> chk32{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk64> chk64{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk128> chk128{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk256> chk256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,scsizeVal> scsize{}; 
        ///None
        enum class dcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        namespace dcsizeValC{
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk1> chk1{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk4> chk4{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk8> chk8{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk16> chk16{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk32> chk32{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk64> chk64{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk128> chk128{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk256> chk256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,dcsizeVal> dcsize{}; 
        ///None
        enum class srcWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace srcWidthValC{
            constexpr MPL::Value<srcWidthVal,srcWidthVal::byte> byte{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcWidthVal> srcWidth{}; 
        ///None
        enum class dstWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace dstWidthValC{
            constexpr MPL::Value<dstWidthVal,dstWidthVal::byte> byte{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstWidthVal> dstWidth{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace DmacCtrlb6{    ///<DMAC Channel Control B Register (ch_num = 6)
        using Addr = Register::Address<0xffffed3c,0x0c0effcc,0,unsigned>;
        ///Source Interface Selection Field
        enum class sifVal {
            ahbIfo=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB-Lite Interface 2
        };
        namespace sifValC{
            constexpr MPL::Value<sifVal,sifVal::ahbIfo> ahbIfo{};
            constexpr MPL::Value<sifVal,sifVal::ahbIf1> ahbIf1{};
            constexpr MPL::Value<sifVal,sifVal::ahbIf2> ahbIf2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sifVal> sif{}; 
        ///Destination Interface Selection Field
        enum class difVal {
            ahbIfo=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB-Lite Interface 2
        };
        namespace difValC{
            constexpr MPL::Value<difVal,difVal::ahbIfo> ahbIfo{};
            constexpr MPL::Value<difVal,difVal::ahbIf1> ahbIf1{};
            constexpr MPL::Value<difVal,difVal::ahbIf2> ahbIf2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,difVal> dif{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srcDscr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dstDscr{}; 
        ///None
        enum class fcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2memPerFc=0x00000004,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            mem2perPerFc=0x00000005,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2perSperFc=0x00000006,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2perDperFc=0x00000007,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        namespace fcValC{
            constexpr MPL::Value<fcVal,fcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::per2memDmaFc> per2memDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::per2perDmaFc> per2perDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::per2memPerFc> per2memPerFc{};
            constexpr MPL::Value<fcVal,fcVal::mem2perPerFc> mem2perPerFc{};
            constexpr MPL::Value<fcVal,fcVal::per2perSperFc> per2perSperFc{};
            constexpr MPL::Value<fcVal,fcVal::per2perDperFc> per2perDperFc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,fcVal> fc{}; 
        ///None
        enum class srcIncrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        namespace srcIncrValC{
            constexpr MPL::Value<srcIncrVal,srcIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcIncrVal> srcIncr{}; 
        ///None
        enum class dstIncrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        namespace dstIncrValC{
            constexpr MPL::Value<dstIncrVal,dstIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstIncrVal> dstIncr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> auto_{}; 
    }
    namespace DmacCfg6{    ///<DMAC Channel Configuration Register (ch_num = 6)
        using Addr = Register::Address<0xffffed40,0xc88ecc00,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srcRep{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srcH2sel{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dstRep{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dstH2sel{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sod{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lockIf{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lockB{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lockIfL{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///None
        enum class fifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        namespace fifocfgValC{
            constexpr MPL::Value<fifocfgVal,fifocfgVal::alapCfg> alapCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::halfCfg> halfCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::asapCfg> asapCfg{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,fifocfgVal> fifocfg{}; 
    }
    namespace DmacSaddr7{    ///<DMAC Channel Source Address Register (ch_num = 7)
        using Addr = Register::Address<0xffffed54,0x00000000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmacDaddr7{    ///<DMAC Channel Destination Address Register (ch_num = 7)
        using Addr = Register::Address<0xffffed58,0x00000000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmacDscr7{    ///<DMAC Channel Descriptor Address Register (ch_num = 7)
        using Addr = Register::Address<0xffffed5c,0x00000000,0,unsigned>;
        ///None
        enum class dscrIfVal {
            ahbIfo=0x00000000,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The buffer transfer descriptor is fetched via AHB-Lite Interface 2
        };
        namespace dscrIfValC{
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIfo> ahbIfo{};
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf1> ahbIf1{};
            constexpr MPL::Value<dscrIfVal,dscrIfVal::ahbIf2> ahbIf2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,dscrIfVal> dscrIf{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace DmacCtrla7{    ///<DMAC Channel Control A Register (ch_num = 7)
        using Addr = Register::Address<0xffffed60,0x4c880000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///None
        enum class scsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        namespace scsizeValC{
            constexpr MPL::Value<scsizeVal,scsizeVal::chk1> chk1{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk4> chk4{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk8> chk8{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk16> chk16{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk32> chk32{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk64> chk64{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk128> chk128{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk256> chk256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,scsizeVal> scsize{}; 
        ///None
        enum class dcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        namespace dcsizeValC{
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk1> chk1{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk4> chk4{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk8> chk8{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk16> chk16{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk32> chk32{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk64> chk64{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk128> chk128{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk256> chk256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,dcsizeVal> dcsize{}; 
        ///None
        enum class srcWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace srcWidthValC{
            constexpr MPL::Value<srcWidthVal,srcWidthVal::byte> byte{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcWidthVal> srcWidth{}; 
        ///None
        enum class dstWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace dstWidthValC{
            constexpr MPL::Value<dstWidthVal,dstWidthVal::byte> byte{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstWidthVal> dstWidth{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace DmacCtrlb7{    ///<DMAC Channel Control B Register (ch_num = 7)
        using Addr = Register::Address<0xffffed64,0x0c0effcc,0,unsigned>;
        ///Source Interface Selection Field
        enum class sifVal {
            ahbIfo=0x00000000,     ///<The source transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The source transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The source transfer is done via AHB-Lite Interface 2
        };
        namespace sifValC{
            constexpr MPL::Value<sifVal,sifVal::ahbIfo> ahbIfo{};
            constexpr MPL::Value<sifVal,sifVal::ahbIf1> ahbIf1{};
            constexpr MPL::Value<sifVal,sifVal::ahbIf2> ahbIf2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sifVal> sif{}; 
        ///Destination Interface Selection Field
        enum class difVal {
            ahbIfo=0x00000000,     ///<The destination transfer is done via AHB-Lite Interface 0
            ahbIf1=0x00000001,     ///<The destination transfer is done via AHB-Lite Interface 1
            ahbIf2=0x00000002,     ///<The destination transfer is done via AHB-Lite Interface 2
        };
        namespace difValC{
            constexpr MPL::Value<difVal,difVal::ahbIfo> ahbIfo{};
            constexpr MPL::Value<difVal,difVal::ahbIf1> ahbIf1{};
            constexpr MPL::Value<difVal,difVal::ahbIf2> ahbIf2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,difVal> dif{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> srcDscr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dstDscr{}; 
        ///None
        enum class fcVal {
            mem2memDmaFc=0x00000000,     ///<Memory-to-Memory Transfer DMAC is flow controller
            mem2perDmaFc=0x00000001,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2memDmaFc=0x00000002,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            per2perDmaFc=0x00000003,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2memPerFc=0x00000004,     ///<Peripheral-to-Memory Transfer DMAC is flow controller
            mem2perPerFc=0x00000005,     ///<Memory-to-Peripheral Transfer DMAC is flow controller
            per2perSperFc=0x00000006,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
            per2perDperFc=0x00000007,     ///<Peripheral-to-Peripheral Transfer DMAC is flow controller
        };
        namespace fcValC{
            constexpr MPL::Value<fcVal,fcVal::mem2memDmaFc> mem2memDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::mem2perDmaFc> mem2perDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::per2memDmaFc> per2memDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::per2perDmaFc> per2perDmaFc{};
            constexpr MPL::Value<fcVal,fcVal::per2memPerFc> per2memPerFc{};
            constexpr MPL::Value<fcVal,fcVal::mem2perPerFc> mem2perPerFc{};
            constexpr MPL::Value<fcVal,fcVal::per2perSperFc> per2perSperFc{};
            constexpr MPL::Value<fcVal,fcVal::per2perDperFc> per2perDperFc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,fcVal> fc{}; 
        ///None
        enum class srcIncrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        namespace srcIncrValC{
            constexpr MPL::Value<srcIncrVal,srcIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcIncrVal> srcIncr{}; 
        ///None
        enum class dstIncrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        namespace dstIncrValC{
            constexpr MPL::Value<dstIncrVal,dstIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstIncrVal> dstIncr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> auto_{}; 
    }
    namespace DmacCfg7{    ///<DMAC Channel Configuration Register (ch_num = 7)
        using Addr = Register::Address<0xffffed68,0xc88ecc00,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srcRep{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> srcH2sel{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dstRep{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dstH2sel{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sod{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lockIf{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lockB{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lockIfL{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///None
        enum class fifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        namespace fifocfgValC{
            constexpr MPL::Value<fifocfgVal,fifocfgVal::alapCfg> alapCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::halfCfg> halfCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::asapCfg> asapCfg{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,fifocfgVal> fifocfg{}; 
    }
    namespace DmacWpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0xffffede4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace DmacWpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0xffffede8,0xff0000fe,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
    }
}
